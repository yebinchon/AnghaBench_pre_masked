
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int ia64_addr_area ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static ia64_addr_area
FUNC_4 (tree VAR_4)
{
  tree VAR_5;

  VAR_5 = FUNC_3 ("model", FUNC_0 (VAR_4));
  if (VAR_5)
    {
      tree VAR_6;

      FUNC_2 ();
      VAR_6 = FUNC_1 (FUNC_1 (VAR_5));
      if (VAR_6 == VAR_2 || VAR_6 == VAR_3)
 return VAR_1;
    }
  return VAR_0;
}
