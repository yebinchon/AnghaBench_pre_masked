
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct resource_list_entry {int dummy; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct TYPE_5__ {int msix_alloc; } ;
struct TYPE_4__ {int msi_alloc; } ;
struct TYPE_6__ {int hdrtype; int intpin; int intline; TYPE_2__ msix; TYPE_1__ msi; } ;
struct pci_devinfo {TYPE_3__ cfg; struct resource_list resources; } ;
typedef int rman_res_t ;
typedef TYPE_3__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;



 int FUNC_0 (int ) ;




 struct resource* FUNC_1 (int ,int ,int,int*,int ,int ,int ,int ) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 struct resource* FUNC_3 (int ,int ,int*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct resource* FUNC_5 (int ,int ,int,int*,int ,int ,int ,int ,int ) ;
 struct resource* FUNC_6 (struct resource_list*,int ,int ,int,int*,int ,int ,int ,int ) ;
 struct resource_list_entry* FUNC_7 (struct resource_list*,int,int) ;

struct resource *
FUNC_8(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_long VAR_8,
    u_int VAR_9)
{
 struct pci_devinfo *VAR_10;
 struct resource_list *VAR_11;
 struct resource_list_entry *VAR_12;
 struct resource *VAR_13;
 pcicfgregs *VAR_14;




 VAR_10 = FUNC_2(VAR_2);
 VAR_11 = &VAR_10->resources;
 VAR_14 = &VAR_10->cfg;
 switch (VAR_3) {





 case 129:




  if (*VAR_4 == 0 && (VAR_14->msi.msi_alloc > 0 ||
      VAR_14->msix.msix_alloc > 0))
   return (((void*)0));






  if (*VAR_4 == 0 && !FUNC_0(VAR_14->intline) &&
      (VAR_14->intpin != 0))
   FUNC_4(VAR_1, VAR_2, 0);
  break;
 case 130:
 case 128:
  VAR_12 = FUNC_7(VAR_11, VAR_3, *VAR_4);
  if (VAR_12 == ((void*)0)) {
   VAR_13 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_9);
   if (VAR_13 == ((void*)0))
    return (((void*)0));
  }
 }
 return (FUNC_6(VAR_11, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_9));
}
