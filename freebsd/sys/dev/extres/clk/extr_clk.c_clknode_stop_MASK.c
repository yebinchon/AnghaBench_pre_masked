
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode {scalar_t__ enable_cnt; int flags; scalar_t__ parent_cnt; struct clknode* parent; } ;


 int FUNC_0 (struct clknode*,int ) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;

int
FUNC_4(struct clknode *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_3();
 VAR_4 = 0;

 FUNC_2(VAR_2);

 if ((VAR_2->enable_cnt != 0) && (VAR_3 == 0)) {
  FUNC_1(VAR_2);
  return (VAR_1);
 }

 if ((VAR_2->enable_cnt == 0) &&
     ((VAR_2->flags & VAR_0) == 0)) {
  VAR_4 = FUNC_0(VAR_2, 0);
  if (VAR_4 != 0) {
   FUNC_1(VAR_2);
   return (VAR_4);
  }
 }
 FUNC_1(VAR_2);

 if (VAR_2->parent_cnt > 0)
  VAR_4 = FUNC_4(VAR_2->parent, VAR_3 + 1);
 return (VAR_4);
}
