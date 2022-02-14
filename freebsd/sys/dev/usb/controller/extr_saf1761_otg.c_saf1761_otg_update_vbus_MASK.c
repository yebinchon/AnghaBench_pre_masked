
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int status_vbus; int change_connect; scalar_t__ change_suspend; scalar_t__ status_suspend; scalar_t__ status_bus_reset; } ;
struct saf1761_otg_softc {TYPE_1__ sc_flags; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct saf1761_otg_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct saf1761_otg_softc*) ;

__attribute__((used)) static void
FUNC_3(struct saf1761_otg_softc *VAR_3)
{
 uint16_t VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0);

 FUNC_0(4, "STATUS=0x%04x\n", VAR_4);

 if ((VAR_4 & VAR_2) &&
     (VAR_4 & VAR_1)) {

  if (!VAR_3->sc_flags.status_vbus) {
   VAR_3->sc_flags.status_vbus = 1;


   FUNC_2(VAR_3);
  }
 } else {

  if (VAR_3->sc_flags.status_vbus) {
   VAR_3->sc_flags.status_vbus = 0;
   VAR_3->sc_flags.status_bus_reset = 0;
   VAR_3->sc_flags.status_suspend = 0;
   VAR_3->sc_flags.change_suspend = 0;
   VAR_3->sc_flags.change_connect = 1;


   FUNC_2(VAR_3);
  }
 }
}
