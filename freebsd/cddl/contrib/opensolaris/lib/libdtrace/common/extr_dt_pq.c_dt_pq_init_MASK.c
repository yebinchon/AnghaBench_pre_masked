
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_hdl_t ;
typedef int dt_pq_value_f ;
struct TYPE_4__ {int dtpq_size; int dtpq_last; void* dtpq_arg; int dtpq_value; int * dtpq_hdl; int * dtpq_items; } ;
typedef TYPE_1__ dt_pq_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 void* FUNC_2 (int *,int) ;

dt_pq_t *
FUNC_3(dtrace_hdl_t *VAR_0, uint_t VAR_1, dt_pq_value_f VAR_2, void *VAR_3)
{
 dt_pq_t *VAR_4;
 FUNC_0(VAR_1 > 1);

 if ((VAR_4 = FUNC_2(VAR_0, sizeof (dt_pq_t))) == ((void*)0))
  return (((void*)0));

 VAR_4->dtpq_items = FUNC_2(VAR_0, VAR_1 * sizeof (VAR_4->dtpq_items[0]));
 if (VAR_4->dtpq_items == ((void*)0)) {
  FUNC_1(VAR_0, VAR_4);
  return (((void*)0));
 }

 VAR_4->dtpq_hdl = VAR_0;
 VAR_4->dtpq_size = VAR_1;
 VAR_4->dtpq_last = 1;
 VAR_4->dtpq_value = VAR_2;
 VAR_4->dtpq_arg = VAR_3;

 return (VAR_4);
}
