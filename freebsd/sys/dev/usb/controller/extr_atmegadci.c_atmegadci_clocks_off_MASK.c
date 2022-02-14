
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clocks_off; } ;
struct atmegadci_softc {TYPE_1__ sc_flags; int sc_bus; int (* sc_clocks_off ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atmegadci_softc*,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct atmegadci_softc *VAR_5)
{
 if (!VAR_5->sc_flags.clocks_off) {

  FUNC_1(5, "\n");



  FUNC_0(VAR_5, VAR_0,
      VAR_3 |
      VAR_2 |
      VAR_1 |
      VAR_4);


  (VAR_5->sc_clocks_off) (&VAR_5->sc_bus);

  VAR_5->sc_flags.clocks_off = 1;
 }
}
