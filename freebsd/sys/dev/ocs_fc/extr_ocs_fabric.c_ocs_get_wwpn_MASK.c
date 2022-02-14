
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef long long uint64_t ;
struct TYPE_3__ {int port_name_lo; int port_name_hi; } ;
typedef TYPE_1__ fc_plogi_payload_t ;


 long long FUNC_0 (int ) ;

__attribute__((used)) static uint64_t
FUNC_1(fc_plogi_payload_t *VAR_0)
{
 return (((uint64_t)FUNC_0(VAR_0->port_name_hi) << 32ll) | (FUNC_0(VAR_0->port_name_lo)));
}
