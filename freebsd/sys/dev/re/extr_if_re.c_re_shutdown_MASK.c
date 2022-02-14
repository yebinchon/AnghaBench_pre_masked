
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rl_softc {TYPE_1__* rl_ifp; } ;
typedef int device_t ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rl_softc*) ;
 int FUNC_1 (struct rl_softc*) ;
 struct rl_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct rl_softc*) ;
 int FUNC_4 (struct rl_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct rl_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 FUNC_4(VAR_2);





 VAR_2->rl_ifp->if_flags &= ~VAR_0;
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 return (0);
}
