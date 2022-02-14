
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rl_softc {scalar_t__ suspended; struct ifnet* rl_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct rl_softc*) ;
 int FUNC_4 (struct rl_softc*) ;
 int FUNC_5 (struct rl_softc*) ;
 int FUNC_6 (struct rl_softc*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct rl_softc*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_10)
{
 struct rl_softc *VAR_11 = VAR_10;
 struct ifnet *VAR_12 = VAR_11->rl_ifp;
 uint16_t VAR_13;
 int VAR_14;

 FUNC_3(VAR_11);

 if (VAR_11->suspended)
  goto done_locked;






 if ((VAR_12->if_drv_flags & VAR_1) == 0)
  goto done_locked2;
 VAR_13 = FUNC_0(VAR_11, VAR_4);
 if (VAR_13 == 0xffff || (VAR_13 & VAR_3) == 0)
  goto done_locked;



 FUNC_1(VAR_11, VAR_2, 0);
 for (VAR_14 = 16; VAR_14 > 0; VAR_14--) {
  FUNC_1(VAR_11, VAR_4, VAR_13);
  if (VAR_12->if_drv_flags & VAR_1) {
   if (VAR_13 & (VAR_6 | VAR_5))
    FUNC_6(VAR_11);
   if (VAR_13 & (VAR_9 | VAR_8))
    FUNC_8(VAR_11);
   if (VAR_13 & VAR_7) {
    VAR_12->if_drv_flags &= ~VAR_1;
    FUNC_5(VAR_11);
    FUNC_4(VAR_11);
    return;
   }
  }
  VAR_13 = FUNC_0(VAR_11, VAR_4);

  if (VAR_13 == 0xffff || (VAR_13 & VAR_3) == 0)
   break;
 }

 if (!FUNC_2(&VAR_12->if_snd))
  FUNC_7(VAR_12);

done_locked2:
 if (VAR_12->if_drv_flags & VAR_1)
  FUNC_1(VAR_11, VAR_2, VAR_3);
done_locked:
 FUNC_4(VAR_11);
}
