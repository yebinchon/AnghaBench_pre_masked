
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_4;
  if (VAR_1 == VAR_3)
    VAR_4 = 2;
  else if (VAR_1 == VAR_2)
    VAR_4 = 1;
  else if (VAR_1 == VAR_0)
    VAR_4 = 0;
  else
    FUNC_1 ();
  FUNC_0 ("__INTMAX_MAX__", VAR_1, VAR_4);
}
