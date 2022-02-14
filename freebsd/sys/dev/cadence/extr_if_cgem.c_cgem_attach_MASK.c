
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct cgem_softc {int rxhangwar; int intrhand; int * irq_res; int sc_mtx; int tick_ch; int miibus; int rxbufs; int if_old_flags; int * ifp; int * mem_res; scalar_t__ ref_clk_num; int dev; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int * if_t ;
typedef int device_t ;
typedef int cell ;


 int VAR_0 ;
 int FUNC_0 (struct cgem_softc*) ;
 int FUNC_1 (struct cgem_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct cgem_softc*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (int ,char*,int *,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int *,int,int *,int ,struct cgem_softc*,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct cgem_softc*,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_10 (struct cgem_softc*) ;
 int FUNC_11 (struct cgem_softc*) ;
 int VAR_27 ;
 struct cgem_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int *,int,int ) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,int ) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,struct cgem_softc*) ;
 int FUNC_31 (int *,int ) ;
 int FUNC_32 (int ,int *,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_33 (int ) ;

__attribute__((used)) static int
FUNC_34(device_t VAR_28)
{
 struct cgem_softc *VAR_29 = FUNC_12(VAR_28);
 if_t VAR_30 = ((void*)0);
 phandle_t VAR_31;
 pcell_t VAR_32;
 int VAR_33, VAR_34;
 u_char VAR_35[VAR_4];

 VAR_29->dev = VAR_28;
 FUNC_1(VAR_29);


 VAR_31 = FUNC_33(VAR_28);
 VAR_29->ref_clk_num = 0;
 if (FUNC_3(VAR_31, "ref-clock-num", &VAR_32, sizeof(VAR_32)) > 0)
  VAR_29->ref_clk_num = FUNC_17(VAR_32);


 VAR_33 = 0;
 VAR_29->mem_res = FUNC_4(VAR_28, VAR_21, &VAR_33,
          VAR_19);
 if (VAR_29->mem_res == ((void*)0)) {
  FUNC_14(VAR_28, "could not allocate memory resources.\n");
  return (VAR_3);
 }


 VAR_33 = 0;
 VAR_29->irq_res = FUNC_4(VAR_28, VAR_20, &VAR_33,
          VAR_19);
 if (VAR_29->irq_res == ((void*)0)) {
  FUNC_14(VAR_28, "could not allocate interrupt resource.\n");
  FUNC_8(VAR_28);
  return (VAR_3);
 }


 VAR_30 = VAR_29->ifp = FUNC_18(VAR_12);
 if (VAR_30 == ((void*)0)) {
  FUNC_14(VAR_28, "could not allocate ifnet structure\n");
  FUNC_8(VAR_28);
  return (VAR_3);
 }
 FUNC_30(VAR_30, VAR_29);
 FUNC_21(VAR_30, VAR_13, FUNC_13(VAR_28));
 FUNC_24(VAR_30, VAR_9 | VAR_11 | VAR_10);
 FUNC_26(VAR_30, VAR_24);
 FUNC_27(VAR_30, VAR_26);
 FUNC_31(VAR_30, VAR_27);
 FUNC_22(VAR_30, VAR_5 | VAR_6 |
         VAR_8 | VAR_7, 0);
 FUNC_28(VAR_30, VAR_1);
 FUNC_29(VAR_30);


 FUNC_25(VAR_30, 0);
 FUNC_23(VAR_30, FUNC_19(VAR_30) &
  ~(VAR_5 | VAR_6 | VAR_7));

 VAR_29->if_old_flags = FUNC_20(VAR_30);
 VAR_29->rxbufs = VAR_2;
 VAR_29->rxhangwar = 1;


 FUNC_0(VAR_29);
 FUNC_10(VAR_29);
 FUNC_2(VAR_29);


 VAR_34 = FUNC_32(VAR_28, &VAR_29->miibus, VAR_30,
    VAR_23, VAR_22,
    VAR_0, VAR_18, VAR_17, 0);
 if (VAR_34) {
  FUNC_14(VAR_28, "attaching PHYs failed\n");
  FUNC_8(VAR_28);
  return (VAR_34);
 }


 VAR_34 = FUNC_11(VAR_29);
 if (VAR_34) {
  FUNC_14(VAR_28, "could not set up dma mem for descs.\n");
  FUNC_8(VAR_28);
  return (VAR_3);
 }


 FUNC_9(VAR_29, VAR_35);


 FUNC_6(&VAR_29->tick_ch, &VAR_29->sc_mtx, 0);

 FUNC_15(VAR_30, VAR_35);

 VAR_34 = FUNC_5(VAR_28, VAR_29->irq_res, VAR_16 | VAR_15 |
        VAR_14, ((void*)0), VAR_25, VAR_29, &VAR_29->intrhand);
 if (VAR_34) {
  FUNC_14(VAR_28, "could not set interrupt handler.\n");
  FUNC_16(VAR_30);
  FUNC_8(VAR_28);
  return (VAR_34);
 }

 FUNC_7(VAR_28);

 return (0);
}
