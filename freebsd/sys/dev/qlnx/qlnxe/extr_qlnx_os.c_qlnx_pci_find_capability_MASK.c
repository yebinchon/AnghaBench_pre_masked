
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;

int
FUNC_2(void *VAR_1, int VAR_2)
{
 int VAR_3;
 qlnx_host_t *VAR_4;

 VAR_4 = VAR_1;

 if (FUNC_1(VAR_4->pci_dev, VAR_0, &VAR_3) == 0)
  return VAR_3;
 else {
  FUNC_0(VAR_4, "failed\n");
  return 0;
 }
}
