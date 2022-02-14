
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pci_softc {int quirks; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bhnd_pci_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct bhnd_pci_softc*) ;
 int VAR_4 ;
 int FUNC_3 (struct bhnd_pci_softc*,int) ;
 int FUNC_4 (struct bhnd_pci_softc*) ;
 int FUNC_5 (struct bhnd_pci_softc*) ;
 int FUNC_6 (struct bhnd_pci_softc*,int,int,int) ;

int
FUNC_7(struct bhnd_pci_softc *VAR_5, int VAR_6, int VAR_7,
    int VAR_8, int VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;

 if (VAR_7 == VAR_4)
  return (FUNC_6(VAR_5, VAR_6, VAR_8, VAR_9));



 if (!(VAR_5->quirks & VAR_3) ||
     VAR_6 != VAR_1)
 {
  return (~0U);
 }


 FUNC_1(VAR_5);
 FUNC_5(VAR_5);


 VAR_10 = FUNC_0(VAR_6, VAR_2) | VAR_7;
 if ((VAR_11 = FUNC_3(VAR_5, VAR_10)))
  goto cleanup;


 VAR_10 = FUNC_0(VAR_6, VAR_8) |
     (VAR_9 & VAR_0);
 VAR_11 = FUNC_3(VAR_5, VAR_10);

cleanup:
 FUNC_4(VAR_5);
 FUNC_2(VAR_5);

 return (VAR_11);
}
