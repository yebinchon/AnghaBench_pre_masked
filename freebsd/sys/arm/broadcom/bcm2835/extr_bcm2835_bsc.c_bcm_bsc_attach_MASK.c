
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_bsc_softc {int * sc_iicbus; int sc_mtx; void* sc_mem_res; void* sc_irq_res; int sc_intrhand; int sc_bsh; int sc_bst; int sc_dev; } ;
typedef int ich_func_t ;
typedef int device_t ;


 int FUNC_0 (struct bcm_bsc_softc*) ;
 int FUNC_1 (struct bcm_bsc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (struct bcm_bsc_softc*) ;
 int FUNC_4 (struct bcm_bsc_softc*) ;
 void* FUNC_5 (int ,int ,int*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_7 (int ,void*,int,int *,int ,struct bcm_bsc_softc*,int *) ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (int ,char*,int) ;
 struct bcm_bsc_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_10)
{
 struct bcm_bsc_softc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_10(VAR_10);
 VAR_11->sc_dev = VAR_10;

 VAR_12 = 0;
 VAR_11->sc_mem_res = FUNC_5(VAR_10, VAR_7, &VAR_12,
     VAR_4);
 if (!VAR_11->sc_mem_res) {
  FUNC_11(VAR_10, "cannot allocate memory window\n");
  return (VAR_0);
 }

 VAR_11->sc_bst = FUNC_14(VAR_11->sc_mem_res);
 VAR_11->sc_bsh = FUNC_13(VAR_11->sc_mem_res);

 VAR_12 = 0;
 VAR_11->sc_irq_res = FUNC_5(VAR_10, VAR_6, &VAR_12,
     VAR_4 | VAR_5);
 if (!VAR_11->sc_irq_res) {
  FUNC_6(VAR_10, VAR_7, 0, VAR_11->sc_mem_res);
  FUNC_11(VAR_10, "cannot allocate interrupt\n");
  return (VAR_0);
 }


 if (FUNC_7(VAR_10, VAR_11->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_8, VAR_11, &VAR_11->sc_intrhand)) {
  FUNC_6(VAR_10, VAR_6, 0, VAR_11->sc_irq_res);
  FUNC_6(VAR_10, VAR_7, 0, VAR_11->sc_mem_res);
  FUNC_11(VAR_10, "cannot setup the interrupt handler\n");
  return (VAR_0);
 }

 FUNC_12(&VAR_11->sc_mtx, "bcm_bsc", ((void*)0), VAR_3);

 FUNC_4(VAR_11);


 FUNC_0(VAR_11);
 FUNC_3(VAR_11);
 FUNC_1(VAR_11);

 VAR_11->sc_iicbus = FUNC_9(VAR_10, "iicbus", -1);
 if (VAR_11->sc_iicbus == ((void*)0)) {
  FUNC_2(VAR_10);
  return (VAR_0);
 }


 FUNC_8((ich_func_t)VAR_9, VAR_10);

 return (0);
}
