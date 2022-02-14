
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static tree
FUNC_5 (tree *VAR_1, int *VAR_2, void *VAR_3)
{
  int *VAR_4 = (int *)VAR_3;
  if (! FUNC_4 (*VAR_1))
    {
      *VAR_2 = 0;
    }
  else if (FUNC_1 (*VAR_1))
    {
      if (!FUNC_2 (FUNC_3 (*VAR_1)))
 {
   *VAR_4 = VAR_0;
   return *VAR_1;
 }
      else if (FUNC_0 (*VAR_1) > *VAR_4)
 *VAR_4 = FUNC_0 (*VAR_1);
    }
  return ((void*)0);
}
