
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
 int VAR_14 ;
 int VAR_15 ;






 int VAR_16 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_17)
{
 struct mii_data *VAR_18 = VAR_17->mii_pdata;
 int VAR_19, VAR_20, VAR_21;

 VAR_18->mii_media_status = VAR_7;
 VAR_18->mii_media_active = VAR_8;

 VAR_19 = FUNC_0(VAR_17, VAR_14) |
     FUNC_0(VAR_17, VAR_14);
 if (VAR_19 & VAR_2)
  VAR_18->mii_media_status |= VAR_6;

 VAR_20 = FUNC_0(VAR_17, VAR_13);
 if (VAR_20 & VAR_0) {
  VAR_18->mii_media_active |= VAR_12;
  VAR_18->mii_media_status = 0;
  return;
 }

 if (VAR_20 & VAR_1)
  VAR_18->mii_media_active |= VAR_11;

 VAR_21 = FUNC_0(VAR_17, VAR_15);
 switch (VAR_21 & VAR_16) {
 case 130:
  VAR_18->mii_media_active |= VAR_5|VAR_10;
  break;
 case 129:
  VAR_18->mii_media_active |= VAR_5|VAR_9;
  break;
 case 132:
  VAR_18->mii_media_active |= VAR_4|VAR_10;
  break;
 case 131:
  VAR_18->mii_media_active |= VAR_4|VAR_9;
  break;
 case 133:
  VAR_18->mii_media_active |= VAR_3|VAR_10;
  break;
 case 128:
  VAR_18->mii_media_active |= VAR_12;
  break;
 default:

  VAR_18->mii_media_active |= VAR_12;
  break;
 }
 if ((VAR_18->mii_media_active & VAR_9) != 0)
  VAR_18->mii_media_active |= FUNC_1(VAR_17);
}
