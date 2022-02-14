
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {int sc_dpmem; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct gdt_softc *VAR_2)
{
    FUNC_0(VAR_0, ("gdt_mpr_release_event(%p) ", VAR_2));

    FUNC_1(VAR_2->sc_dpmem, VAR_1, 1);
}
