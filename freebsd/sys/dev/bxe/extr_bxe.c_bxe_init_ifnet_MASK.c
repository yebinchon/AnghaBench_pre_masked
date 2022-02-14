
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mac_addr; } ;
struct TYPE_8__ {int ifm_media; TYPE_1__* ifm_cur; } ;
struct bxe_softc {int media; TYPE_2__ link_params; int * ifp; int tx_ring_size; int mtu; int dev; TYPE_3__ ifmedia; } ;
typedef int * if_t ;
struct TYPE_6__ {int ifm_media; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,struct bxe_softc*) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (TYPE_3__*,int,int ,int *) ;
 int FUNC_27 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_28 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_29(struct bxe_softc *VAR_35)
{
    if_t VAR_36;
    int VAR_37;


    FUNC_27(&VAR_35->ifmedia, VAR_24,
                 VAR_29,
                 VAR_28);


    FUNC_26(&VAR_35->ifmedia, (VAR_22 | VAR_23 | VAR_35->media), 0, ((void*)0));
    FUNC_26(&VAR_35->ifmedia, (VAR_22 | VAR_21), 0, ((void*)0));
    FUNC_28(&VAR_35->ifmedia, (VAR_22 | VAR_21));

    VAR_35->ifmedia.ifm_media = VAR_35->ifmedia.ifm_cur->ifm_media;
 FUNC_1(VAR_35, "IFMEDIA flags : %x\n", VAR_35->ifmedia.ifm_media);


    if ((VAR_36 = FUNC_8(VAR_25)) == ((void*)0)) {
        FUNC_0(VAR_35, "Interface allocation failed!\n");
        return (VAR_6);
    }

    FUNC_22(VAR_36, VAR_35);
    FUNC_9(VAR_36, FUNC_4(VAR_35->dev), FUNC_5(VAR_35->dev));
    FUNC_13(VAR_36, (VAR_18 | VAR_20 | VAR_19));
    FUNC_17(VAR_36, VAR_31);
    FUNC_23(VAR_36, VAR_34);
    FUNC_14(VAR_36, VAR_27);







    FUNC_16(VAR_36, VAR_30);
    FUNC_18(VAR_36, VAR_35->mtu);
    FUNC_15(VAR_36, (VAR_0 |
                        VAR_1 |
                        VAR_4 |
                        VAR_3 |
                        VAR_2 |
                        VAR_5));

    VAR_37 =

        (VAR_16 |
         VAR_14 |
         VAR_7 |
         VAR_8 |
         VAR_9);
    FUNC_11(VAR_36, VAR_37, 0);
    FUNC_12(VAR_36, FUNC_7(VAR_36));
    FUNC_10(VAR_36, FUNC_3(10));

    FUNC_20(VAR_36, VAR_35->tx_ring_size);
    FUNC_21(VAR_36);


    VAR_35->ifp = VAR_36;


    FUNC_6(VAR_36, VAR_35->link_params.mac_addr);


    FUNC_2(VAR_36, VAR_26);

    return (0);
}
