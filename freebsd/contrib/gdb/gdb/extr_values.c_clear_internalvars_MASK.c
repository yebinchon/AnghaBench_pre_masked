
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internalvar {struct internalvar* value; struct internalvar* name; struct internalvar* next; } ;


 struct internalvar* VAR_0 ;
 int FUNC_0 (struct internalvar*) ;

void
FUNC_1 (void)
{
  struct internalvar *VAR_1;

  while (VAR_0)
    {
      VAR_1 = VAR_0;
      VAR_0 = VAR_1->next;
      FUNC_0 (VAR_1->name);
      FUNC_0 (VAR_1->value);
      FUNC_0 (VAR_1);
    }
}
