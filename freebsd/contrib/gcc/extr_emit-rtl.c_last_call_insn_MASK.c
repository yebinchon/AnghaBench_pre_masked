
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

rtx
FUNC_3 (void)
{
  rtx VAR_0;

  for (VAR_0 = FUNC_2 ();
       VAR_0 && !FUNC_0 (VAR_0);
       VAR_0 = FUNC_1 (VAR_0))
    ;

  return VAR_0;
}
