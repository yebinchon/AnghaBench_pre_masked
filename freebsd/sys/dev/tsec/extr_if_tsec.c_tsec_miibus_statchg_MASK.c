
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {int tsec_link; struct mii_data* tsec_mii; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
typedef int device_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct tsec_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct tsec_softc*,int ,int) ;
 struct tsec_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;

void
FUNC_5(device_t VAR_11)
{
 struct tsec_softc *VAR_12;
 struct mii_data *VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_12 = FUNC_3(VAR_11);
 VAR_13 = VAR_12->tsec_mii;
 VAR_17 = ((VAR_13->mii_media_status & VAR_0) ? 1 : 0);

 VAR_16 = FUNC_1(VAR_12, VAR_10) & ~VAR_6;

 if ((VAR_13->mii_media_active & VAR_2) == VAR_1)
  VAR_16 |= VAR_4;
 else
  VAR_16 &= ~VAR_4;

 switch (FUNC_0(VAR_13->mii_media_active)) {
 case 131:
 case 132:
  VAR_16 |= VAR_5;
  VAR_12->tsec_link = VAR_17;
  break;
 case 130:
 case 129:
  VAR_16 |= VAR_7;
  VAR_12->tsec_link = VAR_17;
  break;
 case 128:
  if (VAR_17)
   FUNC_4(VAR_11, "No speed selected but link "
       "active!\n");
  VAR_12->tsec_link = 0;
  return;
 default:
  VAR_12->tsec_link = 0;
  FUNC_4(VAR_11, "Unknown speed (%d), link %s!\n",
      FUNC_0(VAR_13->mii_media_active),
          ((VAR_17) ? "up" : "down"));
  return;
 }
 FUNC_2(VAR_12, VAR_10, VAR_16);


 VAR_15 = FUNC_1(VAR_12, VAR_9);
 if (VAR_15 & 0xffff) {
  VAR_14 = FUNC_1(VAR_12, VAR_8) & ~VAR_3;
  VAR_14 |= (VAR_16 & VAR_7) ? VAR_3 : 0;
  FUNC_2(VAR_12, VAR_8, VAR_14);
 }
}
