
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;

int
FUNC_3 (tree VAR_3, int VAR_4)
{
  if (VAR_3 == VAR_2)
    return 0;

  if (! FUNC_0 (VAR_3)
      && FUNC_1 (VAR_3) != VAR_1
      && FUNC_1 (VAR_3) != VAR_0)
    {
      if (VAR_4)
 FUNC_2 ("%qT is not an aggregate type", VAR_3);
      return 0;
    }
  return 1;
}
