
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int * VAR_3 ;

void
FUNC_4 (void)
{
  bool VAR_4;
  static bool VAR_5 = 0;

  if (VAR_5)
    {
      FUNC_3 ("inter-module optimizations not implemented for C++");
      return;
    }
  VAR_5 = 1;

  VAR_3 = FUNC_0 ();
  FUNC_2 (VAR_2
    ? VAR_1 : VAR_0);
  VAR_4 = FUNC_1 (VAR_3);
  VAR_3 = ((void*)0);
}
