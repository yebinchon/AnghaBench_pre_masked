
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rs_code; } ;
struct mlx_softc {int mlx_iftype; int (* mlx_fw_handshake ) (struct mlx_softc*,int*,int*,int*,int) ;int mlx_currevent; int mlx_timeout; TYPE_3__* mlx_dev_t; int mlx_dev; TYPE_1__ mlx_rebuildstat; scalar_t__ mlx_background; TYPE_2__* mlx_enq2; int mlx_buffer_dmat; int mlx_io_lock; int mlx_parent_dmat; int mlx_intr; int * mlx_irq; int (* mlx_intaction ) (struct mlx_softc*,int ) ;int mlx_findcomplete; int mlx_tryqueue; int mlx_bioq; int mlx_freecmds; int mlx_work; } ;
struct mlx_enquiry_old {int me_fwminor; int me_fwmajor; } ;
struct mlx_enquiry2 {int dummy; } ;
struct TYPE_6__ {struct mlx_softc* si_drv1; } ;
struct TYPE_5__ {int me_firmware_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int FUNC_1 (struct mlx_softc*) ;
 int FUNC_2 (struct mlx_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int *) ;
 int VAR_20 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_7 (int ,int *,int,int *,int ,struct mlx_softc*,int *) ;
 int VAR_21 ;
 int FUNC_8 (int *,int ,int ,struct mlx_softc*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct mlx_enquiry_old*,int ) ;
 int VAR_22 ;
 TYPE_3__* FUNC_13 (int *,int ,int ,int ,int,char*,int ) ;
 int VAR_23 ;
 int FUNC_14 (struct mlx_softc*) ;
 void* FUNC_15 (struct mlx_softc*,int ,int,int *) ;
 int FUNC_16 (struct mlx_softc*,int,int,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_17 (struct mlx_softc*) ;
 int VAR_26 ;
 int FUNC_18 (struct mlx_softc*,int*,int*,int*,int) ;
 int FUNC_19 (struct mlx_softc*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_20 (struct mlx_softc*,int*,int*,int*,int) ;
 int FUNC_21 (struct mlx_softc*,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_22 (struct mlx_softc*,int*,int*,int*,int) ;
 int FUNC_23 (struct mlx_softc*,int ) ;
 int VAR_31 ;
 int FUNC_24 (struct mlx_softc*,int ) ;
 int FUNC_25 (struct mlx_softc*,int*,int*,int*,int) ;

int
FUNC_26(struct mlx_softc *VAR_32)
{
    struct mlx_enquiry_old *VAR_33;
    int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;

    FUNC_9(1);




    FUNC_3(&VAR_32->mlx_work);
    FUNC_3(&VAR_32->mlx_freecmds);
    FUNC_4(&VAR_32->mlx_bioq);




    switch(VAR_32->mlx_iftype) {
    case 131:
    case 130:
 VAR_32->mlx_tryqueue = VAR_27;
 VAR_32->mlx_findcomplete = VAR_26;
 VAR_32->mlx_intaction = FUNC_19;
 VAR_32->mlx_fw_handshake = FUNC_18;
 break;
    case 129:
 VAR_32->mlx_tryqueue = VAR_29;
 VAR_32->mlx_findcomplete = VAR_28;
 VAR_32->mlx_intaction = FUNC_21;
 VAR_32->mlx_fw_handshake = FUNC_20;
 break;
    case 128:
 VAR_32->mlx_tryqueue = VAR_31;
 VAR_32->mlx_findcomplete = VAR_30;
 VAR_32->mlx_intaction = FUNC_23;
 VAR_32->mlx_fw_handshake = FUNC_22;
 break;
    default:
 return(VAR_3);
    }


    FUNC_1(VAR_32);
    VAR_32->mlx_intaction(VAR_32, VAR_10);
    FUNC_2(VAR_32);






    VAR_41 = 0;
    FUNC_0(1000);
    while ((VAR_37 = VAR_32->mlx_fw_handshake(VAR_32, &VAR_38, &VAR_39, &VAR_40,
 VAR_41 == 0)) != 0) {

 if (VAR_41 == 0) {
     FUNC_11(VAR_32->mlx_dev, "controller initialisation in progress...\n");
     VAR_41 = 1;
 }

 if (VAR_37 == 2) {
     VAR_37 = FUNC_16(VAR_32, VAR_38, VAR_39, VAR_40);

     if (VAR_37 != 0) {
  return(VAR_3);
     }
 }
    }
    if (VAR_41 == 1)
 FUNC_11(VAR_32->mlx_dev, "initialisation complete.\n");




    VAR_34 = 0;
    VAR_32->mlx_irq = FUNC_5(VAR_32->mlx_dev, VAR_17, &VAR_34,
        VAR_16 | VAR_15);
    if (VAR_32->mlx_irq == ((void*)0)) {
 FUNC_11(VAR_32->mlx_dev, "can't allocate interrupt\n");
 return(VAR_3);
    }
    VAR_35 = FUNC_7(VAR_32->mlx_dev, VAR_32->mlx_irq, VAR_7 |
 VAR_5 | VAR_6, ((void*)0), VAR_24, VAR_32, &VAR_32->mlx_intr);
    if (VAR_35) {
 FUNC_11(VAR_32->mlx_dev, "can't set up interrupt\n");
 return(VAR_3);
    }




    VAR_35 = FUNC_6(VAR_32->mlx_parent_dmat,
          1, 0,
          VAR_0,
          VAR_0,
          ((void*)0), ((void*)0),
          VAR_11,
          VAR_12,
          VAR_1,
          0,
          VAR_21,
          &VAR_32->mlx_io_lock,
          &VAR_32->mlx_buffer_dmat);
    if (VAR_35 != 0) {
 FUNC_11(VAR_32->mlx_dev, "can't allocate buffer DMA tag\n");
 return(VAR_2);
    }





    VAR_35 = FUNC_17(VAR_32);
    if (VAR_35 != 0) {
 FUNC_11(VAR_32->mlx_dev, "can't make initial s/g list mapping\n");
 return(VAR_35);
    }




    VAR_32->mlx_currevent = -1;




    FUNC_1(VAR_32);
    if ((VAR_32->mlx_enq2 = FUNC_15(VAR_32, VAR_8, sizeof(struct mlx_enquiry2), ((void*)0))) == ((void*)0)) {
 FUNC_2(VAR_32);
 FUNC_11(VAR_32->mlx_dev, "ENQUIRY2 failed\n");
 return(VAR_3);
    }




    VAR_36 = (VAR_32->mlx_enq2->me_firmware_id >> 8) & 0xff;
    switch(VAR_32->mlx_iftype) {
    case 131:

 if ((VAR_33 = FUNC_15(VAR_32, VAR_9, sizeof(struct mlx_enquiry_old), ((void*)0))) == ((void*)0)) {
     FUNC_2(VAR_32);
     FUNC_11(VAR_32->mlx_dev, "ENQUIRY_OLD failed\n");
     return(VAR_3);
 }
 VAR_32->mlx_enq2->me_firmware_id = ('0' << 24) | (0 << 16) | (VAR_33->me_fwminor << 8) | VAR_33->me_fwmajor;


 if (VAR_33->me_fwminor < 42) {
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** This firmware revision is not recommended\n");
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** Use revision 2.42 or later\n");
 }
 FUNC_12(VAR_33, VAR_14);
 break;
    case 130:

 if (VAR_36 < 51) {
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** This firmware revision is not recommended\n");
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** Use revision 3.51 or later\n");
 }
 break;
    case 129:

 if (VAR_36 < 6) {
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** This firmware revision is not recommended\n");
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** Use revision 4.06 or later\n");
 }
 break;
    case 128:
 if (VAR_36 < 7) {
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** This firmware revision is not recommended\n");
     FUNC_11(VAR_32->mlx_dev, " *** WARNING *** Use revision 5.07 or later\n");
 }
 break;
    default:
 FUNC_2(VAR_32);
 return(VAR_3);
    }
    FUNC_2(VAR_32);




    VAR_35 = FUNC_17(VAR_32);
    if (VAR_35 != 0) {
 FUNC_11(VAR_32->mlx_dev, "can't make final s/g list mapping\n");
 return(VAR_35);
    }




    VAR_32->mlx_background = 0;
    VAR_32->mlx_rebuildstat.rs_code = VAR_13;




    VAR_32->mlx_dev_t = FUNC_13(&VAR_23, 0, VAR_20, VAR_4,
        VAR_18 | VAR_19, "mlx%d", FUNC_10(VAR_32->mlx_dev));
    VAR_32->mlx_dev_t->si_drv1 = VAR_32;




    FUNC_8(&VAR_32->mlx_timeout, VAR_22, VAR_25, VAR_32);


    FUNC_14(VAR_32);

    return(0);
}
