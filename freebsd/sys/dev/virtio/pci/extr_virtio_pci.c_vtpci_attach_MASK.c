
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int * vtpci_child_dev; int vtpci_flags; int * vtpci_msix_res; int * vtpci_res; int * vtpci_dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int *,int ,int*,int ) ;
 int * FUNC_2 (int *,int *,int) ;
 struct vtpci_softc* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vtpci_softc*) ;
 int FUNC_9 (struct vtpci_softc*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_11)
{
 struct vtpci_softc *VAR_12;
 device_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(VAR_11);
 VAR_12->vtpci_dev = VAR_11;

 FUNC_5(VAR_11);

 VAR_14 = FUNC_0(0);
 VAR_12->vtpci_res = FUNC_1(VAR_11, VAR_5, &VAR_14,
     VAR_4);
 if (VAR_12->vtpci_res == ((void*)0)) {
  FUNC_4(VAR_11, "cannot map I/O space\n");
  return (VAR_1);
 }

 if (FUNC_6(VAR_11, VAR_2, ((void*)0)) != 0)
  VAR_12->vtpci_flags |= VAR_9;

 if (FUNC_6(VAR_11, VAR_3, ((void*)0)) == 0) {
  VAR_14 = FUNC_0(1);
  VAR_12->vtpci_msix_res = FUNC_1(VAR_11,
      VAR_6, &VAR_14, VAR_4);
 }

 if (VAR_12->vtpci_msix_res == ((void*)0))
  VAR_12->vtpci_flags |= VAR_10;

 FUNC_9(VAR_12);


 FUNC_10(VAR_11, VAR_7);

 if ((VAR_13 = FUNC_2(VAR_11, ((void*)0), -1)) == ((void*)0)) {
  FUNC_4(VAR_11, "cannot create child device\n");
  FUNC_10(VAR_11, VAR_8);
  FUNC_7(VAR_11);
  return (VAR_0);
 }

 VAR_12->vtpci_child_dev = VAR_13;
 FUNC_8(VAR_12);

 return (0);
}
