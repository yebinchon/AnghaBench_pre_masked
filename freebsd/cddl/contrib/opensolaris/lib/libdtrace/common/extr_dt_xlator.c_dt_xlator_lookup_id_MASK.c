
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t id_t ;
struct TYPE_3__ {size_t dt_xlatorid; int ** dt_xlatormap; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dt_xlator_t ;


 int FUNC_0 (int) ;

dt_xlator_t *
FUNC_1(dtrace_hdl_t *VAR_0, id_t VAR_1)
{
 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->dt_xlatorid);
 return (VAR_0->dt_xlatormap[VAR_1]);
}
