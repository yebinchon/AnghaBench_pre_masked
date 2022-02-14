
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct env_lst {struct env_lst* value; struct env_lst* var; TYPE_2__* prev; TYPE_1__* next; } ;
struct TYPE_4__ {TYPE_1__* next; } ;
struct TYPE_3__ {TYPE_2__* prev; } ;


 struct env_lst* FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct env_lst*) ;

void
FUNC_2(unsigned char *VAR_0)
{
 struct env_lst *VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0))) {
  VAR_1->prev->next = VAR_1->next;
  if (VAR_1->next)
   VAR_1->next->prev = VAR_1->prev;
  if (VAR_1->var)
   FUNC_1(VAR_1->var);
  if (VAR_1->value)
   FUNC_1(VAR_1->value);
  FUNC_1(VAR_1);
 }
}
