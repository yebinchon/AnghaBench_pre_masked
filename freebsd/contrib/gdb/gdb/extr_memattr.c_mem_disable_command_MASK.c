
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {scalar_t__ enabled_p; struct mem_region* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 struct mem_region* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2, int VAR_3)
{
  char *VAR_4 = VAR_2;
  char *VAR_5;
  int VAR_6;
  struct mem_region *VAR_7;

  FUNC_1 (VAR_1);

  if (VAR_4 == 0)
    {
      for (VAR_7 = VAR_0; VAR_7; VAR_7 = VAR_7->next)
 VAR_7->enabled_p = 0;
    }
  else
    while (*VAR_4)
      {
 VAR_5 = VAR_4;
 while (*VAR_5 >= '0' && *VAR_5 <= '9')
   VAR_5++;
 if (*VAR_5 && *VAR_5 != ' ' && *VAR_5 != '\t')
   FUNC_2 ("Arguments must be memory region numbers.");

 VAR_6 = FUNC_0 (VAR_4);
 FUNC_3 (VAR_6);

 VAR_4 = VAR_5;
 while (*VAR_4 == ' ' || *VAR_4 == '\t')
   VAR_4++;
      }
}
