
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnstat {int vn_mode; scalar_t__ vn_size; int vn_fileid; int vn_fsid; } ;
struct vnode {scalar_t__ v_data; } ;
struct TYPE_3__ {int * val; } ;
struct TYPE_4__ {TYPE_1__ f_fsid; } ;
struct mount {int de_mode; int de_inode; TYPE_2__ mnt_stat; } ;
struct devfs_dirent {int de_mode; int de_inode; TYPE_2__ mnt_stat; } ;
typedef int mount ;
typedef int kvm_t ;
typedef int devfs_dirent ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 scalar_t__ FUNC_1 (struct vnode*) ;
 int FUNC_2 (int *,unsigned long,struct mount*,int) ;
 int FUNC_3 (char*,void*) ;

int
FUNC_4(kvm_t *VAR_2, struct vnode *VAR_3, struct vnstat *VAR_4)
{
 struct devfs_dirent VAR_5;
 struct mount VAR_6;

 if (!FUNC_2(VAR_2, (unsigned long)FUNC_0(VAR_3), &VAR_5,
     sizeof(VAR_5))) {
  FUNC_3("can't read devfs_dirent at %p",
      (void *)VAR_3->v_data);
  return (1);
 }
 if (!FUNC_2(VAR_2, (unsigned long)FUNC_1(VAR_3), &VAR_6,
     sizeof(VAR_6))) {
  FUNC_3("can't read mount at %p",
      (void *)FUNC_1(VAR_3));
  return (1);
 }
 VAR_4->vn_fsid = VAR_6.mnt_stat.f_fsid.val[0];
 VAR_4->vn_fileid = VAR_5.de_inode;
 VAR_4->vn_mode = (VAR_5.de_mode & ~VAR_1) | VAR_0;
 VAR_4->vn_size = 0;
 return (0);
}
