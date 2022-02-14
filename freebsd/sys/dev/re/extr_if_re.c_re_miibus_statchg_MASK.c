
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int rl_flags; struct ifnet* rl_ifp; int rl_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_5)
{
 struct rl_softc *VAR_6;
 struct ifnet *VAR_7;
 struct mii_data *VAR_8;

 VAR_6 = FUNC_1(VAR_5);
 VAR_8 = FUNC_1(VAR_6->rl_miibus);
 VAR_7 = VAR_6->rl_ifp;
 if (VAR_8 == ((void*)0) || VAR_7 == ((void*)0) ||
     (VAR_7->if_drv_flags & VAR_0) == 0)
  return;

 VAR_6->rl_flags &= ~VAR_4;
 if ((VAR_8->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_0(VAR_8->mii_media_active)) {
  case 128:
  case 129:
   VAR_6->rl_flags |= VAR_4;
   break;
  case 130:
   if ((VAR_6->rl_flags & VAR_3) != 0)
    break;
   VAR_6->rl_flags |= VAR_4;
   break;
  default:
   break;
  }
 }




}
