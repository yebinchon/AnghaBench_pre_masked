
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ocs_hw_t ;
struct TYPE_3__ {int is_port_owned; } ;
typedef TYPE_1__ ocs_hw_io_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;

uint8_t
FUNC_1(ocs_hw_t *VAR_1, uint32_t VAR_2)
{
 ocs_hw_io_t *VAR_3 = FUNC_0(VAR_1, VAR_2);
 return (VAR_3 == ((void*)0) ? VAR_0 : VAR_3->is_port_owned);
}
