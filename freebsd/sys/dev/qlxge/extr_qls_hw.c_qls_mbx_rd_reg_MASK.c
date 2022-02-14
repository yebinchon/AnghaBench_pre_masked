
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pci_func; } ;
typedef TYPE_1__ qla_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;

int
FUNC_1(qla_host_t *VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 int VAR_5;

 if ((VAR_2->pci_func & 0x1) == 0)
  VAR_3 += VAR_0;
 else
  VAR_3 += VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
