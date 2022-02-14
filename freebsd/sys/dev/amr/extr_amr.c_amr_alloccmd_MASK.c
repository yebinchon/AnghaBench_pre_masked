
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_state; } ;
struct amr_mailbox {int dummy; } ;
struct amr_command {int * ac_datamap; int * ac_tag; scalar_t__ ac_retries; int * ac_complete; int * ac_data; int * ac_bio; scalar_t__ ac_flags; int ac_mailbox; scalar_t__ ac_status; } ;


 int VAR_0 ;
 struct amr_command* FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;

struct amr_command *
FUNC_3(struct amr_softc *VAR_1)
{
    struct amr_command *VAR_2;

    FUNC_2(3);

    VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 == ((void*)0)) {
 VAR_1->amr_state |= VAR_0;
 return(((void*)0));
    }


    VAR_2->ac_status = 0;
    FUNC_1(&VAR_2->ac_mailbox, sizeof(struct amr_mailbox));
    VAR_2->ac_flags = 0;
    VAR_2->ac_bio = ((void*)0);
    VAR_2->ac_data = ((void*)0);
    VAR_2->ac_complete = ((void*)0);
    VAR_2->ac_retries = 0;
    VAR_2->ac_tag = ((void*)0);
    VAR_2->ac_datamap = ((void*)0);
    return(VAR_2);
}
