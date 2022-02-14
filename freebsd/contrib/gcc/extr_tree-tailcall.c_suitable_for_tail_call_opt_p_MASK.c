
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4 (void)
{
  tree VAR_4;



  if (VAR_1)
    return 0;




  if (VAR_0 && FUNC_3 ())
    return 0;




  if (VAR_2)
    return 0;



  for (VAR_4 = FUNC_0 (VAR_3);
       VAR_4;
       VAR_4 = FUNC_2 (VAR_4))
    if (FUNC_1 (VAR_4))
      return 0;

  return 1;
}
