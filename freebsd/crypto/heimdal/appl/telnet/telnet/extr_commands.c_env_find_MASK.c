
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct env_lst {scalar_t__ var; struct env_lst* next; } ;
struct TYPE_2__ {struct env_lst* next; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;

struct env_lst *
FUNC_1(unsigned char *VAR_1)
{
 struct env_lst *VAR_2;

 for (VAR_2 = VAR_0.next; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0((char *)VAR_2->var, (char *)VAR_1) == 0)
   return(VAR_2);
 }
 return(((void*)0));
}
