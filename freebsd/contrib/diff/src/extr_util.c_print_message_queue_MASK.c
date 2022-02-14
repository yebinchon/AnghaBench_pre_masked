
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {char* args; struct msg* next; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct msg*) ;
 struct msg* VAR_0 ;
 int FUNC_2 (char*,char const*,char const*,char const*,char const*) ;
 int FUNC_3 (char const*) ;

void
FUNC_4 (void)
{
  char const *VAR_1[5];
  int VAR_2;
  struct msg *VAR_3 = VAR_0;

  while (VAR_3)
    {
      struct msg *VAR_4 = VAR_3->next;
      VAR_1[0] = VAR_3->args;
      for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
 VAR_1[VAR_2 + 1] = VAR_1[VAR_2] + FUNC_3 (VAR_1[VAR_2]) + 1;
      FUNC_2 (FUNC_0(VAR_1[0]), VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4]);
      FUNC_1 (VAR_3);
      VAR_3 = VAR_4;
    }
}
