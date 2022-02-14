
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ure_softc {int sc_flags; int sc_ue; int sc_mtx; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 struct mii_data* FUNC_0 (struct ure_softc*) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ure_softc*) ;
 int FUNC_3 (struct ure_softc*) ;
 struct ure_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct ifnet* FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_5)
{
 struct ure_softc *VAR_6;
 struct mii_data *VAR_7;
 struct ifnet *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_0(VAR_6);
 VAR_9 = FUNC_5(&VAR_6->sc_mtx);
 if (!VAR_9)
  FUNC_2(VAR_6);

 VAR_8 = FUNC_6(&VAR_6->sc_ue);
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ||
     (VAR_8->if_drv_flags & VAR_0) == 0)
  goto done;

 VAR_6->sc_flags &= ~VAR_4;
 if ((VAR_7->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_1(VAR_7->mii_media_active)) {
  case 128:
  case 129:
   VAR_6->sc_flags |= VAR_4;
   break;
  case 130:
   if ((VAR_6->sc_flags & VAR_3) != 0)
    break;
   VAR_6->sc_flags |= VAR_4;
   break;
  default:
   break;
  }
 }


 if ((VAR_6->sc_flags & VAR_4) == 0)
  goto done;
done:
 if (!VAR_9)
  FUNC_3(VAR_6);
}
