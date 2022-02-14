
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pci_softc {int sc_nrange; struct ofw_pci_range* sc_range; } ;
struct ofw_pci_range {int pci_hi; scalar_t__ pci; scalar_t__ size; scalar_t__ host; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 struct ofw_pci_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, int VAR_4, rman_res_t VAR_5,
 rman_res_t *VAR_6)
{
 struct ofw_pci_softc *VAR_7;
 struct ofw_pci_range *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_3);




 for (VAR_8 = VAR_7->sc_range; VAR_8 < VAR_7->sc_range + VAR_7->sc_nrange &&
     VAR_8->pci_hi != 0; VAR_8++) {
  if (VAR_5 < VAR_8->pci || VAR_5 >= VAR_8->pci + VAR_8->size)
   continue;

  switch (VAR_8->pci_hi & VAR_0) {
  case 130:
   VAR_9 = VAR_1;
   break;
  case 129:
  case 128:
   VAR_9 = VAR_2;
   break;
  default:
   VAR_9 = -1;
  }

  if (VAR_4 == VAR_9) {
   VAR_5 += (VAR_8->host - VAR_8->pci);
   break;
  }
 }
 *VAR_6 = VAR_5;
 return (0);
}
