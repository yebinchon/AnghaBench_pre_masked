
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct amr_softc {int amr_list_lock; scalar_t__ (* amr_poll_command ) (struct amr_command*) ;} ;
struct amr_command {int ac_flags; size_t ac_length; int ac_status; int ac_mailbox; void* ac_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct amr_command* FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (struct amr_command*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (size_t,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct amr_command*) ;

__attribute__((used)) static void *
FUNC_8(struct amr_softc *VAR_5, size_t VAR_6, u_int8_t VAR_7, u_int8_t VAR_8, u_int8_t VAR_9, int *VAR_10)
{
    struct amr_command *VAR_11;
    void *VAR_12;
    u_int8_t *VAR_13;
    int VAR_14;

    FUNC_2(1);

    VAR_14 = 1;
    VAR_12 = ((void*)0);


    FUNC_5(&VAR_5->amr_list_lock);
    VAR_11 = FUNC_0(VAR_5);
    FUNC_6(&VAR_5->amr_list_lock);
    if (VAR_11 == ((void*)0))
 goto out;

    if ((VAR_12 = FUNC_4(VAR_6, VAR_2, VAR_4|VAR_3)) == ((void*)0))
 goto out;


    VAR_11->ac_flags |= VAR_1 | VAR_0;


    VAR_11->ac_data = VAR_12;
    VAR_11->ac_length = VAR_6;


    VAR_13 = (u_int8_t *)&VAR_11->ac_mailbox;
    VAR_13[0] = VAR_7;
    VAR_13[2] = VAR_8;
    VAR_13[3] = VAR_9;
    *VAR_10 = 0;


    if (VAR_5->amr_poll_command(VAR_11))
 goto out;
    VAR_14 = VAR_11->ac_status;
    *VAR_10 = VAR_11->ac_status;

 out:
    FUNC_5(&VAR_5->amr_list_lock);
    if (VAR_11 != ((void*)0))
 FUNC_1(VAR_11);
    FUNC_6(&VAR_5->amr_list_lock);
    if ((VAR_14 != 0) && (VAR_12 != ((void*)0))) {
 FUNC_3(VAR_12, VAR_2);
 VAR_12 = ((void*)0);
    }
    return(VAR_12);
}
