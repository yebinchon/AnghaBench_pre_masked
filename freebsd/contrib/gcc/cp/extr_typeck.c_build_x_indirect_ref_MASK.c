
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;

tree
FUNC_6 (tree VAR_5, const char *VAR_6)
{
  tree VAR_7 = VAR_5;
  tree VAR_8;

  if (VAR_4)
    {
      if (FUNC_5 (VAR_5))
 return FUNC_2 (VAR_0, VAR_5);
      VAR_5 = FUNC_4 (VAR_5);
    }

  VAR_8 = FUNC_3 (VAR_0, VAR_1, VAR_5, VAR_2,
         VAR_2, ((void*)0));
  if (!VAR_8)
    VAR_8 = FUNC_0 (VAR_5, VAR_6);

  if (VAR_4 && VAR_8 != VAR_3)
    return FUNC_1 (VAR_0, VAR_8, VAR_7);
  else
    return VAR_8;
}
