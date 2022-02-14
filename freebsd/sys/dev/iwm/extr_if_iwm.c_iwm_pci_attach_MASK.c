
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iwm_softc {int sc_dev; int sc_dmat; int * sc_ih; int * sc_irq; int * sc_mem; int sc_sh; int sc_st; } ;
typedef int reg ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int *,int ,struct iwm_softc*,int **) ;
 struct iwm_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_11)
{
 struct iwm_softc *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 uint16_t VAR_16;

 VAR_12 = FUNC_4(VAR_11);



 FUNC_9(VAR_11, VAR_5, 0x00, 1);


 FUNC_7(VAR_11);
 VAR_16 = FUNC_8(VAR_11, VAR_4, sizeof(VAR_16));

 if (VAR_16 & VAR_3) {
  VAR_16 &= ~VAR_3;
 }
 FUNC_9(VAR_11, VAR_4, VAR_16, sizeof(VAR_16));

 VAR_15 = FUNC_0(0);
 VAR_12->sc_mem = FUNC_1(VAR_11, VAR_9, &VAR_15,
     VAR_6);
 if (VAR_12->sc_mem == ((void*)0)) {
  FUNC_5(VAR_12->sc_dev, "can't map mem space\n");
  return (VAR_0);
 }
 VAR_12->sc_st = FUNC_11(VAR_12->sc_mem);
 VAR_12->sc_sh = FUNC_10(VAR_12->sc_mem);


 VAR_13 = 1;
 VAR_15 = 0;
 if (FUNC_6(VAR_11, &VAR_13) == 0)
  VAR_15 = 1;
 VAR_12->sc_irq = FUNC_1(VAR_11, VAR_8, &VAR_15, VAR_6 |
     (VAR_15 != 0 ? 0 : VAR_7));
 if (VAR_12->sc_irq == ((void*)0)) {
  FUNC_5(VAR_11, "can't map interrupt\n");
   return (VAR_0);
 }
 VAR_14 = FUNC_3(VAR_11, VAR_12->sc_irq, VAR_2 | VAR_1,
     ((void*)0), VAR_10, VAR_12, &VAR_12->sc_ih);
 if (VAR_12->sc_ih == ((void*)0)) {
  FUNC_5(VAR_11, "can't establish interrupt");
   return (VAR_0);
 }
 VAR_12->sc_dmat = FUNC_2(VAR_12->sc_dev);

 return (0);
}
