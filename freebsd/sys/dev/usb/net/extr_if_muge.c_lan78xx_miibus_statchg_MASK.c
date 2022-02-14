
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int ue_udev; } ;
struct muge_softc {int sc_flags; TYPE_1__ sc_ue; int sc_mtx; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (struct muge_softc*) ;
 int FUNC_3 (struct muge_softc*) ;


 struct muge_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct muge_softc*,int ,int*) ;
 scalar_t__ FUNC_6 (struct muge_softc*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct muge_softc*,char*) ;
 int FUNC_9 (struct muge_softc*,char*,int) ;
 struct ifnet* FUNC_10 (TYPE_1__*) ;
 struct mii_data* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(device_t VAR_11)
{
 struct muge_softc *VAR_12 = FUNC_4(VAR_11);
 struct mii_data *VAR_13 = FUNC_11(&VAR_12->sc_ue);
 struct ifnet *VAR_14;
 int VAR_15;
 int VAR_16;
 uint32_t VAR_17 = 0;
 uint32_t VAR_18 = 0;

 VAR_15 = FUNC_7(&VAR_12->sc_mtx);
 if (!VAR_15)
  FUNC_2(VAR_12);

 VAR_14 = FUNC_10(&VAR_12->sc_ue);
 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0) ||
     (VAR_14->if_drv_flags & VAR_4) == 0)
  goto done;


 VAR_12->sc_flags &= ~VAR_10;
 if ((VAR_13->mii_media_status & (VAR_5 | VAR_6)) ==
     (VAR_5 | VAR_6)) {
  FUNC_8(VAR_12, "media is active\n");
  switch (FUNC_1(VAR_13->mii_media_active)) {
  case 130:
  case 131:
   VAR_12->sc_flags |= VAR_10;
   FUNC_8(VAR_12, "10/100 ethernet\n");
   break;
  case 132:
   VAR_12->sc_flags |= VAR_10;
   FUNC_8(VAR_12, "Gigabit ethernet\n");
   break;
  default:
   break;
  }
 }

 if ((VAR_12->sc_flags & VAR_10) == 0) {
  FUNC_8(VAR_12, "link flag not set\n");
  goto done;
 }

 VAR_16 = FUNC_5(VAR_12, VAR_0, &VAR_18);
 if (VAR_16) {
  FUNC_9(VAR_12,
     "failed to read initial flow control thresholds, error %d\n",
      VAR_16);
  goto done;
 }


 if ((FUNC_0(VAR_13->mii_media_active) & VAR_9) != 0) {
  FUNC_8(VAR_12, "full duplex operation\n");


  if ((FUNC_0(VAR_13->mii_media_active) & VAR_8) != 0)
   VAR_17 |= VAR_3 | 0xFFFF;

  if ((FUNC_0(VAR_13->mii_media_active) & VAR_7) != 0)
   VAR_17 |= VAR_2;
 }


 switch(FUNC_12(VAR_12->sc_ue.ue_udev)) {
 case 128:
  VAR_18 = 0x817;
  break;
 case 129:
  VAR_18 = 0x211;
  break;
 default:
  break;
 }

 VAR_16 += FUNC_6(VAR_12, VAR_1, VAR_17);
 VAR_16 += FUNC_6(VAR_12, VAR_0, VAR_18);
 if (VAR_16)
  FUNC_9(VAR_12, "media change failed, error %d\n", VAR_16);

done:
 if (!VAR_15)
  FUNC_3(VAR_12);
}
