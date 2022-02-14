
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bhnd_pci_softc {int quirks; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bhnd_pci_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct bhnd_pci_softc*) ;
 int VAR_3 ;
 int FUNC_3 (struct bhnd_pci_softc*,int,int*) ;
 int FUNC_4 (struct bhnd_pci_softc*,int) ;
 int FUNC_5 (struct bhnd_pci_softc*) ;
 int FUNC_6 (struct bhnd_pci_softc*) ;
 int FUNC_7 (struct bhnd_pci_softc*,int,int) ;

int
FUNC_8(struct bhnd_pci_softc *VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 uint32_t VAR_8;
 uint16_t VAR_9;
 int VAR_10;

 if (VAR_6 == VAR_3)
  return (FUNC_7(VAR_4, VAR_5, VAR_7));



 if (!(VAR_4->quirks & VAR_2) ||
     VAR_5 != VAR_0)
 {
  return (~0U);
 }


 FUNC_1(VAR_4);
 FUNC_6(VAR_4);


 VAR_8 = FUNC_0(VAR_5, VAR_1) | VAR_6;
 if ((VAR_10 = FUNC_4(VAR_4, VAR_8)))
  goto cleanup;


 VAR_8 = FUNC_0(VAR_5, VAR_7);
 VAR_10 = FUNC_3(VAR_4, VAR_8, &VAR_9);

cleanup:
 FUNC_5(VAR_4);
 FUNC_2(VAR_4);

 if (VAR_10)
  return (~0U);

 return (VAR_9);
}
