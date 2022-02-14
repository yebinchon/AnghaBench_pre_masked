
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* lru_next; TYPE_1__* lru_prev; } ;
typedef TYPE_2__ bfd ;
struct TYPE_5__ {TYPE_2__* lru_next; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (bfd *VAR_1)
{
  VAR_1->lru_prev->lru_next = VAR_1->lru_next;
  VAR_1->lru_next->lru_prev = VAR_1->lru_prev;
  if (VAR_1 == VAR_0)
    {
      VAR_0 = VAR_1->lru_next;
      if (VAR_1 == VAR_0)
 VAR_0 = ((void*)0);
    }
}
