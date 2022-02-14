
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_busyslots; int ** amr_busycmd; } ;
struct amr_command {int ac_slot; struct amr_softc* ac_sc; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static __inline int
FUNC_3(struct amr_command *VAR_0)
{
    struct amr_softc *VAR_1 = VAR_0->ac_sc;
    int VAR_2;

    FUNC_1(3);

    VAR_2 = VAR_0->ac_slot;
    if (VAR_1->amr_busycmd[VAR_2] == ((void*)0))
 FUNC_2("amr: slot %d not busy?\n", VAR_2);

    VAR_1->amr_busycmd[VAR_2] = ((void*)0);
    FUNC_0(&VAR_1->amr_busyslots, 1);

    return (0);
}
