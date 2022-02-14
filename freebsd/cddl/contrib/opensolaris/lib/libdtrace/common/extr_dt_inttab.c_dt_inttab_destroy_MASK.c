
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int int_hdl; struct TYPE_5__* int_hash; struct TYPE_5__* inh_next; struct TYPE_5__* int_head; } ;
typedef TYPE_1__ dt_inttab_t ;
typedef TYPE_1__ dt_inthash_t ;


 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1(dt_inttab_t *VAR_0)
{
 dt_inthash_t *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->int_head; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->inh_next;
  FUNC_0(VAR_0->int_hdl, VAR_1);
 }

 FUNC_0(VAR_0->int_hdl, VAR_0->int_hash);
 FUNC_0(VAR_0->int_hdl, VAR_0);
}
