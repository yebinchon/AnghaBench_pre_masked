
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_4__ {struct TYPE_4__* dtpq_items; int * dtpq_hdl; } ;
typedef TYPE_1__ dt_pq_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(dt_pq_t *VAR_0)
{
 dtrace_hdl_t *VAR_1 = VAR_0->dtpq_hdl;

 FUNC_0(VAR_1, VAR_0->dtpq_items);
 FUNC_0(VAR_1, VAR_0);
}
