
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 long VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int* VAR_5 ;
 int* VAR_6 ;

void
FUNC_1 (unsigned int VAR_7)
{
  VAR_6[0] = VAR_7;
  if (VAR_4 != VAR_0)
    {
      register long int VAR_8;
      for (VAR_8 = 1; VAR_8 < VAR_2; ++VAR_8)
 VAR_6[VAR_8] = (1103515145 * VAR_6[VAR_8 - 1]) + 12345;
      VAR_1 = &VAR_6[VAR_3];
      VAR_5 = &VAR_6[0];
      for (VAR_8 = 0; VAR_8 < 10 * VAR_2; ++VAR_8)
 FUNC_0();
    }
}
