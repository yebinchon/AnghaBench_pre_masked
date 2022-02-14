
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct amr_softc {int amr_state; scalar_t__ (* amr_poll_command ) (struct amr_command*) ;} ;
struct TYPE_2__ {int mb_blkcount; int mb_drive; int mb_lba; int mb_command; } ;
struct amr_command {int ac_flags; int ac_length; int ac_status; TYPE_1__ ac_mailbox; void* ac_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct amr_command* FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (struct amr_command*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct amr_command*) ;

int
FUNC_4(struct amr_softc *VAR_6, int VAR_7, u_int32_t VAR_8, void *VAR_9, int VAR_10)
{
    struct amr_command *VAR_11;
    int VAR_12 = VAR_5;

    FUNC_2(1);

    VAR_6->amr_state |= VAR_4;


    if ((VAR_11 = FUNC_0(VAR_6)) == ((void*)0))
 goto out;

    VAR_11->ac_flags |= VAR_3 | VAR_1;


    VAR_11->ac_data = VAR_9;
    VAR_11->ac_length = VAR_10 * VAR_0;


    VAR_11->ac_mailbox.mb_command = VAR_2;
    VAR_11->ac_mailbox.mb_blkcount = VAR_10;
    VAR_11->ac_mailbox.mb_lba = VAR_8;
    VAR_11->ac_mailbox.mb_drive = VAR_7;


    if (VAR_6->amr_poll_command(VAR_11))
 goto out;
    VAR_12 = VAR_11->ac_status;

 out:
    if (VAR_11 != ((void*)0))
 FUNC_1(VAR_11);

    VAR_6->amr_state &= ~VAR_4;
    return (VAR_12);
}
