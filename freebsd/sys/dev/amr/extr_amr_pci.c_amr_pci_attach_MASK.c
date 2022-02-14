
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct amr_softc {int amr_hw_lock; int amr_list_lock; int amr_dev; int amr_buffer64_dmat; int amr_parent_dmat; int amr_buffer_dmat; int amr_intr; int * amr_irq; int * amr_reg; int amr_bhandle; int amr_btag; int amr_type; } ;
struct amr_ident {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amr_softc*) ;
 scalar_t__ FUNC_1 (struct amr_softc*) ;
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
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct amr_softc*) ;
 int FUNC_4 (struct amr_softc*) ;
 struct amr_ident* FUNC_5 (int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_6 (struct amr_softc*) ;
 int VAR_23 ;
 int FUNC_7 (struct amr_softc*) ;
 int FUNC_8 (struct amr_softc*) ;
 void* FUNC_9 (int ,int,int*,int) ;
 scalar_t__ FUNC_10 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *,int,int *,int ,struct amr_softc*,int *) ;
 int * VAR_24 ;
 int FUNC_13 (struct amr_softc*,int) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (int) ;
 struct amr_softc* FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_25)
{
    struct amr_softc *VAR_26;
    struct amr_ident *VAR_27;
    int VAR_28, VAR_29, VAR_30;

    FUNC_15(1);




    VAR_26 = FUNC_16(VAR_25);
    FUNC_13(VAR_26, sizeof(*VAR_26));
    VAR_26->amr_dev = VAR_25;


    VAR_30 = VAR_12;




    if ((VAR_27 = FUNC_5(VAR_25)) == ((void*)0))
 return (VAR_12);

    if (VAR_27->flags & VAR_1) {
 VAR_26->amr_type |= VAR_3;
    }

    if ((VAR_22 == 0) && (VAR_27->flags & VAR_0) &&
 (sizeof(vm_paddr_t) > 4)) {
 FUNC_17(VAR_25, "Using 64-bit DMA\n");
 VAR_26->amr_type |= VAR_4;
    }


    FUNC_19(VAR_25);




    VAR_28 = FUNC_2(0);
    VAR_29 = FUNC_0(VAR_26) ? VAR_21 : VAR_19;
    VAR_26->amr_reg = FUNC_9(VAR_25, VAR_29, &VAR_28, VAR_17);
    if (VAR_26->amr_reg == ((void*)0)) {
 FUNC_17(VAR_26->amr_dev, "can't allocate register window\n");
 goto out;
    }
    VAR_26->amr_btag = FUNC_21(VAR_26->amr_reg);
    VAR_26->amr_bhandle = FUNC_20(VAR_26->amr_reg);




    VAR_28 = 0;
    VAR_26->amr_irq = FUNC_9(VAR_26->amr_dev, VAR_20, &VAR_28,
        VAR_18 | VAR_17);
    if (VAR_26->amr_irq == ((void*)0)) {
        FUNC_17(VAR_26->amr_dev, "can't allocate interrupt\n");
 goto out;
    }
    if (FUNC_12(VAR_26->amr_dev, VAR_26->amr_irq,
 VAR_15 | VAR_13 | VAR_14, ((void*)0), VAR_23,
 VAR_26, &VAR_26->amr_intr)) {
        FUNC_17(VAR_26->amr_dev, "can't set up interrupt\n");
 goto out;
    }

    FUNC_14(2, "interrupt attached");


    VAR_30 = VAR_11;




    if (FUNC_10(FUNC_11(VAR_25),
      1, 0,
      FUNC_1(VAR_26) ?
      VAR_5 :
      VAR_6,
      VAR_5,
      ((void*)0), ((void*)0),
      VAR_7,
      VAR_9,
      VAR_8,
      0,
      ((void*)0), ((void*)0),
      &VAR_26->amr_parent_dmat)) {
 FUNC_17(VAR_25, "can't allocate parent DMA tag\n");
 goto out;
    }




    if (FUNC_10(VAR_26->amr_parent_dmat,
      1, 0,
      VAR_6,
      VAR_5,
      ((void*)0), ((void*)0),
      VAR_10,
      VAR_2,
      VAR_8,
      0,
      VAR_24,
      &VAR_26->amr_list_lock,
      &VAR_26->amr_buffer_dmat)) {
        FUNC_17(VAR_26->amr_dev, "can't allocate buffer DMA tag\n");
 goto out;
    }

    if (FUNC_10(VAR_26->amr_parent_dmat,
      1, 0,
      VAR_5,
      VAR_5,
      ((void*)0), ((void*)0),
      VAR_10,
      VAR_2,
      VAR_8,
      0,
      VAR_24,
      &VAR_26->amr_list_lock,
      &VAR_26->amr_buffer64_dmat)) {
        FUNC_17(VAR_26->amr_dev, "can't allocate buffer DMA tag\n");
 goto out;
    }

    FUNC_14(2, "dma tag done");




    FUNC_18(&VAR_26->amr_list_lock, "AMR List Lock", ((void*)0), VAR_16);
    FUNC_18(&VAR_26->amr_hw_lock, "AMR HW Lock", ((void*)0), VAR_16);
    if ((VAR_30 = FUNC_7(VAR_26)) != 0)
 goto out;

    FUNC_14(2, "mailbox setup");




    if ((VAR_30 = FUNC_8(VAR_26)) != 0)
 goto out;
    FUNC_14(2, "s/g list mapped");

    if ((VAR_30 = FUNC_4(VAR_26)) != 0)
 goto out;
    FUNC_14(2, "ccb mapped");





    VAR_30 = FUNC_3(VAR_26);

out:
    if (VAR_30)
 FUNC_6(VAR_26);
    return(VAR_30);
}
