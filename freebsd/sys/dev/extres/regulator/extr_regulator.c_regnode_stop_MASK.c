
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regnode {scalar_t__ enable_cnt; int flags; struct regnode* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct regnode*,int*) ;
 int FUNC_1 (struct regnode*) ;
 int FUNC_2 (struct regnode*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct regnode*) ;

int
FUNC_6(struct regnode *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_3();
 VAR_5 = 0;

 FUNC_2(VAR_2);

 if ((VAR_2->enable_cnt != 0) && (VAR_3 == 0)) {
  FUNC_1(VAR_2);
  return (VAR_0);
 }

 if ((VAR_2->enable_cnt == 0) &&
     ((VAR_2->flags & VAR_1) == 0)) {
  VAR_5 = FUNC_0(VAR_2, &VAR_4);
  if (VAR_5 != 0) {
   FUNC_1(VAR_2);
   return (VAR_5);
  }
  FUNC_4(VAR_4);
 }
 FUNC_1(VAR_2);

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 != 0)
  return (VAR_5);
 if (VAR_2->parent != ((void*)0) && VAR_2->parent->enable_cnt == 0)
  VAR_5 = FUNC_6(VAR_2->parent, VAR_3 + 1);
 return (VAR_5);
}
