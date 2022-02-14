
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ic_nrunning; } ;
struct iwm_softc {int sc_flags; TYPE_1__ sc_ic; int sc_attached; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;
 struct iwm_softc* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct iwm_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 int VAR_2 = 0;
 struct iwm_softc *VAR_3 = FUNC_2(VAR_1);

 VAR_2 = !! (VAR_3->sc_ic.ic_nrunning > 0);

 if (!VAR_3->sc_attached)
  return (0);

 FUNC_3(&VAR_3->sc_ic);

 if (VAR_2) {
  FUNC_0(VAR_3);
  FUNC_4(VAR_3);
  VAR_3->sc_flags |= VAR_0;
  FUNC_1(VAR_3);
 }

 return (0);
}
