
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode {scalar_t__ parent_cnt; scalar_t__ enable_cnt; struct clknode* parent; } ;


 int FUNC_0 (struct clknode*,int) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int FUNC_3 () ;

int
FUNC_4(struct clknode *VAR_0)
{
 int VAR_1;

 FUNC_3();


 if (VAR_0->parent_cnt > 0) {
  VAR_1 = FUNC_4(VAR_0->parent);
  if (VAR_1 != 0) {
   return (VAR_1);
  }
 }


 FUNC_2(VAR_0);
 if (VAR_0->enable_cnt == 0) {
  VAR_1 = FUNC_0(VAR_0, 1);
  if (VAR_1 != 0) {
   FUNC_1(VAR_0);
   return (VAR_1);
  }
 }
 VAR_0->enable_cnt++;
 FUNC_1(VAR_0);
 return (0);
}
