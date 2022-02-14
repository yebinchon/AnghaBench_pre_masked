
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* last; struct TYPE_5__* next; int request; } ;
typedef TYPE_1__ TABLE_ENTRY ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_2(TABLE_ENTRY *VAR_3)
{

 if (VAR_1)
  FUNC_1("delete", &VAR_3->request);
 if (VAR_2 == VAR_3)
  VAR_2 = VAR_3->next;
 else if (VAR_3->last != VAR_0)
  VAR_3->last->next = VAR_3->next;
 if (VAR_3->next != VAR_0)
  VAR_3->next->last = VAR_3->last;
 FUNC_0((char *)VAR_3);
}
