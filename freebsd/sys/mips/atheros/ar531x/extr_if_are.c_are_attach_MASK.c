
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct are_softc* if_softc; } ;
struct are_softc {int* are_eaddr; int are_rid; int are_if_flags; int are_intrhand; int * are_irq; int are_ifmedia; int are_miibus; int are_dev; int are_miiproxy; struct ifnet* are_ifp; int * are_res; int are_bhandle; int are_btag; int are_link_task; int are_mtx; int are_stat_callout; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct are_softc*,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int *,int ,int ,struct are_softc*) ;
 scalar_t__ VAR_27 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct are_softc*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* FUNC_7 (int ,int ,int*,int) ;
 int FUNC_8 (int ,int *,int,int *,int ,struct are_softc*,int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (char*,int *,int ,struct are_softc*,int,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct are_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct ifnet*,int*) ;
 int FUNC_17 (struct ifnet*) ;
 struct ifnet* FUNC_18 (int ) ;
 int FUNC_19 (struct ifnet*,int ,int) ;
 int FUNC_20 (int *,int,int ,int *) ;
 int FUNC_21 (int *,int ,int ,int ) ;
 int FUNC_22 (int *,int) ;
 int VAR_35 ;
 int FUNC_23 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *,int ,int ,int ) ;
 int FUNC_26 (int ,int,char*,char const**) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (char*,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_36)
{
 struct ifnet *VAR_37;
 struct are_softc *VAR_38;
 int VAR_39 = 0;



 int VAR_40;

 int VAR_41;
 char * VAR_42;
 int VAR_43;
 int VAR_44;

 VAR_38 = FUNC_13(VAR_36);
 VAR_41 = FUNC_14(VAR_36);
 VAR_38->are_dev = VAR_36;


 VAR_38->are_eaddr[0] = 0x00;
 VAR_38->are_eaddr[1] = 0x0C;
 VAR_38->are_eaddr[2] = 0x42;
 VAR_38->are_eaddr[3] = 0x09;
 VAR_38->are_eaddr[4] = 0x5E;
 VAR_38->are_eaddr[5] = 0x6B;


 if (!FUNC_26(FUNC_11(VAR_36),
  FUNC_14(VAR_36), "macaddr", (const char **)&VAR_42)) {
  uint32_t VAR_45[VAR_9];


  FUNC_15(VAR_36, "Overriding MAC address from environment: '%s'\n",
      VAR_42);



  VAR_43 = FUNC_29(VAR_42, "%x%*c%x%*c%x%*c%x%*c%x%*c%x",
      &VAR_45[0], &VAR_45[1],
      &VAR_45[2], &VAR_45[3],
      &VAR_45[4], &VAR_45[5]);
  if (VAR_43 == 6) {

   for (VAR_44 = 0; VAR_44 < VAR_9; VAR_44++)
    VAR_38->are_eaddr[VAR_44] = VAR_45[VAR_44];
  }
 }

 FUNC_25(&VAR_38->are_mtx, FUNC_12(VAR_36), VAR_22,
     VAR_21);
 FUNC_9(&VAR_38->are_stat_callout, &VAR_38->are_mtx, 0);
 FUNC_4(&VAR_38->are_link_task, 0, VAR_33, VAR_38);


 VAR_38->are_rid = 0;
 VAR_38->are_res = FUNC_7(VAR_36, VAR_26, &VAR_38->are_rid,
     VAR_23 | VAR_24);

 if (VAR_38->are_res == ((void*)0)) {
  FUNC_15(VAR_36, "couldn't map memory\n");
  VAR_39 = VAR_8;
  goto fail;
 }

 VAR_38->are_btag = FUNC_28(VAR_38->are_res);
 VAR_38->are_bhandle = FUNC_27(VAR_38->are_res);



 VAR_40 = 0;
 VAR_38->are_irq = FUNC_7(VAR_36, VAR_25, &VAR_40,
     VAR_24 | VAR_23);

 if (VAR_38->are_irq == ((void*)0)) {
  FUNC_15(VAR_36, "couldn't map interrupt\n");
  VAR_39 = VAR_8;
  goto fail;
 }



 VAR_37 = VAR_38->are_ifp = FUNC_18(VAR_16);

 if (VAR_37 == ((void*)0)) {
  FUNC_15(VAR_36, "couldn't allocate ifnet structure\n");
  VAR_39 = VAR_7;
  goto fail;
 }
 VAR_37->if_softc = VAR_38;
 FUNC_19(VAR_37, FUNC_11(VAR_36), FUNC_14(VAR_36));
 VAR_37->if_flags = VAR_11 | VAR_13 | VAR_12;
 VAR_37->if_ioctl = VAR_32;
 VAR_37->if_start = VAR_34;
 VAR_37->if_init = VAR_30;
 VAR_38->are_if_flags = VAR_37->if_flags;


 FUNC_2(&VAR_37->if_snd, VAR_35);
 VAR_37->if_snd.ifq_maxlen = VAR_35;
 FUNC_3(&VAR_37->if_snd);


 VAR_37->if_capabilities |= VAR_10;

 VAR_37->if_capenable = VAR_37->if_capabilities;

 if (FUNC_6(VAR_38) != 0) {
  VAR_39 = VAR_8;
  goto fail;
 }

 FUNC_0(VAR_38, VAR_6, VAR_5);
 FUNC_1(1000);
 FUNC_21(&VAR_38->are_ifmedia, 0, VAR_29, VAR_28);

 FUNC_20(&VAR_38->are_ifmedia, VAR_15 | VAR_14, 0, ((void*)0));
 FUNC_22(&VAR_38->are_ifmedia, VAR_15 | VAR_14);



 FUNC_16(VAR_37, VAR_38->are_eaddr);
 VAR_39 = FUNC_8(VAR_36, VAR_38->are_irq, VAR_18 | VAR_17,
     ((void*)0), VAR_31, VAR_38, &VAR_38->are_intrhand);

 if (VAR_39) {
  FUNC_15(VAR_36, "couldn't set up irq\n");
  FUNC_17(VAR_37);
  goto fail;
 }


fail:
 if (VAR_39)
  FUNC_5(VAR_36);

 return (VAR_39);
}
