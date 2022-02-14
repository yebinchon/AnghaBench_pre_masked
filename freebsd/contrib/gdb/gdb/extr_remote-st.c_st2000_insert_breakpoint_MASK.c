
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__*,int*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_5 (CORE_ADDR VAR_3, char *VAR_4)
{
  int VAR_5;
  CORE_ADDR VAR_6 = VAR_3;
  int VAR_7 = 0;

  FUNC_0 (&VAR_6, &VAR_7);

  for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
    if (VAR_1[VAR_5] == 0)
      {
 VAR_1[VAR_5] = VAR_3;

 FUNC_4 (VAR_6, VAR_4, VAR_7);
 FUNC_3 ("BR %x H\r", VAR_3);
 FUNC_1 (1);
 return 0;
      }

  FUNC_2 (VAR_2, "Too many breakpoints (> 16) for STDBUG\n");
  return 1;
}
