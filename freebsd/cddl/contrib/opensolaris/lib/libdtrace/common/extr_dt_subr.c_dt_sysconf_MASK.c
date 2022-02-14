
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long (* dtv_sysconf ) (int ,int) ;} ;
typedef TYPE_1__ dtrace_vector_t ;
struct TYPE_5__ {int dt_varg; TYPE_1__* dt_vector; } ;
typedef TYPE_2__ dtrace_hdl_t ;


 long FUNC_0 (int ,int) ;
 long FUNC_1 (int) ;

long
FUNC_2(dtrace_hdl_t *VAR_0, int VAR_1)
{
 const dtrace_vector_t *VAR_2 = VAR_0->dt_vector;

 if (VAR_2 == ((void*)0))
  return (FUNC_1(VAR_1));

 return (VAR_2->dtv_sysconf(VAR_0->dt_varg, VAR_1));
}
