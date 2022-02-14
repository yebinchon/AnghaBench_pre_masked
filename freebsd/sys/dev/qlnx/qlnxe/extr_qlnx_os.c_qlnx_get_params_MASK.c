
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(qlnx_host_t *VAR_2)
{
 if ((VAR_1 < 0) || (VAR_1 > VAR_0)) {
  FUNC_0(VAR_2->pci_dev, "invalid queue_count value (%d)\n",
   VAR_1);
  VAR_1 = 0;
 }
 return;
}
