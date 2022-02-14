
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_3, char *VAR_4)
{
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    if (VAR_1[VAR_5] == VAR_3)
      {
 VAR_1[VAR_5] = 0;

 FUNC_2 ("CB %d\r", VAR_5);
 FUNC_0 (1);
 return 0;
      }

  FUNC_1 (VAR_2,
        "Can't find breakpoint associated with 0x%x\n", VAR_3);
  return 1;
}
