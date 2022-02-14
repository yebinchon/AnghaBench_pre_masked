
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* script; } ;
struct TYPE_4__ {size_t sh_prompt_len; char* sh_prompt; } ;
typedef TYPE_1__ SCRIPT ;
typedef TYPE_2__ SCR ;



__attribute__((used)) static int
FUNC_0(SCR *VAR_0, char *VAR_1, size_t VAR_2, size_t *VAR_3)
{
 SCRIPT *VAR_4;
 size_t VAR_5;
 char *VAR_6;

 VAR_4 = VAR_0->script;
 if (VAR_2 < (VAR_5 = VAR_4->sh_prompt_len))
  return (0);

 for (VAR_6 = VAR_4->sh_prompt;
     VAR_5 && VAR_2; --VAR_5, --VAR_2) {
  if (*VAR_6 == '\0') {
   for (; VAR_5 && *VAR_6 == '\0'; --VAR_5, ++VAR_6);
   if (!VAR_5)
    return (0);
   for (; VAR_2 && *VAR_1 != *VAR_6; --VAR_2, ++VAR_1);
   if (!VAR_2)
    return (0);
  }
  if (*VAR_6++ != *VAR_1++)
   break;
 }

 if (VAR_5)
  return (0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_2;
 return (1);
}
