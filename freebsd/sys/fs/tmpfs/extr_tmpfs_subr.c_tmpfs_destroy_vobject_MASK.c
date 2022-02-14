
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* vm_object_t ;
struct vnode {scalar_t__ v_type; scalar_t__ v_writecount; } ;
struct TYPE_8__ {int * swp_tmpfs; } ;
struct TYPE_9__ {TYPE_1__ swp; } ;
struct TYPE_10__ {TYPE_2__ un_pager; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_3__*,int ) ;

void
FUNC_6(struct vnode *VAR_2, vm_object_t VAR_3)
{

 FUNC_0(VAR_2, "tmpfs_destroy_vobject");
 if (VAR_2->v_type != VAR_1 || VAR_3 == ((void*)0))
  return;

 FUNC_3(VAR_3);
 FUNC_1(VAR_2);
 FUNC_5(VAR_3, VAR_0);
 VAR_3->un_pager.swp.swp_tmpfs = ((void*)0);
 if (VAR_2->v_writecount < 0)
  VAR_2->v_writecount = 0;
 FUNC_2(VAR_2);
 FUNC_4(VAR_3);
}
