
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rt2560_softc {int sc_invalid; int sc_sh; int sc_st; } ;
struct TYPE_5__ {struct rt2560_softc sc_rt2560; } ;
struct ral_pci_softc {int sc_ih; TYPE_2__* sc_opns; int * irq; int * mem; TYPE_1__ u; } ;
typedef int device_t ;
struct TYPE_6__ {int (* attach ) (int ,int) ;int intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int,int *,int ,struct ral_pci_softc*,int *) ;
 struct ral_pci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ) ;
 TYPE_2__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_11)
{
 struct ral_pci_softc *VAR_12 = FUNC_4(VAR_11);
 struct rt2560_softc *VAR_13 = &VAR_12->u.sc_rt2560;
 int VAR_14, VAR_15, VAR_16;

 FUNC_7(VAR_11);

 switch (FUNC_8(VAR_11)) {
 case 0x0201:
  VAR_12->sc_opns = &VAR_8;
  break;
 case 0x0301:
 case 0x0302:
 case 0x0401:
  VAR_12->sc_opns = &VAR_9;
  break;
 default:
  VAR_12->sc_opns = &VAR_10;
  break;
 }

 VAR_16 = FUNC_0(0);
 VAR_12->mem = FUNC_1(VAR_11, VAR_6, &VAR_16,
     VAR_3);
 if (VAR_12->mem == ((void*)0)) {
  FUNC_5(VAR_11, "could not allocate memory resource\n");
  return VAR_0;
 }

 VAR_13->sc_st = FUNC_12(VAR_12->mem);
 VAR_13->sc_sh = FUNC_11(VAR_12->mem);
 VAR_13->sc_invalid = 1;

 VAR_16 = 0;
 if (VAR_7 == 0) {
  VAR_14 = 1;
  if (FUNC_6(VAR_11, &VAR_14) == 0)
   VAR_16 = 1;
 }
 VAR_12->irq = FUNC_1(VAR_11, VAR_5, &VAR_16, VAR_3 |
     (VAR_16 != 0 ? 0 : VAR_4));
 if (VAR_12->irq == ((void*)0)) {
  FUNC_5(VAR_11, "could not allocate interrupt resource\n");
  FUNC_9(VAR_11);
  FUNC_2(VAR_11, VAR_6,
      FUNC_13(VAR_12->mem), VAR_12->mem);
  return VAR_0;
 }

 VAR_15 = (*VAR_12->sc_opns->attach)(VAR_11, FUNC_8(VAR_11));
 if (VAR_15 != 0) {
  (void)FUNC_10(VAR_11);
  return VAR_15;
 }




 VAR_15 = FUNC_3(VAR_11, VAR_12->irq, VAR_2 | VAR_1,
     ((void*)0), VAR_12->sc_opns->intr, VAR_12, &VAR_12->sc_ih);
 if (VAR_15 != 0) {
  FUNC_5(VAR_11, "could not set up interrupt\n");
  (void)FUNC_10(VAR_11);
  return VAR_15;
 }
 VAR_13->sc_invalid = 0;

 return 0;
}
