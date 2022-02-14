
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vnode {TYPE_2__* v_mount; } ;
struct vattr {int va_fsid; } ;
struct TYPE_6__ {scalar_t__* val; } ;
typedef TYPE_3__ fsid_t ;
struct TYPE_4__ {TYPE_3__ f_fsid; } ;
struct TYPE_5__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;

void
FUNC_0(struct vnode *VAR_1, struct vattr *VAR_2)
{
 fsid_t *VAR_3;

 VAR_3 = &VAR_1->v_mount->mnt_stat.f_fsid;
 VAR_2->va_fsid = (uint32_t)VAR_3->val[1];
 VAR_2->va_fsid <<= sizeof(VAR_3->val[1]) * VAR_0;
 VAR_2->va_fsid += (uint32_t)VAR_3->val[0];
}
