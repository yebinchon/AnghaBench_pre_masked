
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_spi_softc {int sc_mtx; void* sc_mem_res; void* sc_irq_res; int sc_intrhand; int sc_bsh; int sc_bst; int sc_dev; } ;
typedef int ich_func_t ;
typedef int device_t ;


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
 int FUNC_0 (struct mv_spi_softc*,int ) ;
 int FUNC_1 (struct mv_spi_softc*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_4 (int ,void*,int,int *,int ,struct mv_spi_softc*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 struct mv_spi_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int VAR_14 ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_15)
{
 struct mv_spi_softc *VAR_16;
 int VAR_17;
 uint32_t VAR_18;

 VAR_16 = FUNC_7(VAR_15);
 VAR_16->sc_dev = VAR_15;

 VAR_17 = 0;
 VAR_16->sc_mem_res = FUNC_2(VAR_15, VAR_12, &VAR_17,
     VAR_10);
 if (!VAR_16->sc_mem_res) {
  FUNC_8(VAR_15, "cannot allocate memory window\n");
  return (VAR_0);
 }

 VAR_16->sc_bst = FUNC_11(VAR_16->sc_mem_res);
 VAR_16->sc_bsh = FUNC_10(VAR_16->sc_mem_res);

 VAR_17 = 0;
 VAR_16->sc_irq_res = FUNC_2(VAR_15, VAR_11, &VAR_17,
     VAR_10);
 if (!VAR_16->sc_irq_res) {
  FUNC_3(VAR_15, VAR_12, 0, VAR_16->sc_mem_res);
  FUNC_8(VAR_15, "cannot allocate interrupt\n");
  return (VAR_0);
 }


 VAR_18 = FUNC_0(VAR_16, VAR_6);
 FUNC_1(VAR_16, VAR_6, VAR_18 & ~VAR_7);


 VAR_18 = FUNC_0(VAR_16, VAR_4);
 FUNC_1(VAR_16, VAR_4, VAR_18 & ~VAR_5);


 FUNC_1(VAR_16, VAR_8, 0);
 FUNC_1(VAR_16, VAR_9, 0);


 if (FUNC_4(VAR_15, VAR_16->sc_irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_14, VAR_16, &VAR_16->sc_intrhand)) {
  FUNC_3(VAR_15, VAR_11, 0, VAR_16->sc_irq_res);
  FUNC_3(VAR_15, VAR_12, 0, VAR_16->sc_mem_res);
  FUNC_8(VAR_15, "cannot setup the interrupt handler\n");
  return (VAR_0);
 }

 FUNC_9(&VAR_16->sc_mtx, "mv_spi", ((void*)0), VAR_3);

 FUNC_6(VAR_15, "spibus", -1);


 FUNC_5((ich_func_t)VAR_13, VAR_15);

 return (0);
}
