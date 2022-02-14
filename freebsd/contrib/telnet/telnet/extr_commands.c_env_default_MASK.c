
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_lst {int welldefined; unsigned char* var; scalar_t__ export; struct env_lst* next; } ;


 struct env_lst VAR_0 ;

unsigned char *
FUNC_0(int VAR_1, int VAR_2)
{
 static struct env_lst *VAR_3 = ((void*)0);

 if (VAR_1) {
  VAR_3 = &VAR_0;
  return(((void*)0));
 }
 if (VAR_3) {
  while ((VAR_3 = VAR_3->next)) {
   if (VAR_3->export && (VAR_3->welldefined == VAR_2))
    return(VAR_3->var);
  }
 }
 return(((void*)0));
}
