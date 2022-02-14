
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char* name; scalar_t__ func; struct cmd_list_element* next; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static struct cmd_list_element *
FUNC_1 (char *VAR_0, int VAR_1, struct cmd_list_element *VAR_2,
   int VAR_3, int *VAR_4)
{
  struct cmd_list_element *VAR_5, *VAR_6;

  VAR_5 = (struct cmd_list_element *) ((void*)0);
  *VAR_4 = 0;
  for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next)
    if (!FUNC_0 (VAR_0, VAR_6->name, VAR_1)
 && (!VAR_3 || VAR_6->func))
      {
 VAR_5 = VAR_6;
 (*VAR_4)++;
 if (VAR_6->name[VAR_1] == '\0')
   {
     *VAR_4 = 1;
     break;
   }
      }
  return VAR_5;
}
