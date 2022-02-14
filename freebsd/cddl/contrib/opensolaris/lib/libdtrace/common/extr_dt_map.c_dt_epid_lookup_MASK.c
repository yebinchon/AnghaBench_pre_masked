
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
struct TYPE_4__ {size_t dt_maxprobe; int ** dt_pdesc; int ** dt_edesc; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dtrace_eprobedesc_t ;
typedef size_t dtrace_epid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

int
FUNC_2(dtrace_hdl_t *VAR_0, dtrace_epid_t VAR_1,
    dtrace_eprobedesc_t **VAR_2, dtrace_probedesc_t **VAR_3)
{
 int VAR_4;

 if (VAR_1 >= VAR_0->dt_maxprobe || VAR_0->dt_pdesc[VAR_1] == ((void*)0)) {
  if ((VAR_4 = FUNC_1(VAR_0, VAR_1)) != 0)
   return (VAR_4);
 }

 FUNC_0(VAR_1 < VAR_0->dt_maxprobe);
 FUNC_0(VAR_0->dt_edesc[VAR_1] != ((void*)0));
 FUNC_0(VAR_0->dt_pdesc[VAR_1] != ((void*)0));
 *VAR_2 = VAR_0->dt_edesc[VAR_1];
 *VAR_3 = VAR_0->dt_pdesc[VAR_1];

 return (0);
}
