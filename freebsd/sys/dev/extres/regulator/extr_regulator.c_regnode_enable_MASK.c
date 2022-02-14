
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regnode {scalar_t__ enable_cnt; struct regnode* parent; } ;


 int FUNC_0 (struct regnode*,int,int*) ;
 int FUNC_1 (struct regnode*) ;
 int FUNC_2 (struct regnode*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct regnode*) ;

int
FUNC_6(struct regnode *VAR_0)
{
 int VAR_1;
 int VAR_2;

 FUNC_3();


 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 != 0)
  return (VAR_2);
 if (VAR_0->parent != ((void*)0)) {
  VAR_2 = FUNC_6(VAR_0->parent);
  if (VAR_2 != 0)
   return (VAR_2);
 }


 FUNC_2(VAR_0);
 if (VAR_0->enable_cnt == 0) {
  VAR_2 = FUNC_0(VAR_0, 1, &VAR_1);
  if (VAR_2 != 0) {
   FUNC_1(VAR_0);
   return (VAR_2);
  }
  FUNC_4(VAR_1);
 }
 VAR_0->enable_cnt++;
 FUNC_1(VAR_0);
 return (0);
}
