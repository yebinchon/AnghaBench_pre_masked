
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {scalar_t__ (* sc_test_busy ) (struct gdt_softc*) ;int sc_state; } ;
struct gdt_ccb {scalar_t__ gc_cmd_index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct gdt_softc*) ;
 scalar_t__ FUNC_3 (struct gdt_softc*) ;

__attribute__((used)) static int
FUNC_4(struct gdt_softc *VAR_2, struct gdt_ccb *VAR_3,
         int VAR_4)
{
    int VAR_5 = 0;

    FUNC_1(VAR_0,
                ("gdt_wait(%p, %p, %d)\n", VAR_2, VAR_3, VAR_4));

    VAR_2->sc_state |= VAR_1;
    do {
        if (FUNC_2(VAR_2) == VAR_3->gc_cmd_index) {
            VAR_5 = 1;
            break;
        }
        FUNC_0(1);
    } while (--VAR_4);
    VAR_2->sc_state &= ~VAR_1;

    while (VAR_2->sc_test_busy(VAR_2))
        FUNC_0(1);

    return (VAR_5);
}
