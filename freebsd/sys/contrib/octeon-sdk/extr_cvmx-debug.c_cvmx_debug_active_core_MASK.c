
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int active_cores; } ;
typedef TYPE_1__ cvmx_debug_state_t ;



__attribute__((used)) static int FUNC_0(cvmx_debug_state_t VAR_0, unsigned VAR_1)
{
    return VAR_0.active_cores & (1u << VAR_1);
}
