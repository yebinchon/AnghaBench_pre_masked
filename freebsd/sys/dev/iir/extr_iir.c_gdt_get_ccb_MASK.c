
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdt_softc {int sc_pending_gccb; int sc_free_gccb; int sc_lock; } ;
struct gdt_ccb {int dummy; } ;
struct TYPE_2__ {scalar_t__ cmd_index_act; scalar_t__ cmd_index_max; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gdt_ccb* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct gdt_ccb*,int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct gdt_ccb *
FUNC_5(struct gdt_softc *VAR_4)
{
    struct gdt_ccb *VAR_5;

    FUNC_0(VAR_0, ("gdt_get_ccb(%p)\n", VAR_4));

    FUNC_4(&VAR_4->sc_lock, VAR_1);
    VAR_5 = FUNC_1(&VAR_4->sc_free_gccb);
    if (VAR_5 != ((void*)0)) {
        FUNC_3(&VAR_4->sc_free_gccb, VAR_3);
        FUNC_2(&VAR_4->sc_pending_gccb, VAR_5, VAR_3);
        ++VAR_2.cmd_index_act;
        if (VAR_2.cmd_index_act > VAR_2.cmd_index_max)
            VAR_2.cmd_index_max = VAR_2.cmd_index_act;
    }
    return (VAR_5);
}
