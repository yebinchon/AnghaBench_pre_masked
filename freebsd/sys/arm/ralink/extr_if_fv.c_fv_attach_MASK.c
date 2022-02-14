
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct fv_softc* if_softc; } ;
struct fv_softc {int* fv_eaddr; int fv_rid; int fv_intrhand; int * fv_irq; int fv_ifmedia; int fv_miibus; int fv_dev; int fv_miiproxy; struct ifnet* fv_ifp; int * fv_res; int fv_bhandle; int fv_btag; int fv_link_task; int fv_mtx; int fv_stat_callout; int fv_ofw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fv_softc*,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,char*,void*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int *,int ,int ,struct fv_softc*) ;
 void* FUNC_6 (int ,int ,int*,int) ;
 int FUNC_7 (int ,int *,int,int *,int ,struct fv_softc*,int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct fv_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct ifnet*,int*) ;
 int FUNC_15 (struct ifnet*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct fv_softc*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct ifnet* FUNC_18 (int ) ;
 int FUNC_19 (struct ifnet*,int ,int) ;
 int FUNC_20 (int *,int,int ,int *) ;
 int FUNC_21 (int *,int ,int ,int ) ;
 int FUNC_22 (int *,int) ;
 int VAR_28 ;
 int FUNC_23 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *,int ,int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int
FUNC_29(device_t VAR_29)
{
 struct ifnet *VAR_30;
 struct fv_softc *VAR_31;
 int VAR_32 = 0, VAR_33;
 int VAR_34;
 int VAR_35;

 VAR_31 = FUNC_11(VAR_29);
 VAR_34 = FUNC_12(VAR_29);
 VAR_31->fv_dev = VAR_29;
 VAR_31->fv_ofw = FUNC_26(VAR_29);

 VAR_35 = FUNC_4(VAR_31->fv_ofw, "local-mac-address", (void *)&VAR_31->fv_eaddr, 6);
 if (VAR_35 != 6) {

  VAR_31->fv_eaddr[0] = 0x00;
  VAR_31->fv_eaddr[1] = 0x0C;
  VAR_31->fv_eaddr[2] = 0x42;
  VAR_31->fv_eaddr[3] = 0x09;
  VAR_31->fv_eaddr[4] = 0x5E;
  VAR_31->fv_eaddr[5] = 0x6B;
 }

 FUNC_25(&VAR_31->fv_mtx, FUNC_10(VAR_29), VAR_16,
     VAR_15);
 FUNC_8(&VAR_31->fv_stat_callout, &VAR_31->fv_mtx, 0);
 FUNC_5(&VAR_31->fv_link_task, 0, VAR_26, VAR_31);


 VAR_31->fv_rid = 0;
 VAR_31->fv_res = FUNC_6(VAR_29, VAR_20, &VAR_31->fv_rid,
     VAR_17 | VAR_18);

 if (VAR_31->fv_res == ((void*)0)) {
  FUNC_13(VAR_29, "couldn't map memory\n");
  VAR_32 = VAR_4;
  goto fail;
 }

 VAR_31->fv_btag = FUNC_28(VAR_31->fv_res);
 VAR_31->fv_bhandle = FUNC_27(VAR_31->fv_res);


 VAR_33 = 0;
 VAR_31->fv_irq = FUNC_6(VAR_29, VAR_19, &VAR_33,
     VAR_18 | VAR_17);

 if (VAR_31->fv_irq == ((void*)0)) {
  FUNC_13(VAR_29, "couldn't map interrupt\n");
  VAR_32 = VAR_4;
  goto fail;
 }


 VAR_30 = VAR_31->fv_ifp = FUNC_18(VAR_10);

 if (VAR_30 == ((void*)0)) {
  FUNC_13(VAR_29, "couldn't allocate ifnet structure\n");
  VAR_32 = VAR_3;
  goto fail;
 }
 VAR_30->if_softc = VAR_31;
 FUNC_19(VAR_30, FUNC_9(VAR_29), FUNC_12(VAR_29));
 VAR_30->if_flags = VAR_5 | VAR_7 | VAR_6;
 VAR_30->if_ioctl = VAR_25;
 VAR_30->if_start = VAR_27;
 VAR_30->if_init = VAR_23;


 FUNC_2(&VAR_30->if_snd, VAR_28);
 VAR_30->if_snd.ifq_maxlen = VAR_28;
 FUNC_3(&VAR_30->if_snd);

 VAR_30->if_capenable = VAR_30->if_capabilities;

 if (FUNC_17(VAR_31) != 0) {
  VAR_32 = VAR_4;
  goto fail;
 }
 FUNC_0(VAR_31, VAR_2, VAR_1);
 FUNC_1(1000);
 FUNC_21(&VAR_31->fv_ifmedia, 0, VAR_22, VAR_21);

 FUNC_20(&VAR_31->fv_ifmedia, VAR_9 | VAR_8, 0, ((void*)0));
 FUNC_22(&VAR_31->fv_ifmedia, VAR_9 | VAR_8);



 FUNC_14(VAR_30, VAR_31->fv_eaddr);


 VAR_32 = FUNC_7(VAR_29, VAR_31->fv_irq, VAR_12 | VAR_11,
     ((void*)0), VAR_24, VAR_31, &VAR_31->fv_intrhand);

 if (VAR_32) {
  FUNC_13(VAR_29, "couldn't set up irq\n");
  FUNC_15(VAR_30);
  goto fail;
 }

fail:
 if (VAR_32)
  FUNC_16(VAR_29);

 return (VAR_32);
}
