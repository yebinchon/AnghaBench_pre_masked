
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ic_nrunning; } ;
struct bwn_softc {TYPE_1__ sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (struct bwn_softc*) ;
 int FUNC_1 (struct bwn_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct bwn_softc*) ;
 struct bwn_softc* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct bwn_softc *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = VAR_0;

 FUNC_0(VAR_2);
 if (VAR_2->sc_ic.ic_nrunning > 0)
  VAR_3 = FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 if (VAR_3 == 0)
  FUNC_4(&VAR_2->sc_ic);
 return (0);
}
