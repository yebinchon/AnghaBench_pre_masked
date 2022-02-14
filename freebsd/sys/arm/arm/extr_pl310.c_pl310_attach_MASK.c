
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct pl310_softc {int sc_rtl_revision; int sc_io_coherent; int sc_enabled; TYPE_1__* sc_ich; int * sc_irq_res; int sc_mtx; int * sc_mem_res; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_6__ {int cf_l2cache_drain_writebuf; int cf_l2cache_wb_range; int cf_l2cache_inv_range; int cf_l2cache_wbinv_range; int (* cf_l2cache_wbinv_all ) () ;} ;
struct TYPE_5__ {struct pl310_softc* ich_arg; int ich_func; } ;


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
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_21 ;
 int FUNC_3 (int ) ;
 struct pl310_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_1__* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_11 (struct pl310_softc*) ;
 int FUNC_12 (struct pl310_softc*,int ) ;
 int FUNC_13 (struct pl310_softc*) ;
 struct pl310_softc* VAR_29 ;
 int FUNC_14 (int ,int) ;
 int VAR_30 ;
 int FUNC_15 () ;
 int VAR_31 ;
 int FUNC_16 (struct pl310_softc*,int ,int) ;
 int FUNC_17 (struct pl310_softc*) ;
 int FUNC_18 (struct pl310_softc*,int) ;
 int FUNC_19 (struct pl310_softc*,int) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_32)
{
 struct pl310_softc *VAR_33 = FUNC_4(VAR_32);
 int VAR_34;
 uint32_t VAR_35, VAR_36;
 phandle_t VAR_37;

 VAR_33->sc_dev = VAR_32;
 VAR_34 = 0;
 VAR_33->sc_mem_res = FUNC_1(VAR_32, VAR_19, &VAR_34,
     VAR_16);
 if (VAR_33->sc_mem_res == ((void*)0))
  FUNC_10("%s: Cannot map registers", FUNC_3(VAR_32));


 VAR_34 = 0;
 VAR_33->sc_irq_res = FUNC_1(VAR_32, VAR_18, &VAR_34,
                                         VAR_16 | VAR_17);
 if (VAR_33->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_32, "cannot allocate IRQ, not using interrupt\n");
 }

 VAR_29 = VAR_33;
 FUNC_8(&VAR_33->sc_mtx, "pl310lock", ((void*)0), VAR_9);

 VAR_35 = FUNC_12(VAR_33, VAR_12);
 VAR_33->sc_rtl_revision = (VAR_35 >> VAR_3) &
     VAR_2;
 FUNC_5(VAR_32, "Part number: 0x%x, release: 0x%x\n",
     (VAR_35 >> VAR_1) & VAR_0,
     (VAR_35 >> VAR_3) & VAR_2);






 VAR_37 = FUNC_9(VAR_32);
 if (FUNC_0(VAR_37, "arm,io-coherent"))
  VAR_33->sc_io_coherent = 1;
 if (FUNC_12(VAR_33, VAR_13) & VAR_5) {
  FUNC_5(VAR_32, "Warning: L2 Cache should not already be "
      "active; trying to de-activate and re-initialize...\n");
  VAR_33->sc_enabled = 1;
  VAR_36 = FUNC_12(VAR_33, VAR_14);
  FUNC_19(VAR_33, VAR_36 |
      VAR_7 | VAR_6);
  FUNC_13(VAR_33);
  FUNC_15();
  FUNC_18(VAR_33, VAR_4);
  FUNC_19(VAR_33, VAR_36);
 }
 VAR_33->sc_enabled = VAR_27;

 if (VAR_33->sc_enabled) {
  FUNC_17(VAR_33);
  FUNC_13(VAR_33);
  FUNC_16(VAR_29, VAR_15, 0xffff);
  FUNC_14(VAR_15, 0xffff);
  FUNC_18(VAR_33, VAR_5);
  FUNC_5(VAR_32, "L2 Cache enabled: %uKB/%dB %d ways\n",
      (VAR_23 / 1024), VAR_22, VAR_24);
  if (VAR_20)
   FUNC_11(VAR_33);
 } else {
  if (VAR_33->sc_irq_res != ((void*)0)) {
   VAR_33->sc_ich = FUNC_7(sizeof(*VAR_33->sc_ich), VAR_10, VAR_11);
   VAR_33->sc_ich->ich_func = VAR_25;
   VAR_33->sc_ich->ich_arg = VAR_33;
   if (FUNC_2(VAR_33->sc_ich) != 0) {
    FUNC_5(VAR_32,
        "config_intrhook_establish failed\n");
    FUNC_6(VAR_33->sc_ich, VAR_10);
    return(VAR_8);
   }
  }

  FUNC_5(VAR_32, "L2 Cache disabled\n");
 }


 VAR_21.cf_l2cache_wbinv_all = FUNC_15;
 VAR_21.cf_l2cache_wbinv_range = VAR_31;
 VAR_21.cf_l2cache_inv_range = VAR_28;
 VAR_21.cf_l2cache_wb_range = VAR_30;
 VAR_21.cf_l2cache_drain_writebuf = VAR_26;

 return (0);
}
