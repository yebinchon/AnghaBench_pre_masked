
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  rtx VAR_3, VAR_4;

  if (!VAR_1 && VAR_2 == 0)
    return;

  for (VAR_3 = FUNC_2 (); VAR_3; VAR_3 = FUNC_0 (VAR_3))
    FUNC_3 (VAR_3);

  for (VAR_4 = VAR_0;
       VAR_4;
       VAR_4 = FUNC_1 (VAR_4, 1))
    FUNC_3 (FUNC_1 (VAR_4, 0));
}
