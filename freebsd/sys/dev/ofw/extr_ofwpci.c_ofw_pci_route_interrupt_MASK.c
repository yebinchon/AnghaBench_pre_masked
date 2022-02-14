
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ofw_pci_softc {int sc_pci_iinfo; } ;
struct ofw_pci_register {int phys_hi; } ;
typedef int reg ;
typedef int pintr ;
typedef int phandle_t ;
typedef int mintr ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ofw_pci_register*,int) ;
 struct ofw_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,struct ofw_pci_register*,int,int*,int,int*,int,int *) ;
 int FUNC_5 (int ,int ,int,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(device_t VAR_6, device_t VAR_7, int VAR_8)
{
 struct ofw_pci_softc *VAR_9;
 struct ofw_pci_register VAR_10;
 uint32_t VAR_11, VAR_12[VAR_5];
 int VAR_13;
 phandle_t VAR_14;

 VAR_9 = FUNC_1(VAR_6);
 VAR_11 = VAR_8;


 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10.phys_hi = (FUNC_6(VAR_7) << VAR_0) |
     (FUNC_8(VAR_7) << VAR_1) |
     (FUNC_7(VAR_7) << VAR_2);

 VAR_13 = FUNC_4(FUNC_3(VAR_7),
     &VAR_9->sc_pci_iinfo, &VAR_10, sizeof(VAR_10), &VAR_11, sizeof(VAR_11),
     VAR_12, sizeof(VAR_12), &VAR_14);
 if (VAR_13 != 0) {
  VAR_11 = FUNC_5(VAR_7, VAR_14, VAR_13, VAR_12);
  return (VAR_11);
 }




 if (VAR_8 > VAR_3)
  return (VAR_8);

 FUNC_2(VAR_6, "could not route pin %d for device %d.%d\n",
     VAR_8, FUNC_8(VAR_7), FUNC_7(VAR_7));
 return (VAR_4);
}
