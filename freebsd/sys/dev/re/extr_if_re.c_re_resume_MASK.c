
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int rl_flags; scalar_t__ suspended; struct ifnet* rl_ifp; } ;
struct ifnet {int if_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rl_softc*) ;
 int VAR_3 ;
 int FUNC_3 (struct rl_softc*) ;
 struct rl_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct rl_softc*) ;
 int FUNC_6 (struct rl_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 struct rl_softc *VAR_5;
 struct ifnet *VAR_6;

 VAR_5 = FUNC_4(VAR_4);

 FUNC_2(VAR_5);

 VAR_6 = VAR_5->rl_ifp;

 if ((VAR_5->rl_flags & VAR_1) != 0) {
  if ((FUNC_0(VAR_5, VAR_3) & 0x80) == 0x80)
   FUNC_1(VAR_5, VAR_2,
       FUNC_0(VAR_5, VAR_2) | 0x01);
 }





 FUNC_5(VAR_5);


 if (VAR_6->if_flags & VAR_0)
  FUNC_6(VAR_5);

 VAR_5->suspended = 0;
 FUNC_3(VAR_5);

 return (0);
}
