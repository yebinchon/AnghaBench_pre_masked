
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode {int enable_cnt; int flags; scalar_t__ parent_cnt; struct clknode* parent; } ;


 int FUNC_0 (struct clknode*,int ) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int VAR_0 ;
 int FUNC_3 () ;

int
FUNC_4(struct clknode *VAR_1)
{
 int VAR_2;

 FUNC_3();
 VAR_2 = 0;

 FUNC_2(VAR_1);

 if ((VAR_1->enable_cnt == 1) &&
     ((VAR_1->flags & VAR_0) == 0)) {
  VAR_2 = FUNC_0(VAR_1, 0);
  if (VAR_2 != 0) {
   FUNC_1(VAR_1);
   return (VAR_2);
  }
 }
 VAR_1->enable_cnt--;
 FUNC_1(VAR_1);

 if (VAR_1->parent_cnt > 0) {
  VAR_2 = FUNC_4(VAR_1->parent);
 }
 return (VAR_2);
}
