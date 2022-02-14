
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ RMPCONN ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(RMPCONN *VAR_1)
{
 RMPCONN *VAR_2, *VAR_3;

 if (VAR_0 == VAR_1) {
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 } else {
  VAR_3 = VAR_0;
  VAR_2 = VAR_3->next;
  while (VAR_2 != ((void*)0)) {
   if (VAR_1 == VAR_2) {
    VAR_3->next = VAR_2->next;
    FUNC_0(VAR_2);
    break;
   }
   VAR_3 = VAR_2;
   VAR_2 = VAR_2->next;
  }
 }
}
