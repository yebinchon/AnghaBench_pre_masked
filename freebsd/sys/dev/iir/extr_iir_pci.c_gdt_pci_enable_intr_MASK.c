
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {int sc_dpmem; } ;


 int FUNC_0 (struct gdt_softc*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4(struct gdt_softc *VAR_3)
{
    FUNC_1(VAR_0, ("gdt_pci_enable_intr(%p) ", VAR_3));

    switch(FUNC_0(VAR_3)) {
      case 128:
        FUNC_3(VAR_3->sc_dpmem, VAR_2, 0xff);
        FUNC_3(VAR_3->sc_dpmem, VAR_1,
     FUNC_2(VAR_3->sc_dpmem, VAR_1) & ~4);
        break;
    }
}
