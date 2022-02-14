
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude_list_struct {int type; struct exclude_list_struct* next; void* string; } ;


 struct exclude_list_struct* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 void* FUNC_4 (int) ;
 char* FUNC_5 (char const*) ;

void
FUNC_6 (const char *VAR_1, const int VAR_2)
{
  char *VAR_3;
  char *VAR_4;

  VAR_3 = FUNC_5 (VAR_1);

  VAR_4 = FUNC_3 (VAR_3, ",:");
  for (; VAR_4; VAR_4 = FUNC_3 (((void*)0), ",:"))
    {
      struct exclude_list_struct *VAR_5;

      VAR_5 = FUNC_4 (sizeof (struct exclude_list_struct));
      VAR_5->string = FUNC_4 (FUNC_2 (VAR_4) + 1);
      FUNC_1 (VAR_5->string, VAR_4);
      VAR_5->type = VAR_2;
      VAR_5->next = VAR_0;
      VAR_0 = VAR_5;
    }

  FUNC_0 (VAR_3);
}
