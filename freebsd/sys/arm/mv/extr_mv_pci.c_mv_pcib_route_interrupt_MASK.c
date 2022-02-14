
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ofw_pci_register {int phys_hi; } ;
struct mv_pcib_softc {int sc_pci_iinfo; } ;
typedef int reg ;
typedef int pintr ;
typedef int phandle_t ;
typedef int mintr ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ofw_pci_register*,int) ;
 struct mv_pcib_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,struct ofw_pci_register*,int,int*,int,int*,int,int *) ;
 int FUNC_5 (int ,int ,int,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, device_t VAR_5, int VAR_6)
{
 struct mv_pcib_softc *VAR_7;
 struct ofw_pci_register VAR_8;
 uint32_t VAR_9, VAR_10[4];
 int VAR_11;
 phandle_t VAR_12;

 VAR_7 = FUNC_1(VAR_4);
 VAR_9 = VAR_6;


 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.phys_hi = (FUNC_6(VAR_5) << VAR_0) |
     (FUNC_8(VAR_5) << VAR_1) |
     (FUNC_7(VAR_5) << VAR_2);

 VAR_11 = FUNC_4(FUNC_3(VAR_5), &VAR_7->sc_pci_iinfo,
     &VAR_8, sizeof(VAR_8), &VAR_9, sizeof(VAR_9), VAR_10, sizeof(VAR_10),
     &VAR_12);
 if (VAR_11 > 0)
  return (FUNC_5(VAR_5, VAR_12, VAR_11, VAR_10));


 if (VAR_6 > 4)
  return (VAR_6);

 FUNC_2(VAR_4, "could not route pin %d for device %d.%d\n",
     VAR_6, FUNC_8(VAR_5), FUNC_7(VAR_5));
 return (VAR_3);
}
