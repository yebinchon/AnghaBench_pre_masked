
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {char* string; struct string_list* next; } ;


 int FUNC_0 (char*) ;
 struct string_list* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8 (const char *VAR_1)
{
  char *VAR_2;
  char *VAR_3;

  VAR_2 = FUNC_7 (VAR_1);

  VAR_3 = FUNC_5 (VAR_2, ",:");
  for (; VAR_3; VAR_3 = FUNC_5 (((void*)0), ",:"))
    {
      struct string_list *VAR_4;

      VAR_4 = ((struct string_list *)
       FUNC_6 (sizeof (struct string_list)));
      VAR_4->string = (char *) FUNC_6 (FUNC_4 (VAR_3) + 2);

      if (*VAR_3 == '@')
 FUNC_3 (VAR_4->string, "%s", VAR_3);
      else
 FUNC_3 (VAR_4->string, "_%s", VAR_3);
      VAR_4->next = VAR_0;
      VAR_0 = VAR_4;


      FUNC_2 (FUNC_0("Excluding symbol: %s"), VAR_3);
    }

  FUNC_1 (VAR_2);
}
