
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int flags; int dev_softc; int parent_dmat; } ;
struct ahc_pci_identity {int dummy; } ;
typedef int device_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ahc_softc* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ahc_softc*) ;
 struct ahc_pci_identity* FUNC_2 (int ) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*,struct ahc_pci_identity*) ;
 int FUNC_5 (struct ahc_softc*,int ) ;
 int FUNC_6 (struct ahc_softc*,int ,int,int ,int,int ,int *,int *,int ,int ,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,int ) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_10)
{
 struct ahc_pci_identity *VAR_11;
 struct ahc_softc *VAR_12;
 char *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11 == ((void*)0))
  return (VAR_7);






 VAR_13 = FUNC_10(FUNC_13(FUNC_8(VAR_10)) + 1, VAR_8, VAR_9);
 if (VAR_13 == ((void*)0))
  return (VAR_6);
 FUNC_12(VAR_13, FUNC_8(VAR_10));
 VAR_12 = FUNC_0(VAR_10, VAR_13);
 if (VAR_12 == ((void*)0))
  return (VAR_6);

 FUNC_5(VAR_12, FUNC_9(VAR_10));





 if (sizeof(bus_addr_t) > 4)
                VAR_12->flags |= VAR_0;


 VAR_14 = FUNC_6(VAR_12, FUNC_7(VAR_10),
                    1, 0,
       (VAR_12->flags & VAR_0)
       ? 0x7FFFFFFFFFLL
       : VAR_4,
                   VAR_3,
                 ((void*)0), ((void*)0),
                  VAR_5,
                    VAR_2,
                   VAR_1,
                0,
       &VAR_12->parent_dmat);

 if (VAR_14 != 0) {
  FUNC_11("ahc_pci_attach: Could not allocate DMA tag "
         "- error %d\n", VAR_14);
  FUNC_3(VAR_12);
  return (VAR_6);
 }
 VAR_12->dev_softc = VAR_10;
 VAR_14 = FUNC_4(VAR_12, VAR_11);
 if (VAR_14 != 0) {
  FUNC_3(VAR_12);
  return (VAR_14);
 }

 FUNC_1(VAR_12);
 return (0);
}
