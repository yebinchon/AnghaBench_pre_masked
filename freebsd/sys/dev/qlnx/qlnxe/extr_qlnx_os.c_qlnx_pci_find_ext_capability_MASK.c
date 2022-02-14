
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ,int,int*) ;

int
FUNC_2(void *VAR_0, int VAR_1)
{
 int VAR_2;
 qlnx_host_t *VAR_3;

 VAR_3 = VAR_0;

 if (FUNC_1(VAR_3->pci_dev, VAR_1, &VAR_2) == 0)
  return VAR_2;
 else {
  FUNC_0(VAR_3, "failed\n");
  return 0;
 }
}
