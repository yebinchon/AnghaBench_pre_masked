
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union mly_command_packet {int dummy; } mly_command_packet ;
struct mly_softc {int mly_doorbell_true; int mly_interrupt_mask; int mly_interrupt_status; int mly_error_status; int mly_odbr; int mly_idbr; int mly_status_mailbox; int mly_command_mailbox; int mly_hwif; int mly_dev; int mly_packet_dmat; int mly_parent_dmat; int mly_buffer_dmat; int mly_lock; int mly_intr; int * mly_irq; scalar_t__ mly_irq_rid; scalar_t__ mly_regs_rid; int * mly_regs_resource; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ device; int hwif; } ;


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
 int VAR_26 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* FUNC_1 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int,int *,int ,struct mly_softc*,int *) ;
 int * VAR_31 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_32 ;
 int VAR_33 ;
 int FUNC_7 (struct mly_softc*) ;
 int FUNC_8 (struct mly_softc*,char*) ;
 int FUNC_9 (struct mly_softc*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct mly_softc *VAR_34)
{
    int VAR_35, VAR_36;

    FUNC_6(1);


    VAR_36 = VAR_7;




    FUNC_10(VAR_34->mly_dev);




    VAR_34->mly_regs_rid = FUNC_0(0);
    if ((VAR_34->mly_regs_resource = FUNC_1(VAR_34->mly_dev,
     VAR_30, &VAR_34->mly_regs_rid, VAR_27)) == ((void*)0)) {
 FUNC_8(VAR_34, "can't allocate register window\n");
 goto fail;
    }




    VAR_34->mly_irq_rid = 0;
    if ((VAR_34->mly_irq = FUNC_1(VAR_34->mly_dev, VAR_29,
      &VAR_34->mly_irq_rid, VAR_28 | VAR_27)) == ((void*)0)) {
 FUNC_8(VAR_34, "can't allocate interrupt\n");
 goto fail;
    }
    if (FUNC_4(VAR_34->mly_dev, VAR_34->mly_irq, VAR_10 | VAR_8 | VAR_9, ((void*)0), VAR_33, VAR_34, &VAR_34->mly_intr)) {
 FUNC_8(VAR_34, "can't set up interrupt\n");
 goto fail;
    }


    VAR_36 = VAR_6;






    if (FUNC_2(FUNC_3(VAR_34->mly_dev),
      1, 0,
      VAR_2,
      VAR_1,
      ((void*)0), ((void*)0),
      VAR_3,
      VAR_4,
      VAR_3,
      VAR_0,
      ((void*)0),
      ((void*)0),
      &VAR_34->mly_parent_dmat)) {
 FUNC_8(VAR_34, "can't allocate parent DMA tag\n");
 goto fail;
    }




    if (FUNC_2(VAR_34->mly_parent_dmat,
      1, 0,
      VAR_1,
      VAR_1,
      ((void*)0), ((void*)0),
      VAR_5,
      VAR_19,
      VAR_3,
      0,
      VAR_31,
      &VAR_34->mly_lock,
      &VAR_34->mly_buffer_dmat)) {
 FUNC_8(VAR_34, "can't allocate buffer DMA tag\n");
 goto fail;
    }




    if (FUNC_2(VAR_34->mly_parent_dmat,
      1, 0,
      VAR_1,
      VAR_1,
      ((void*)0), ((void*)0),
      sizeof(union mly_command_packet) * VAR_18, 1,
      VAR_3,
      VAR_0,
      ((void*)0), ((void*)0),
      &VAR_34->mly_packet_dmat)) {
 FUNC_8(VAR_34, "can't allocate command packet DMA tag\n");
 goto fail;
    }




    for (VAR_35 = 0; VAR_32[VAR_35].vendor != 0; VAR_35++) {
 if ((VAR_32[VAR_35].vendor == FUNC_12(VAR_34->mly_dev)) &&
     (VAR_32[VAR_35].device == FUNC_11(VAR_34->mly_dev))) {
     VAR_34->mly_hwif = VAR_32[VAR_35].hwif;
     switch(VAR_34->mly_hwif) {
     case 129:
  FUNC_5(1, "set hardware up for i960RX");
  VAR_34->mly_doorbell_true = 0x00;
  VAR_34->mly_command_mailbox = VAR_11;
  VAR_34->mly_status_mailbox = VAR_17;
  VAR_34->mly_idbr = VAR_13;
  VAR_34->mly_odbr = VAR_16;
  VAR_34->mly_error_status = VAR_12;
  VAR_34->mly_interrupt_status = VAR_15;
  VAR_34->mly_interrupt_mask = VAR_14;
  break;
     case 128:
  FUNC_5(1, "set hardware up for StrongARM");
  VAR_34->mly_doorbell_true = 0xff;
  VAR_34->mly_command_mailbox = VAR_20;
  VAR_34->mly_status_mailbox = VAR_26;
  VAR_34->mly_idbr = VAR_22;
  VAR_34->mly_odbr = VAR_25;
  VAR_34->mly_error_status = VAR_21;
  VAR_34->mly_interrupt_status = VAR_24;
  VAR_34->mly_interrupt_mask = VAR_23;
  break;
     }
     break;
 }
    }




    if ((VAR_36 = FUNC_9(VAR_34)))
 goto fail;




    if ((VAR_36 = FUNC_7(VAR_34)))
 goto fail;

    VAR_36 = 0;

fail:
    return(VAR_36);
}
