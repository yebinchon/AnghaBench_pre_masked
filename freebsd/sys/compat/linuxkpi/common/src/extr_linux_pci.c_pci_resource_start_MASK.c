
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct resource_list_entry {scalar_t__ start; int type; } ;
struct TYPE_3__ {int bsddev; } ;
struct pci_dev {TYPE_1__ dev; int devfn; TYPE_2__* bus; } ;
typedef unsigned long rman_res_t ;
typedef int * device_t ;
struct TYPE_4__ {int number; int domain; } ;


 scalar_t__ FUNC_0 (int *,int ,scalar_t__,unsigned long*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 struct resource_list_entry* FUNC_5 (struct pci_dev*,int) ;
 int * FUNC_6 (int ,int ,int ,int ) ;

unsigned long
FUNC_7(struct pci_dev *VAR_0, int VAR_1)
{
 struct resource_list_entry *VAR_2;
 rman_res_t VAR_3;
 device_t VAR_4;

 if ((VAR_2 = FUNC_5(VAR_0, VAR_1)) == ((void*)0))
  return (0);
 VAR_4 = FUNC_6(VAR_0->bus->domain, VAR_0->bus->number,
     FUNC_3(VAR_0->devfn), FUNC_2(VAR_0->devfn));
 FUNC_1(VAR_4 != ((void*)0));
 if (FUNC_0(VAR_4, VAR_2->type, VAR_2->start, &VAR_3)) {
  FUNC_4(VAR_0->dev.bsddev, "translate of %#jx failed\n",
      (uintmax_t)VAR_2->start);
  return (0);
 }
 return (VAR_3);
}
