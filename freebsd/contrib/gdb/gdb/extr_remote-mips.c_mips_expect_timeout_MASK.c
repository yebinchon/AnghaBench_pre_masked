
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_5, int VAR_6)
{
  const char *VAR_7 = VAR_5;

  if (VAR_4)
    {
      FUNC_0 (VAR_1, "Expected \"");
      FUNC_2 (VAR_5, VAR_1);
      FUNC_0 (VAR_1, "\", got \"");
    }

  VAR_2++;
  while (1)
    {
      int VAR_8;




      VAR_8 = FUNC_3 (VAR_3, VAR_6);

      if (VAR_8 == VAR_0)
 {
   if (VAR_4)
     FUNC_0 (VAR_1, "\": FAIL\n");
   return 0;
 }

      if (VAR_4)
 FUNC_1 (VAR_8, VAR_1);

      if (VAR_8 == *VAR_7++)
 {
   if (*VAR_7 == '\0')
     {
       VAR_2--;
       if (VAR_4)
  FUNC_0 (VAR_1, "\": OK\n");
       return 1;
     }
 }
      else
 {
   VAR_7 = VAR_5;
   if (VAR_8 == *VAR_7)
     VAR_7++;
 }
    }
}
