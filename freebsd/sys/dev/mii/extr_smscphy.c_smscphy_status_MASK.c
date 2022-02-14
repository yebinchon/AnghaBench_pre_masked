
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {struct mii_data* mii_pdata; } ;
struct mii_data {int mii_media_active; int mii_media_status; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct mii_softc*,int) ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_16)
{
 struct mii_data *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20;

 VAR_17 = VAR_16->mii_pdata;
 VAR_17->mii_media_status = VAR_8;
 VAR_17->mii_media_active = VAR_9;

 VAR_19 = FUNC_0(VAR_16, VAR_15) | FUNC_0(VAR_16, VAR_15);
 if ((VAR_19 & VAR_4) != 0)
  VAR_17->mii_media_status |= VAR_7;

 VAR_18 = FUNC_0(VAR_16, VAR_14);
 if ((VAR_18 & VAR_1) != 0) {
  VAR_17->mii_media_active |= VAR_13;
  VAR_17->mii_media_status = 0;
  return;
 }

 if ((VAR_18 & VAR_2) != 0)
  VAR_17->mii_media_active |= VAR_12;

 if ((VAR_18 & VAR_0) != 0) {
  if ((VAR_19 & VAR_3) == 0) {

   VAR_17->mii_media_active |= VAR_13;
   return;
  }
 }

 VAR_20 = FUNC_0(VAR_16, 0x1F);
 if (VAR_20 & 0x0008)
  VAR_17->mii_media_active |= VAR_5;
 else
  VAR_17->mii_media_active |= VAR_6;
 if (VAR_20 & 0x0010)
  VAR_17->mii_media_active |= VAR_10 | FUNC_1(VAR_16);
 else
  VAR_17->mii_media_active |= VAR_11;
}
