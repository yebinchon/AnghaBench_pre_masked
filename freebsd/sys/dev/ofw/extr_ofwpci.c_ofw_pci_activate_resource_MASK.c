
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct resource {int dummy; } ;
struct ofw_pci_softc {int sc_nrange; struct ofw_pci_range* sc_range; } ;
struct ofw_pci_range {int pci_hi; scalar_t__ pci; scalar_t__ size; scalar_t__ host; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int * bus_space_tag_t ;
typedef scalar_t__ bus_space_handle_t ;


 int * FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 int FUNC_2 (int *,scalar_t__,int ,int ,scalar_t__*) ;
 struct ofw_pci_softc* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 scalar_t__ FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*,scalar_t__) ;
 int FUNC_9 (struct resource*,int *) ;
 int FUNC_10 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5, device_t VAR_6, int VAR_7, int VAR_8,
    struct resource *VAR_9)
{
 struct ofw_pci_softc *VAR_10;
 bus_space_handle_t VAR_11;
 bus_space_tag_t VAR_12;
 struct ofw_pci_range *VAR_13;
 vm_paddr_t VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_10 = FUNC_3(VAR_5);

 if (VAR_7 != VAR_2 && VAR_7 != VAR_3) {
  return (FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9));
 }

 VAR_14 = (vm_paddr_t)FUNC_7(VAR_9);




 for (VAR_13 = VAR_10->sc_range; VAR_13 < VAR_10->sc_range + VAR_10->sc_nrange &&
     VAR_13->pci_hi != 0; VAR_13++) {
  if (VAR_14 < VAR_13->pci || VAR_14 >= VAR_13->pci + VAR_13->size)
   continue;

  switch (VAR_13->pci_hi & VAR_1) {
  case 130:
   VAR_15 = VAR_2;
   break;
  case 129:
  case 128:
   VAR_15 = VAR_3;
   break;
  default:
   VAR_15 = -1;
   }

  if (VAR_7 == VAR_15) {
   VAR_14 += (VAR_13->host - VAR_13->pci);
   break;
  }
 }

 if (VAR_4)
  FUNC_4("ofw_pci mapdev: start %jx, len %jd\n",
      (rman_res_t)VAR_14, FUNC_6(VAR_9));

 VAR_12 = FUNC_0(VAR_6, VAR_6);
 if (VAR_12 == ((void*)0))
  return (VAR_0);

 FUNC_9(VAR_9, VAR_12);
 VAR_16 = FUNC_2(VAR_12, VAR_14,
     FUNC_6(VAR_9), 0, &VAR_11);
 if (VAR_16 != 0)
  return (VAR_0);

 FUNC_8(VAR_9, VAR_11);
 FUNC_10(VAR_9, (void *)VAR_11);

 return (FUNC_5(VAR_9));
}
