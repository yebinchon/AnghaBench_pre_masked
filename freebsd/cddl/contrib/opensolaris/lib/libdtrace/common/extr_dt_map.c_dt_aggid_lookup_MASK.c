
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t dt_maxagg; int ** dt_aggdesc; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef size_t dtrace_aggid_t ;
typedef int dtrace_aggdesc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

int
FUNC_2(dtrace_hdl_t *VAR_0, dtrace_aggid_t VAR_1,
    dtrace_aggdesc_t **VAR_2)
{
 int VAR_3;

 if (VAR_1 >= VAR_0->dt_maxagg || VAR_0->dt_aggdesc[VAR_1] == ((void*)0)) {
  if ((VAR_3 = FUNC_1(VAR_0, VAR_1)) != 0)
   return (VAR_3);
 }

 FUNC_0(VAR_1 < VAR_0->dt_maxagg);
 FUNC_0(VAR_0->dt_aggdesc[VAR_1] != ((void*)0));
 *VAR_2 = VAR_0->dt_aggdesc[VAR_1];

 return (0);
}
