
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct amr_softc {int amr_list_lock; scalar_t__ (* amr_poll_command ) (struct amr_command*) ;} ;
struct amr_command {int ac_flags; scalar_t__ ac_status; int ac_mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct amr_command* FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (struct amr_command*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct amr_command*) ;

__attribute__((used)) static int
FUNC_5(struct amr_softc *VAR_3)
{
    struct amr_command *VAR_4;
    u_int8_t *VAR_5;
    int VAR_6;


    VAR_6 = 0;
    FUNC_2(&VAR_3->amr_list_lock);
    VAR_4 = FUNC_0(VAR_3);
    FUNC_3(&VAR_3->amr_list_lock);
    if (VAR_4 == ((void*)0))
 goto out;

    VAR_4->ac_flags |= VAR_1 | VAR_0;


    VAR_5 = (u_int8_t *)&VAR_4->ac_mailbox;
    VAR_5[0] = 0xA4;
    VAR_5[2] = 0x16;



    if (VAR_3->amr_poll_command(VAR_4))
 goto out;
    if( VAR_4->ac_status == VAR_2 ) {
     VAR_6 = 1;
    }

out:
    FUNC_2(&VAR_3->amr_list_lock);
    if (VAR_4 != ((void*)0))
 FUNC_1(VAR_4);
    FUNC_3(&VAR_3->amr_list_lock);
    return(VAR_6);
}
