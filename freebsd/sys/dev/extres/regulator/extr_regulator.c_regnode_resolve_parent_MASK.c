
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regnode {int * parent; int * parent_name; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct regnode *VAR_1)
{


 if ((VAR_1->parent != ((void*)0)) ||
     (VAR_1->parent_name == ((void*)0)))
  return (0);

 VAR_1->parent = FUNC_0(VAR_1->parent_name);
 if (VAR_1->parent == ((void*)0))
  return (VAR_0);
 return (0);
}
