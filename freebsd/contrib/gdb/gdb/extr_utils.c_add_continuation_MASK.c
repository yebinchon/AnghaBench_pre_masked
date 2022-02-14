
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct continuation_arg {int dummy; } ;
struct continuation {void (* continuation_hook ) (struct continuation_arg*) ;struct continuation* next; struct continuation_arg* arg_list; } ;


 struct continuation* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1 (void (*VAR_1) (struct continuation_arg *),
    struct continuation_arg *VAR_2)
{
  struct continuation *VAR_3;

  VAR_3 =
    (struct continuation *) FUNC_0 (sizeof (struct continuation));
  VAR_3->continuation_hook = VAR_1;
  VAR_3->arg_list = VAR_2;
  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;
}
