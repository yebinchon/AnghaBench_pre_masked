
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_5;
  REAL_VALUE_TYPE VAR_6;

  if (VAR_1)
    VAR_2 = 1;
  else
    VAR_2 = 8;

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
      VAR_6 = FUNC_0 (VAR_3[VAR_5], VAR_0);
      VAR_4[VAR_5] = VAR_6;
    }
}
