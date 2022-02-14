
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
struct pernet_operations {TYPE_1__ list; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct pernet_operations*) ;

void FUNC_4(int VAR_3, struct pernet_operations *VAR_4)
{
 FUNC_1(&VAR_2);
 if (&VAR_4->list == VAR_0)
  VAR_0 = VAR_0->next;
 FUNC_3(VAR_4);
 FUNC_0(&VAR_1, VAR_3);
 FUNC_2(&VAR_2);
}
