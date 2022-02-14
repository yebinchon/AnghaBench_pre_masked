
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amr_softc {int amr_list_lock; scalar_t__ (* amr_poll_command ) (struct amr_command*) ;} ;
struct TYPE_2__ {int mb_command; } ;
struct amr_command {int ac_flags; int ac_status; TYPE_1__ ac_mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct amr_command* FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (struct amr_command*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct amr_command*) ;

int
FUNC_5(struct amr_softc *VAR_3)
{
    struct amr_command *VAR_4;
    int VAR_5;


    VAR_5 = 1;
    FUNC_2(&VAR_3->amr_list_lock);
    VAR_4 = FUNC_0(VAR_3);
    FUNC_3(&VAR_3->amr_list_lock);
    if (VAR_4 == ((void*)0))
 goto out;

    VAR_4->ac_flags |= VAR_2 | VAR_0;


    VAR_4->ac_mailbox.mb_command = VAR_1;


    if (VAR_3->amr_poll_command(VAR_4))
 goto out;
    VAR_5 = VAR_4->ac_status;

 out:
    FUNC_2(&VAR_3->amr_list_lock);
    if (VAR_4 != ((void*)0))
 FUNC_1(VAR_4);
    FUNC_3(&VAR_3->amr_list_lock);
    return(VAR_5);
}
