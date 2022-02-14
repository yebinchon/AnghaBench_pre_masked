
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char const,...) ;

__attribute__((used)) static void
FUNC_3 (int VAR_1, FILE *VAR_2, const char *VAR_3)
{
  const char *VAR_4;
  int VAR_5;
  char VAR_6[1000];

  VAR_4 = VAR_3;
  while (1)
    {
      VAR_5 = FUNC_1 (VAR_2);

      if (*VAR_4 == '\0')
 {
   if (VAR_5 != '\n')
     {
       FUNC_2 (VAR_6, sizeof VAR_6, "got '%c' when expecting newline", VAR_5);
       FUNC_0 (VAR_1, VAR_6, 0);
     }
   VAR_5 = FUNC_1 (VAR_2);
   if (VAR_5 != VAR_0)
     {
       FUNC_2 (VAR_6, sizeof VAR_6, "got '%c' when expecting EOF", VAR_5);
       FUNC_0 (VAR_1, VAR_6, 0);
     }
   return;
 }

      if (VAR_5 != *VAR_4)
 {
   FUNC_2 (VAR_6, sizeof VAR_6, "expected '%c', got '%c'", *VAR_4, VAR_5);
   FUNC_0 (VAR_1, VAR_6, 0);
 }

      ++VAR_4;
    }
}
