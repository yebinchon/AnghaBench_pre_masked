
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_remove_args {TYPE_1__* a_vp; TYPE_1__* a_dvp; } ;
struct denode {int dummy; } ;
struct TYPE_2__ {scalar_t__ v_type; int v_usecount; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct denode* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,struct denode*,int) ;
 int FUNC_2 (struct denode*,struct denode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_remove_args *VAR_2)
{
 struct denode *VAR_3 = FUNC_0(VAR_2->a_vp);
 struct denode *VAR_4 = FUNC_0(VAR_2->a_dvp);
 int VAR_5;

 if (VAR_2->a_vp->v_type == VAR_1)
  VAR_5 = VAR_0;
 else
  VAR_5 = FUNC_2(VAR_4, VAR_3);



 return (VAR_5);
}
