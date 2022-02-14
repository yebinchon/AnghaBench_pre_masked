
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clocks_off; } ;
struct musbotg_softc {TYPE_1__ sc_flags; int sc_clocks_arg; int (* sc_clocks_off ) (int ) ;} ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct musbotg_softc *VAR_0)
{
 if (!VAR_0->sc_flags.clocks_off) {

  FUNC_0(4, "\n");



  if (VAR_0->sc_clocks_off) {
   (VAR_0->sc_clocks_off) (VAR_0->sc_clocks_arg);
  }
  VAR_0->sc_flags.clocks_off = 1;
 }
}
