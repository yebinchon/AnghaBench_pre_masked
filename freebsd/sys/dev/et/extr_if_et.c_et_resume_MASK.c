
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct et_softc {int sc_flags; TYPE_1__* ifp; } ;
typedef int device_t ;
struct TYPE_2__ {int if_flags; } ;


 int FUNC_0 (struct et_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct et_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct et_softc*) ;
 int VAR_6 ;
 struct et_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct et_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7)
{
 struct et_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_3(VAR_7);
 FUNC_1(VAR_8);

 VAR_9 = VAR_4 | VAR_5 | VAR_3;
 if ((VAR_8->sc_flags & VAR_1) == 0)
  VAR_9 |= VAR_0;
 FUNC_0(VAR_8, VAR_2, VAR_9);
 if ((VAR_8->ifp->if_flags & VAR_6) != 0)
  FUNC_4(VAR_8);
 FUNC_2(VAR_8);
 return (0);
}
