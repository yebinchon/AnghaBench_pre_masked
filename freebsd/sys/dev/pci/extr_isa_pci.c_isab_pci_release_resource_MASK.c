
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct isab_pci_softc {TYPE_1__* isab_pci_res; } ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {int ip_refs; struct resource* ip_res; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,struct resource*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;


 int FUNC_3 (scalar_t__,scalar_t__,int,int,struct resource*) ;
 int FUNC_4 (scalar_t__,int,int,struct resource*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct isab_pci_softc* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 struct isab_pci_softc *VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_5(VAR_3) != VAR_2)
  return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 switch (VAR_4) {
 case 128:
 case 129:




  VAR_8 = FUNC_2(VAR_5);
  if (VAR_8 < 0 || VAR_8 > VAR_1)
   return (VAR_0);
  VAR_7 = FUNC_6(VAR_2);
  if (VAR_7->isab_pci_res[VAR_8].ip_res == ((void*)0))
   return (VAR_0);
  FUNC_1(VAR_7->isab_pci_res[VAR_8].ip_res == VAR_6,
      ("isa_pci resource mismatch"));
  if (VAR_7->isab_pci_res[VAR_8].ip_refs > 1) {
   VAR_7->isab_pci_res[VAR_8].ip_refs--;
   return (0);
  }
  FUNC_1(VAR_7->isab_pci_res[VAR_8].ip_refs > 0,
      ("isa_pci resource reference count underflow"));
  VAR_9 = FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6);
  if (VAR_9 == 0) {
   VAR_7->isab_pci_res[VAR_8].ip_res = ((void*)0);
   VAR_7->isab_pci_res[VAR_8].ip_refs = 0;
  }
  return (VAR_9);
 }

 return (FUNC_0(FUNC_5(VAR_2), VAR_3, VAR_4,
  VAR_5, VAR_6));
}
