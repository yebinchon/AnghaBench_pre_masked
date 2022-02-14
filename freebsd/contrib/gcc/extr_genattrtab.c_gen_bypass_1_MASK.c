
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bypass_list {char const* insn; struct bypass_list* next; } ;


 struct bypass_list* VAR_0 ;
 char* FUNC_0 (char const*,size_t) ;
 int VAR_1 ;
 struct bypass_list* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (const char *VAR_2, size_t VAR_3)
{
  struct bypass_list *VAR_4;

  if (VAR_3 == 0)
    return;

  VAR_2 = FUNC_0 (VAR_2, VAR_3);
  for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next)
    if (VAR_2 == VAR_4->insn)
      return;

  VAR_4 = FUNC_1 (sizeof (struct bypass_list));
  VAR_4->insn = VAR_2;
  VAR_4->next = VAR_0;
  VAR_0 = VAR_4;
  VAR_1++;
}
