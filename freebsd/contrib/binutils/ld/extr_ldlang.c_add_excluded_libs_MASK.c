
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct excluded_lib {char* name; struct excluded_lib* next; } ;


 struct excluded_lib* VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char*) ;
 void* FUNC_3 (int) ;

void
FUNC_4 (const char *VAR_1)
{
  const char *VAR_2 = VAR_1, *VAR_3;

  while (*VAR_2 != '\0')
    {
      struct excluded_lib *VAR_4;
      VAR_3 = FUNC_2 (VAR_2, ",:");
      if (VAR_3 == ((void*)0))
 VAR_3 = VAR_2 + FUNC_1 (VAR_2);
      VAR_4 = FUNC_3 (sizeof (*VAR_4));
      VAR_4->next = VAR_0;
      VAR_4->name = FUNC_3 (VAR_3 - VAR_2 + 1);
      FUNC_0 (VAR_4->name, VAR_2, VAR_3 - VAR_2);
      VAR_4->name[VAR_3 - VAR_2] = '\0';
      VAR_0 = VAR_4;
      if (*VAR_3 == '\0')
 break;
      VAR_2 = VAR_3 + 1;
    }
}
