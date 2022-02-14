
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pci_dev; scalar_t__ peer_dev; } ;
typedef TYPE_1__ qla_host_t ;
typedef scalar_t__ device_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__**,int*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(qla_host_t *VAR_0)
{
 device_t *VAR_1;
 int VAR_2, VAR_3, VAR_4;
 int VAR_5 = FUNC_3(VAR_0->pci_dev);

 if (FUNC_0(FUNC_1(VAR_0->pci_dev), &VAR_1, &VAR_2))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_3(VAR_1[VAR_3]);

  if ((VAR_4 >= 0) && (VAR_4 == VAR_5) &&
   (FUNC_2(VAR_1[VAR_3]) ==
    FUNC_2(VAR_0->pci_dev))) {
   if (VAR_0->pci_dev != VAR_1[VAR_3])
    VAR_0->peer_dev = VAR_1[VAR_3];
  }
 }
}
