
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* l_prev; struct TYPE_3__* l_next; } ;
typedef TYPE_1__ ctf_list_t ;



void
FUNC_0(ctf_list_t *VAR_0, void *VAR_1)
{
 ctf_list_t *VAR_2 = VAR_1;
 ctf_list_t *VAR_3 = VAR_0->l_next;

 VAR_0->l_next = VAR_2;
 VAR_2->l_prev = ((void*)0);
 VAR_2->l_next = VAR_3;

 if (VAR_3 != ((void*)0))
  VAR_3->l_prev = VAR_2;
 else
  VAR_0->l_prev = VAR_2;
}
