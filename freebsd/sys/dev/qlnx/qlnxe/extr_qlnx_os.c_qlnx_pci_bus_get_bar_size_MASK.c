
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

uint32_t
FUNC_2(void *VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3;

 VAR_2 = VAR_2 * 2;

 VAR_3 = FUNC_1(((qlnx_host_t *)VAR_1)->pci_dev,
    VAR_0,
    FUNC_0(VAR_2));

 return (VAR_3);
}
