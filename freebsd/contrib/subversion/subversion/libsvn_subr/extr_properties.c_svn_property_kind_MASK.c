
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_prop_kind_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;

svn_prop_kind_t
FUNC_1(int *VAR_4,
                  const char *VAR_5)
{
  svn_prop_kind_t VAR_6 = FUNC_0(VAR_5);

  if (VAR_4)
    {
      if (VAR_6 == VAR_3)
        *VAR_4 = VAR_1;
      else if (VAR_6 == VAR_2)
        *VAR_4 = VAR_0;
      else
        *VAR_4 = 0;
    }

  return VAR_6;
}
