
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static void
FUNC_3 (rtx VAR_0)
{
  const char *VAR_1, *VAR_2;

  for (VAR_1 = VAR_2 = FUNC_1 (VAR_0, 1); *VAR_1; VAR_1++)
    if (*VAR_1 == ',')
      {
 FUNC_2 (VAR_2, VAR_1 - VAR_2);
 do
   VAR_1++;
 while (FUNC_0 (*VAR_1));
 VAR_2 = VAR_1;
      }
  FUNC_2 (VAR_2, VAR_1 - VAR_2);
}
