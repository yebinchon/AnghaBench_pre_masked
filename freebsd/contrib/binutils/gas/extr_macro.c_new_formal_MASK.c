
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int * next; int actual; int def; int name; } ;
typedef TYPE_1__ formal_entry ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static formal_entry *
FUNC_2 (void)
{
  formal_entry *VAR_1;

  VAR_1 = FUNC_1 (sizeof (formal_entry));

  FUNC_0 (&VAR_1->name);
  FUNC_0 (&VAR_1->def);
  FUNC_0 (&VAR_1->actual);
  VAR_1->next = ((void*)0);
  VAR_1->type = VAR_0;
  return VAR_1;
}
