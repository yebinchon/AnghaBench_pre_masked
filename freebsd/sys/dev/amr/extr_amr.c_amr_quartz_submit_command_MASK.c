
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct amr_softc {int amr_mailboxphys; int amr_hw_lock; TYPE_2__* amr_mailbox64; TYPE_1__* amr_mailbox; int amr_dev; } ;
struct TYPE_6__ {scalar_t__ mb_ident; } ;
struct amr_command {int ac_sg64_lo; int ac_sg64_hi; TYPE_3__ ac_mailbox; scalar_t__ ac_slot; scalar_t__ ac_retries; struct amr_softc* ac_sc; } ;
struct TYPE_5__ {int sg64_lo; int sg64_hi; } ;
struct TYPE_4__ {int mb_busy; scalar_t__ mb_ack; scalar_t__ mb_poll; } ;


 int FUNC_0 (struct amr_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct amr_softc*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,void*,int) ;
 int FUNC_4 (int ,char*,struct amr_command*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct timeval*,int*,int) ;

__attribute__((used)) static int
FUNC_8(struct amr_command *VAR_2)
{
    struct amr_softc *VAR_3 = VAR_2->ac_sc;
    static struct timeval VAR_4;
    static int VAR_5;
    int VAR_6 = 0;

    FUNC_5(&VAR_3->amr_hw_lock);
    while (VAR_3->amr_mailbox->mb_busy && (VAR_6++ < 10)) {
        FUNC_2(1);

 FUNC_0(VAR_3);
    }
    if (VAR_3->amr_mailbox->mb_busy) {
 FUNC_6(&VAR_3->amr_hw_lock);
 if (VAR_2->ac_retries++ > 1000) {
     if (FUNC_7(&VAR_4, &VAR_5, 1))
  FUNC_4(VAR_3->amr_dev, "Too many retries on command %p.  "
         "Controller is likely dead\n", VAR_2);
     VAR_2->ac_retries = 0;
 }
 return (VAR_1);
    }





    VAR_2->ac_mailbox.mb_ident = VAR_2->ac_slot + 1;
    FUNC_3(&VAR_2->ac_mailbox, (void *)(uintptr_t)(volatile void *)VAR_3->amr_mailbox, 14);
    VAR_3->amr_mailbox->mb_busy = 1;
    VAR_3->amr_mailbox->mb_poll = 0;
    VAR_3->amr_mailbox->mb_ack = 0;
    VAR_3->amr_mailbox64->sg64_hi = VAR_2->ac_sg64_hi;
    VAR_3->amr_mailbox64->sg64_lo = VAR_2->ac_sg64_lo;

    FUNC_1(VAR_3, VAR_3->amr_mailboxphys | VAR_0);
    FUNC_6(&VAR_3->amr_hw_lock);
    return(0);
}
