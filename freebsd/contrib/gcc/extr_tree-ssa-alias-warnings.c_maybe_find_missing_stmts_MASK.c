
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3 (tree VAR_0, bool VAR_1,
                          tree VAR_2, bool VAR_3,
                          tree *VAR_4,
                          tree *VAR_5,
                          tree *VAR_6)
{
  if (VAR_0 && VAR_2)
    {
      if (!*VAR_4 || !FUNC_0 (*VAR_4))
 *VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);

      if (!*VAR_5 || !FUNC_0 (*VAR_5))
 *VAR_5 = FUNC_2 (VAR_0, VAR_1);

      if (!*VAR_6 || !FUNC_0 (*VAR_6))
 *VAR_6 = FUNC_2 (VAR_2, VAR_3);
    }



  if (!*VAR_4)
    {
      if (*VAR_5)
 *VAR_4 = *VAR_5;
      else if (*VAR_6)
 *VAR_4 = *VAR_6;
    }



  if (!*VAR_5 && *VAR_4)
    *VAR_5 = *VAR_4;
  if (!*VAR_6 && *VAR_4)
    *VAR_6 = *VAR_4;
}
