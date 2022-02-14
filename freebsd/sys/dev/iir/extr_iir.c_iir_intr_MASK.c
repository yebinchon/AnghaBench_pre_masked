
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {int sc_lock; } ;


 int FUNC_0 (struct gdt_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void *VAR_0)
{
    struct gdt_softc *VAR_1 = VAR_0;

    FUNC_1(&VAR_1->sc_lock);
    FUNC_0(VAR_1);
    FUNC_2(&VAR_1->sc_lock);
}
