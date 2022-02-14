
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct hme_softc {int sc_flags; int sc_dev; TYPE_2__* sc_ifp; TYPE_1__* sc_mii; } ;
typedef int device_t ;
struct TYPE_4__ {int if_flags; int if_drv_flags; } ;
struct TYPE_3__ {int mii_media_status; int mii_media_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hme_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hme_softc*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct hme_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct hme_softc*,int ,int ,int ,int ) ;

void
FUNC_7(device_t VAR_11)
{
 struct hme_softc *VAR_12;
 uint32_t VAR_13, VAR_14;

 VAR_12 = FUNC_4(VAR_11);






 if ((VAR_12->sc_mii->mii_media_status & VAR_8) != 0 &&
     FUNC_3(VAR_12->sc_mii->mii_media_active) != VAR_10)
  VAR_12->sc_flags |= VAR_0;
 else
  VAR_12->sc_flags &= ~VAR_0;

 VAR_14 = FUNC_0(VAR_12, VAR_2);
 if (!FUNC_6(VAR_12, VAR_2, VAR_14,
     VAR_4, 0))
  FUNC_5(VAR_12->sc_dev, "cannot disable TX MAC\n");
 VAR_13 = FUNC_0(VAR_12, VAR_1);
 if (!FUNC_6(VAR_12, VAR_1, VAR_13,
     VAR_3, 0))
  FUNC_5(VAR_12->sc_dev, "cannot disable RX MAC\n");


 if ((FUNC_2(VAR_12->sc_mii->mii_media_active) & VAR_9) != 0)
  VAR_14 |= VAR_5;
 else
  VAR_14 &= ~VAR_5;
 FUNC_1(VAR_12, VAR_2, VAR_14);

 if ((VAR_12->sc_ifp->if_drv_flags & VAR_7) != 0 &&
     (VAR_12->sc_flags & VAR_0) != 0) {
  if (!FUNC_6(VAR_12, VAR_2, VAR_14, 0,
      VAR_4))
   FUNC_5(VAR_12->sc_dev, "cannot enable TX MAC\n");
  if (!FUNC_6(VAR_12, VAR_1, VAR_13, 0,
      VAR_3))
   FUNC_5(VAR_12->sc_dev, "cannot enable RX MAC\n");
 }
}
