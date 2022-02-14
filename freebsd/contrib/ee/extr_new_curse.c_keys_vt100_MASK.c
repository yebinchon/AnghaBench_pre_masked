
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct KEY_STACK {TYPE_1__* element; struct KEY_STACK* next; } ;
struct TYPE_2__ {scalar_t__ length; int string; } ;


 struct KEY_STACK* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;

void
FUNC_2()
{
 int VAR_3;
 int VAR_4;
 struct KEY_STACK *VAR_5;

 VAR_5 = VAR_0;
 while (VAR_5->next != ((void*)0))
  VAR_5 = VAR_5->next;
 for (VAR_3 = 0; VAR_2[VAR_3].length != 0; VAR_3++)
 {
  VAR_5->next = (struct KEY_STACK *) FUNC_0(sizeof(struct KEY_STACK));
  VAR_5 = VAR_5->next;
  VAR_5->next = ((void*)0);
  VAR_5->element = &VAR_2[VAR_3];
  VAR_4 = FUNC_1(VAR_5->element->string);
  if (VAR_4 > VAR_1)
   VAR_1 = VAR_4;
 }
}
