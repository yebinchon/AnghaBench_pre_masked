
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ibnd_port_t ;
typedef int ibnd_fabric_t ;
struct TYPE_2__ {int lid2guid; } ;
typedef TYPE_1__ f_internal_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

ibnd_port_t *FUNC_2(ibnd_fabric_t * VAR_0,
    uint16_t VAR_1)
{
 ibnd_port_t *VAR_2;
 f_internal_t *VAR_3 = (f_internal_t *)VAR_0;

 VAR_2 = (ibnd_port_t *)FUNC_1(VAR_3->lid2guid,
     FUNC_0(VAR_1));

 return VAR_2;
}
