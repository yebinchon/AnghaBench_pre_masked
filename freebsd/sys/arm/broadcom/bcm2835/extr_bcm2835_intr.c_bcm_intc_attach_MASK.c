
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_intc_softc {int * intc_res; int intc_bsh; int intc_bst; int intc_irq_hdl; int * intc_irq_res; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 intptr_t FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct bcm_intc_softc*,intptr_t) ;
 struct bcm_intc_softc* VAR_6 ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int *,struct bcm_intc_softc*,int *) ;
 struct bcm_intc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,intptr_t,int ,struct bcm_intc_softc*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_7)
{
 struct bcm_intc_softc *VAR_8 = FUNC_5(VAR_7);
 int VAR_9 = 0;
 intptr_t VAR_10;
 VAR_8->sc_dev = VAR_7;

 if (VAR_6)
  return (VAR_0);

 VAR_8->intc_res = FUNC_2(VAR_7, VAR_4, &VAR_9, VAR_2);
 if (VAR_8->intc_res == ((void*)0)) {
  FUNC_6(VAR_7, "could not allocate memory resource\n");
  return (VAR_0);
 }

 VAR_10 = FUNC_0(FUNC_8(VAR_7));
 if (FUNC_1(VAR_8, VAR_10) != 0) {
  FUNC_3(VAR_7, VAR_4, 0, VAR_8->intc_res);
  FUNC_6(VAR_7, "could not register PIC\n");
  return (VAR_0);
 }

 VAR_9 = 0;
 VAR_8->intc_irq_res = FUNC_2(VAR_7, VAR_3, &VAR_9,
     VAR_2);
 if (VAR_8->intc_irq_res == ((void*)0)) {
  if (FUNC_7(VAR_7, VAR_10, VAR_5, VAR_8, 0) != 0) {

   FUNC_6(VAR_7, "could not set PIC as a root\n");
   return (VAR_0);
  }
 } else {
  if (FUNC_4(VAR_7, VAR_8->intc_irq_res, VAR_1,
      VAR_5, ((void*)0), VAR_8, &VAR_8->intc_irq_hdl)) {

   FUNC_6(VAR_7, "could not setup irq handler\n");
   return (VAR_0);
  }
 }
 VAR_8->intc_bst = FUNC_10(VAR_8->intc_res);
 VAR_8->intc_bsh = FUNC_9(VAR_8->intc_res);

 VAR_6 = VAR_8;

 return (0);
}
