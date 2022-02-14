
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ sc_mode; } ;
struct musbotg_super_softc {TYPE_1__ sc_otg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct musbotg_super_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(struct musbotg_super_softc *VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2->sc_otg.sc_mode == VAR_0)
  FUNC_1(&VAR_2->sc_otg, 1);
 else {
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  FUNC_1(&VAR_2->sc_otg, VAR_3 & 1);
 }
}
