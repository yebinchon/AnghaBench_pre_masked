
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_fsync_args {int a_td; int a_waitfor; TYPE_1__* a_vp; } ;
struct TYPE_2__ {scalar_t__ v_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_fsync_args *VAR_1)
{

 if (VAR_1->a_vp->v_type != VAR_0) {






  return (0);
 }
 return (FUNC_0(VAR_1->a_vp, VAR_1->a_waitfor, VAR_1->a_td, 1, 0));
}
