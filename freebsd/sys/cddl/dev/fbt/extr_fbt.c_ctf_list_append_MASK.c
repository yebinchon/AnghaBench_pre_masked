
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* l_next; struct TYPE_3__* l_prev; } ;
typedef TYPE_1__ ctf_list_t ;



__attribute__((used)) static void
FUNC_0(ctf_list_t *VAR_0, void *VAR_1)
{
 ctf_list_t *VAR_2 = VAR_0->l_prev;
 ctf_list_t *VAR_3 = VAR_1;

 VAR_0->l_prev = VAR_3;
 VAR_3->l_prev = VAR_2;
 VAR_3->l_next = ((void*)0);

 if (VAR_2 != ((void*)0))
  VAR_2->l_next = VAR_3;
 else
  VAR_0->l_next = VAR_3;
}
