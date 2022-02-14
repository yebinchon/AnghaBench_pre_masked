
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;

tree
FUNC_2 (tree *VAR_3)
{
  if (VAR_3 == ((void*)0))

    return VAR_1;

  if (*VAR_3 == VAR_1)
    {
      tree VAR_4 = FUNC_1 ();
      *VAR_3 = VAR_4;
    }

  return FUNC_0 (VAR_0, VAR_2, *VAR_3);
}
