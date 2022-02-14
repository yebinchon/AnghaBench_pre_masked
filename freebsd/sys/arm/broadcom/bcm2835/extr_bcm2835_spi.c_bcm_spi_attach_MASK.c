
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_spi_softc {int sc_mtx; void* sc_mem_res; void* sc_irq_res; int sc_intrhand; int sc_bsh; int sc_bst; int sc_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct bcm_spi_softc*,int ,int) ;
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
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcm_spi_softc*) ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_6 (int ,void*,int,int *,int ,struct bcm_spi_softc*,int *) ;
 int FUNC_7 (int ,char*,int) ;
 struct bcm_spi_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_11)
{
 struct bcm_spi_softc *VAR_12;
 int VAR_13;

 if (FUNC_9(VAR_11) != 0) {
  FUNC_10(VAR_11, "only one SPI controller supported\n");
  return (VAR_0);
 }

 VAR_12 = FUNC_8(VAR_11);
 VAR_12->sc_dev = VAR_11;

 VAR_13 = 0;
 VAR_12->sc_mem_res = FUNC_3(VAR_11, VAR_9, &VAR_13,
     VAR_4);
 if (!VAR_12->sc_mem_res) {
  FUNC_10(VAR_11, "cannot allocate memory window\n");
  return (VAR_0);
 }

 VAR_12->sc_bst = FUNC_13(VAR_12->sc_mem_res);
 VAR_12->sc_bsh = FUNC_12(VAR_12->sc_mem_res);

 VAR_13 = 0;
 VAR_12->sc_irq_res = FUNC_3(VAR_11, VAR_8, &VAR_13,
     VAR_4);
 if (!VAR_12->sc_irq_res) {
  FUNC_5(VAR_11, VAR_9, 0, VAR_12->sc_mem_res);
  FUNC_10(VAR_11, "cannot allocate interrupt\n");
  return (VAR_0);
 }


 if (FUNC_6(VAR_11, VAR_12->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_10, VAR_12, &VAR_12->sc_intrhand)) {
  FUNC_5(VAR_11, VAR_8, 0, VAR_12->sc_irq_res);
  FUNC_5(VAR_11, VAR_9, 0, VAR_12->sc_mem_res);
  FUNC_10(VAR_11, "cannot setup the interrupt handler\n");
  return (VAR_0);
 }

 FUNC_11(&VAR_12->sc_mtx, "bcm_spi", ((void*)0), VAR_3);


 FUNC_2(VAR_12);
 FUNC_0(VAR_12, VAR_5, VAR_6 | VAR_7);





 FUNC_7(VAR_11, "spibus", -1);

 return (FUNC_4(VAR_11));
}
