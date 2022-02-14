
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_recdesc_t ;
typedef int dtrace_probedata_t ;
struct TYPE_2__ {int (* dtbgn_recfunc ) (int const*,int const*,int ) ;int dtbgn_arg; } ;
typedef TYPE_1__ dt_begin_t ;


 int FUNC_0 (int const*,int const*,int ) ;

__attribute__((used)) static int
FUNC_1(const dtrace_probedata_t *VAR_0,
    const dtrace_recdesc_t *VAR_1, void *VAR_2)
{
 dt_begin_t *VAR_3 = VAR_2;

 return (VAR_3->dtbgn_recfunc(VAR_0, VAR_1, VAR_3->dtbgn_arg));
}
