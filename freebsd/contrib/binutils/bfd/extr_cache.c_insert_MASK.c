
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* lru_prev; struct TYPE_4__* lru_next; } ;
typedef TYPE_1__ bfd ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (bfd *VAR_1)
{
  if (VAR_0 == ((void*)0))
    {
      VAR_1->lru_next = VAR_1;
      VAR_1->lru_prev = VAR_1;
    }
  else
    {
      VAR_1->lru_next = VAR_0;
      VAR_1->lru_prev = VAR_0->lru_prev;
      VAR_1->lru_prev->lru_next = VAR_1;
      VAR_1->lru_next->lru_prev = VAR_1;
    }
  VAR_0 = VAR_1;
}
