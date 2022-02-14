
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_lst {unsigned char* var; unsigned char* value; int export; int welldefined; struct env_lst* prev; struct env_lst* next; } ;


 struct env_lst* FUNC_0 (unsigned char*) ;
 struct env_lst VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;

struct env_lst *
FUNC_5(unsigned char *VAR_1, unsigned char *VAR_2)
{
 struct env_lst *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1))) {
  if (VAR_3->var)
   FUNC_1(VAR_3->var);
  if (VAR_3->value)
   FUNC_1(VAR_3->value);
 } else {
  VAR_3 = (struct env_lst *)FUNC_2(sizeof(struct env_lst));
  VAR_3->next = VAR_0.next;
  VAR_0.next = VAR_3;
  VAR_3->prev = &VAR_0;
  if (VAR_3->next)
   VAR_3->next->prev = VAR_3;
 }
 VAR_3->welldefined = FUNC_3((char *)VAR_1);
 VAR_3->export = 1;
 VAR_3->var = (unsigned char *)FUNC_4((char *)VAR_1);
 VAR_3->value = (unsigned char *)FUNC_4((char *)VAR_2);
 return(VAR_3);
}
