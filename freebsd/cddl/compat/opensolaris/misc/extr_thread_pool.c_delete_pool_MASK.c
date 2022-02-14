
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tp_attr; struct TYPE_5__* tpj_next; struct TYPE_5__* tp_head; } ;
typedef TYPE_1__ tpool_t ;
typedef TYPE_1__ tpool_job_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(tpool_t *VAR_0)
{
 tpool_job_t *VAR_1;




 for (VAR_1 = VAR_0->tp_head; VAR_1 != ((void*)0); VAR_1 = VAR_0->tp_head) {
  VAR_0->tp_head = VAR_1->tpj_next;
  FUNC_0(VAR_1);
 }
 (void) FUNC_1(&VAR_0->tp_attr);
 FUNC_0(VAR_0);
}
