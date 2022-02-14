
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_fsync_args {scalar_t__ a_waitfor; int a_vp; int a_td; } ;
struct vnode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* de_pmp; } ;
struct TYPE_4__ {struct vnode* pm_devvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vnode*,scalar_t__,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct vnode*,int) ;
 int FUNC_5 (struct vop_fsync_args*) ;

__attribute__((used)) static int
FUNC_6(struct vop_fsync_args *VAR_3)
{
 struct vnode *VAR_4;
 int VAR_5, VAR_6;

 FUNC_5(VAR_3);
 if (VAR_3->a_waitfor == VAR_2) {
  VAR_4 = FUNC_2(VAR_3->a_vp)->de_pmp->pm_devvp;
  FUNC_4(VAR_4, VAR_0 | VAR_1);
  VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3->a_td);
  FUNC_1(VAR_4, 0);
 } else
  VAR_5 = 0;

 VAR_6 = FUNC_3(FUNC_2(VAR_3->a_vp), VAR_3->a_waitfor == VAR_2);
 if (VAR_5 == 0)
  VAR_5 = VAR_6;
 return (VAR_5);
}
