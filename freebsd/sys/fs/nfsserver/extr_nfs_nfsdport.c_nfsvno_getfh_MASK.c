
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {TYPE_2__* v_mount; } ;
struct thread {int dummy; } ;
struct TYPE_7__ {int fh_fid; int fh_fsid; } ;
typedef TYPE_3__ fhandle_t ;
typedef int caddr_t ;
struct TYPE_5__ {int f_fsid; } ;
struct TYPE_6__ {TYPE_1__ mnt_stat; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vnode*,int *) ;

int
FUNC_3(struct vnode *VAR_0, fhandle_t *VAR_1, struct thread *VAR_2)
{
 int VAR_3;

 FUNC_0((caddr_t)VAR_1, sizeof(fhandle_t));
 VAR_1->fh_fsid = VAR_0->v_mount->mnt_stat.f_fsid;
 VAR_3 = FUNC_2(VAR_0, &VAR_1->fh_fid);

 FUNC_1(VAR_3);
 return (VAR_3);
}
