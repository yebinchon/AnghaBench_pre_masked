
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct amr_softc {int amr_hw_lock; TYPE_1__* amr_mailbox; int amr_dev; } ;
struct TYPE_4__ {scalar_t__ mb_ident; } ;
struct amr_command {TYPE_2__ ac_mailbox; scalar_t__ ac_slot; scalar_t__ ac_retries; struct amr_softc* ac_sc; } ;
struct TYPE_3__ {int mb_busy; scalar_t__ mb_ack; scalar_t__ mb_poll; } ;


 int FUNC_0 (struct amr_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct amr_softc*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,void*,int) ;
 int FUNC_3 (int ,char*,struct amr_command*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct timeval*,int*,int) ;

__attribute__((used)) static int
FUNC_7(struct amr_command *VAR_2)
{
    struct amr_softc *VAR_3 = VAR_2->ac_sc;
    static struct timeval VAR_4;
    static int VAR_5;

    FUNC_4(&VAR_3->amr_hw_lock);
    if (FUNC_0(VAR_3) & VAR_0) {
 FUNC_5(&VAR_3->amr_hw_lock);
 if (VAR_2->ac_retries++ > 1000) {
     if (FUNC_6(&VAR_4, &VAR_5, 1))
  FUNC_3(VAR_3->amr_dev, "Too many retries on command %p.  "
         "Controller is likely dead\n", VAR_2);
     VAR_2->ac_retries = 0;
 }
 return (VAR_1);
    }





    VAR_2->ac_mailbox.mb_ident = VAR_2->ac_slot + 1;
    FUNC_2(&VAR_2->ac_mailbox, (void *)(uintptr_t)(volatile void *)VAR_3->amr_mailbox, 14);
    VAR_3->amr_mailbox->mb_busy = 1;
    VAR_3->amr_mailbox->mb_poll = 0;
    VAR_3->amr_mailbox->mb_ack = 0;

    FUNC_1(VAR_3);
    FUNC_5(&VAR_3->amr_hw_lock);
    return(0);
}
