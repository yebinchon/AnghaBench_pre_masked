
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (struct mii_softc*,int ) ;
 int VAR_14 ;
 int VAR_15 ;



 int VAR_16 ;
 int FUNC_1 (struct mii_softc*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_17)
{
 struct mii_data *VAR_18 = VAR_17->mii_pdata;
 int VAR_19, VAR_20, VAR_21;

 VAR_18->mii_media_status = VAR_7;
 VAR_18->mii_media_active = VAR_8;

 VAR_21 = FUNC_0(VAR_17, VAR_14);
 VAR_20 = FUNC_0(VAR_17, VAR_12);

 VAR_19 = FUNC_0(VAR_17, VAR_13) | FUNC_0(VAR_17, VAR_13);
 if (VAR_19 & VAR_2)
  VAR_18->mii_media_status |= VAR_6;

 if (VAR_20 & VAR_0) {
  if ((VAR_19 & VAR_1) == 0) {
   VAR_18->mii_media_active |= VAR_11;
   return;
  }
 }

 switch (VAR_21 & VAR_16) {
 case 130:
  VAR_18->mii_media_active |= VAR_3;
  break;
 case 129:
  VAR_18->mii_media_active |= VAR_4;
  break;
 case 128:
  VAR_18->mii_media_active |= VAR_5;
  break;
 default:

  FUNC_2("invalid media SR %#x\n", VAR_21);
  VAR_18->mii_media_active |= VAR_11;
  return;
 }

 if (VAR_21 & VAR_15)
  VAR_18->mii_media_active |= VAR_9 | FUNC_1(VAR_17);
 else
  VAR_18->mii_media_active |= VAR_10;
}
