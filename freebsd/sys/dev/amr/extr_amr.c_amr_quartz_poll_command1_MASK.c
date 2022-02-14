
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amr_softc {int amr_state; int amr_mailboxphys; int amr_hw_lock; TYPE_1__* amr_mailbox; int amr_dev; scalar_t__ amr_busyslots; } ;
struct amr_command {int ac_status; int ac_flags; int ac_datamap; int ac_tag; int ac_mailbox; int * ac_data; } ;
struct TYPE_2__ {int mb_ident; int mb_nstatus; int mb_status; int mb_poll; int mb_ack; int mb_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amr_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct amr_softc*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,void*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_11 ;
 int FUNC_7 (struct amr_softc*,int *,int,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct amr_softc *VAR_12, struct amr_command *VAR_13)
{
    int VAR_14, VAR_15;

    FUNC_8(&VAR_12->amr_hw_lock);
    if ((VAR_12->amr_state & VAR_5) == 0) {
 VAR_14=0;
 while (VAR_12->amr_busyslots) {
     FUNC_7(VAR_12, &VAR_12->amr_hw_lock, VAR_10 | VAR_9, "amrpoll", VAR_11);
     if(VAR_14++>10) {
  break;
     }
 }

 if(VAR_12->amr_busyslots) {
     FUNC_6(VAR_12->amr_dev, "adapter is busy\n");
     FUNC_9(&VAR_12->amr_hw_lock);
     if (VAR_13->ac_data != ((void*)0)) {
  FUNC_5(VAR_13->ac_tag, VAR_13->ac_datamap);
     }
         VAR_13->ac_status=0;
     return(1);
 }
    }

    FUNC_3(&VAR_13->ac_mailbox, (void *)(uintptr_t)(volatile void *)VAR_12->amr_mailbox, VAR_2);


    VAR_12->amr_mailbox->mb_ident = 0xFE;
    VAR_12->amr_mailbox->mb_nstatus = 0xFF;
    VAR_12->amr_mailbox->mb_status = 0xFF;
    VAR_12->amr_mailbox->mb_poll = 0;
    VAR_12->amr_mailbox->mb_ack = 0;
    VAR_12->amr_mailbox->mb_busy = 1;

    FUNC_1(VAR_12, VAR_12->amr_mailboxphys | VAR_4);

    while(VAR_12->amr_mailbox->mb_nstatus == 0xFF)
 FUNC_2(1);
    while(VAR_12->amr_mailbox->mb_status == 0xFF)
 FUNC_2(1);
    VAR_13->ac_status=VAR_12->amr_mailbox->mb_status;
    VAR_15 = (VAR_13->ac_status !=VAR_6) ? 1:0;
    while(VAR_12->amr_mailbox->mb_poll != 0x77)
 FUNC_2(1);
    VAR_12->amr_mailbox->mb_poll = 0;
    VAR_12->amr_mailbox->mb_ack = 0x77;


    FUNC_1(VAR_12, VAR_12->amr_mailboxphys | VAR_3);
    while(FUNC_0(VAR_12) & VAR_3)
 FUNC_2(1);
    FUNC_9(&VAR_12->amr_hw_lock);


    if (VAR_13->ac_flags & VAR_0) {
 FUNC_4(VAR_13->ac_tag, VAR_13->ac_datamap, VAR_7);
    }
    if (VAR_13->ac_flags & VAR_1) {
 FUNC_4(VAR_13->ac_tag, VAR_13->ac_datamap, VAR_8);
    }
    FUNC_5(VAR_13->ac_tag, VAR_13->ac_datamap);

    return(VAR_15);
}
