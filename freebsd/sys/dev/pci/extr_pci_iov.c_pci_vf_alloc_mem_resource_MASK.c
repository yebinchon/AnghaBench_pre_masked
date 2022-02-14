
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource_list_entry {struct resource* res; } ;
struct resource {int dummy; } ;
struct pcicfg_iov {int rman; } ;
struct pci_map {int pm_size; scalar_t__ pm_value; } ;
struct TYPE_2__ {struct pcicfg_iov* iov; } ;
struct pci_devinfo {int resources; TYPE_1__ cfg; } ;
typedef scalar_t__ rman_res_t ;
typedef int pci_addr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,struct resource*) ;
 struct pci_devinfo* FUNC_1 (int ) ;
 struct pci_map* FUNC_2 (int ,int) ;
 struct resource_list_entry* FUNC_3 (int *,int ,int,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct resource*) ;
 struct resource* FUNC_6 (int *,scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_7 (struct resource*,int) ;

struct resource *
FUNC_8(device_t VAR_2, device_t VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct pci_devinfo *VAR_9;
 struct pcicfg_iov *VAR_10;
 struct pci_map *VAR_11;
 struct resource *VAR_12;
 struct resource_list_entry *VAR_13;
 rman_res_t VAR_14, VAR_15;
 pci_addr_t VAR_16;
 int VAR_17;

 VAR_9 = FUNC_1(VAR_3);
 VAR_10 = VAR_9->cfg.iov;

 VAR_11 = FUNC_2(VAR_3, *VAR_4);
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 VAR_16 = 1 << VAR_11->pm_size;
 VAR_14 = VAR_11->pm_value;
 VAR_15 = VAR_14 + VAR_16 - 1;


 if (VAR_14 >= VAR_6 || VAR_15 <= VAR_14 || VAR_7 != 1)
  return (((void*)0));


 if (VAR_14 < VAR_5)
  VAR_14 = VAR_5;
 if (VAR_15 > VAR_6)
  VAR_15 = VAR_6;
 VAR_16 = VAR_15 - VAR_14 + 1;

 VAR_12 = FUNC_6(&VAR_10->rman, VAR_14, VAR_15,
     VAR_16, VAR_8, VAR_3);
 if (VAR_12 == ((void*)0))
  return (((void*)0));

 VAR_13 = FUNC_3(&VAR_9->resources, VAR_1, *VAR_4,
     VAR_14, VAR_15, 1);
 if (VAR_13 == ((void*)0)) {
  FUNC_5(VAR_12);
  return (((void*)0));
 }

 FUNC_7(VAR_12, *VAR_4);

 if (VAR_8 & VAR_0) {
  VAR_17 = FUNC_0(VAR_3, VAR_1, *VAR_4, VAR_12);
  if (VAR_17 != 0) {
   FUNC_4(&VAR_9->resources, VAR_1,
       *VAR_4);
   FUNC_5(VAR_12);
   return (((void*)0));
  }
 }
 VAR_13->res = VAR_12;

 return (VAR_12);
}
