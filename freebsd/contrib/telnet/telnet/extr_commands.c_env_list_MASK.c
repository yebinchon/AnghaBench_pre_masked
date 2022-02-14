
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct env_lst {char* var; char* value; scalar_t__ export; struct env_lst* next; } ;
struct TYPE_2__ {struct env_lst* next; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char,char*,char*) ;

void
FUNC_1(void)
{
 struct env_lst *VAR_1;

 for (VAR_1 = VAR_0.next; VAR_1; VAR_1 = VAR_1->next) {
  FUNC_0("%c %-20s %s\n", VAR_1->export ? '*' : ' ',
     VAR_1->var, VAR_1->value);
 }
}
