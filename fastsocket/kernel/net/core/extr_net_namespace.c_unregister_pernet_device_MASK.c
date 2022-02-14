
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
struct pernet_operations {TYPE_1__ list; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct pernet_operations*) ;

void FUNC_3(struct pernet_operations *VAR_2)
{
 FUNC_0(&VAR_1);
 if (&VAR_2->list == VAR_0)
  VAR_0 = VAR_0->next;
 FUNC_2(VAR_2);
 FUNC_1(&VAR_1);
}
