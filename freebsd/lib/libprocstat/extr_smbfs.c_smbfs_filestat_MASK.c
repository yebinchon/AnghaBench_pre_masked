
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnstat {int vn_fileid; int vn_fsid; } ;
struct vnode {int dummy; } ;
struct TYPE_3__ {int * val; } ;
struct TYPE_4__ {TYPE_1__ f_fsid; } ;
struct smbnode {int n_ino; TYPE_2__ mnt_stat; } ;
struct mount {int n_ino; TYPE_2__ mnt_stat; } ;
typedef int node ;
typedef int mnt ;
typedef struct vnstat kvm_t ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnstat*) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnstat*,unsigned long,struct smbnode*,int) ;
 int FUNC_4 (char*,void*,...) ;

int
FUNC_5(kvm_t *VAR_0, struct vnode *VAR_1, struct vnstat *VAR_2)
{
 struct smbnode VAR_3;
 struct mount VAR_4;
 int VAR_5;

 FUNC_1(VAR_0);
 FUNC_1(VAR_2);
 VAR_5 = FUNC_3(VAR_0, (unsigned long)FUNC_0(VAR_1), &VAR_3,
     sizeof(VAR_3));
 if (VAR_5 != 0) {
  FUNC_4("can't read smbfs fnode at %p", (void *)FUNC_0(VAR_1));
  return (1);
 }
        VAR_5 = FUNC_3(VAR_0, (unsigned long)FUNC_2(VAR_1), &VAR_4,
     sizeof(VAR_4));
        if (VAR_5 != 0) {
                FUNC_4("can't read mount at %p for vnode %p",
                    (void *)FUNC_2(VAR_1), VAR_1);
                return (1);
        }
 VAR_2->vn_fileid = VAR_3.n_ino;
 if (VAR_2->vn_fileid == 0)
  VAR_2->vn_fileid = 2;
 VAR_2->vn_fsid = VAR_4.mnt_stat.f_fsid.val[0];
 return (0);
}
