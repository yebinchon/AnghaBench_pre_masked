
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regnode {struct regnode* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct regnode*,int*) ;
 int FUNC_1 (struct regnode*) ;
 int FUNC_2 (struct regnode*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct regnode*) ;

int
FUNC_5(struct regnode *VAR_1, int *VAR_2)
{
 int VAR_3;

 FUNC_3();

 FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1);


 if (VAR_3 == VAR_0) {
  VAR_3 = FUNC_4(VAR_1);
  if (VAR_3 != 0)
   return (VAR_3);
  if (VAR_1->parent != ((void*)0))
   VAR_3 = FUNC_5(VAR_1->parent, VAR_2);

 }
 return (VAR_3);
}
