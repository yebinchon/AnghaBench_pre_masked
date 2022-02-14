
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdt_softc {int sc_state; int sc_free_gccb; int sc_pending_gccb; int sc_lock; } ;
struct gdt_ccb {int gc_flags; } ;
struct TYPE_2__ {int cmd_index_act; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct gdt_ccb*,int ) ;
 int FUNC_2 (int *,struct gdt_ccb*,int ,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct gdt_ccb*) ;

void
FUNC_5(struct gdt_softc *VAR_7, struct gdt_ccb *VAR_8)
{

    FUNC_0(VAR_0, ("gdt_free_ccb(%p, %p)\n", VAR_7, VAR_8));

    FUNC_3(&VAR_7->sc_lock, VAR_3);
    VAR_8->gc_flags = VAR_1;
    FUNC_2(&VAR_7->sc_pending_gccb, VAR_8, VAR_4, VAR_6);
    FUNC_1(&VAR_7->sc_free_gccb, VAR_8, VAR_6);
    --VAR_5.cmd_index_act;
    if (VAR_7->sc_state & VAR_2)
        FUNC_4(VAR_8);
}
