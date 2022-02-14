
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_busyslots; struct amr_command** amr_busycmd; } ;
struct amr_command {int ac_slot; int ac_flags; struct amr_softc* ac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amr_command*) ;
 int FUNC_1 (struct amr_command*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct amr_command *VAR_2)
{
    struct amr_softc *VAR_3;
    int VAR_4 = 0;
    int VAR_5;

    FUNC_3(3);


    VAR_3 = VAR_2->ac_sc;
    VAR_2->ac_flags |= VAR_0;


    VAR_5 = VAR_2->ac_slot;
    if (VAR_3->amr_busycmd[VAR_5] != ((void*)0))
 FUNC_4("amr: slot %d busy?\n", VAR_5);
    VAR_3->amr_busycmd[VAR_5] = VAR_2;
    FUNC_2(&VAR_3->amr_busyslots, 1);


    if ((VAR_4 = FUNC_1(VAR_2)) == VAR_1) {




 FUNC_0(VAR_2);
    }

    return (VAR_4);
}
