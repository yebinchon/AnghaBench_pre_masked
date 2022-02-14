
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* l_prev; TYPE_1__* l_next; } ;
typedef TYPE_3__ ctf_list_t ;
struct TYPE_6__ {TYPE_1__* l_next; } ;
struct TYPE_5__ {TYPE_2__* l_prev; } ;



void
FUNC_0(ctf_list_t *VAR_0, void *VAR_1)
{
 ctf_list_t *VAR_2 = VAR_1;

 if (VAR_2->l_prev != ((void*)0))
  VAR_2->l_prev->l_next = VAR_2->l_next;
 else
  VAR_0->l_next = VAR_2->l_next;

 if (VAR_2->l_next != ((void*)0))
  VAR_2->l_next->l_prev = VAR_2->l_prev;
 else
  VAR_0->l_prev = VAR_2->l_prev;
}
