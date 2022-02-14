
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_io_hdl; int sc_io_tag; } ;
typedef TYPE_1__ ehci_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(ehci_softc_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->sc_io_tag, VAR_2->sc_io_hdl, VAR_1);
 FUNC_1(VAR_2->sc_io_tag, VAR_2->sc_io_hdl, VAR_1, VAR_3 | VAR_0);
}
