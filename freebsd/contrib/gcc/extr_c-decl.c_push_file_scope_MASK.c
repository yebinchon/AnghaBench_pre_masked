
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;

void
FUNC_5 (void)
{
  tree VAR_3;

  if (VAR_1)
    return;

  FUNC_3 ();
  VAR_1 = VAR_0;

  FUNC_4 ();

  for (VAR_3 = VAR_2; VAR_3; VAR_3 = FUNC_1 (VAR_3))
    FUNC_2 (FUNC_0 (VAR_3), VAR_3, VAR_1,
                 0, 1);
}
