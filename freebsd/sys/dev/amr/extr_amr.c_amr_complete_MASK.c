
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int ac_flags; int amr_list_lock; int amr_state; int amr_busyslots; int (* ac_complete ) (struct amr_softc*) ;} ;
struct amr_command {int ac_flags; int amr_list_lock; int amr_state; int amr_busyslots; int (* ac_complete ) (struct amr_softc*) ;} ;
typedef int ac_qhead_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct amr_softc* FUNC_0 (struct amr_softc*,int *) ;
 int FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (struct amr_softc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct amr_softc*) ;
 int FUNC_7 (struct amr_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3, ac_qhead_t *VAR_4)
{
    struct amr_softc *VAR_5 = (struct amr_softc *)VAR_3;
    struct amr_command *VAR_6;

    FUNC_3(3);


    for (;;) {
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6 == ((void*)0))
     break;


 FUNC_2(VAR_6);




 if (VAR_6->ac_complete != ((void*)0)) {

     VAR_6->ac_flags &= ~VAR_0;
     VAR_6->ac_complete(VAR_6);




 } else {
     FUNC_4(&VAR_5->amr_list_lock);
     VAR_6->ac_flags &= ~VAR_0;
     if (VAR_6->ac_flags & VAR_1) {

  FUNC_7(VAR_6);
     }
     FUNC_5(&VAR_5->amr_list_lock);
 }

 if(!VAR_5->amr_busyslots) {
     FUNC_7(VAR_5);
 }
    }

    FUNC_4(&VAR_5->amr_list_lock);
    VAR_5->amr_state &= ~VAR_2;
    FUNC_1(VAR_5);
    FUNC_5(&VAR_5->amr_list_lock);
}
