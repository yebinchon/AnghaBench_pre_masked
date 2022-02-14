
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int htab_t ;


 int VAR_0 ;
 void** FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static tree
FUNC_2 (tree * VAR_1, int *VAR_2, void *VAR_3)
{
  htab_t VAR_4 = (htab_t) VAR_3;
  void **VAR_5;

  if (FUNC_1 (*VAR_1))
    {
      *VAR_2 = 0;
      return ((void*)0);
    }

  VAR_5 = FUNC_0 (VAR_4, *VAR_1, VAR_0);
  if (*VAR_5)
    return (tree) *VAR_5;
  *VAR_5 = *VAR_1;

  return ((void*)0);
}
