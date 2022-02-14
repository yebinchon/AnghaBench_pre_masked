
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (char*) ;
 int* VAR_1 ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_2)
{
  int VAR_3, VAR_4, VAR_5;
  char *VAR_6, *VAR_7, *VAR_8;







  VAR_3 = FUNC_4 (VAR_2);
  VAR_6 = (char *) FUNC_0 (VAR_3 + 1);
  FUNC_2 (VAR_6, VAR_2, VAR_3 + 1);

  while (1)
    {
      VAR_7 = FUNC_3 (VAR_6, '-');
      if (!VAR_7)
 {
   FUNC_5 (0, "value of -mfixed-range must have form REG1-REG2");
   return;
 }
      *VAR_7 = '\0';

      VAR_8 = FUNC_3 (VAR_7 + 1, ',');
      if (VAR_8)
 *VAR_8 = '\0';

      VAR_4 = FUNC_1 (VAR_6);
      if (VAR_4 < 0)
 {
   FUNC_5 (0, "unknown register name: %s", VAR_6);
   return;
 }

      VAR_5 = FUNC_1 (VAR_7 + 1);
      if (VAR_5 < 0)
 {
   FUNC_5 (0, "unknown register name: %s", VAR_7 + 1);
   return;
 }

      *VAR_7 = '-';

      if (VAR_4 > VAR_5)
 {
   FUNC_5 (0, "%s-%s is an empty range", VAR_6, VAR_7 + 1);
   return;
 }

      for (VAR_3 = VAR_4; VAR_3 <= VAR_5; ++VAR_3)
 VAR_1[VAR_3] = VAR_0[VAR_3] = 1;

      if (!VAR_8)
 break;

      *VAR_8 = ',';
      VAR_6 = VAR_8 + 1;
    }
}
