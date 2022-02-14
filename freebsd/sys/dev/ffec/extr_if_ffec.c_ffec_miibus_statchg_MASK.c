
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ffec_softc {int link_is_up; int phy_conn_type; struct mii_data* mii_softc; } ;
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
 int VAR_10 ;
 int FUNC_0 (struct ffec_softc*) ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;





 int FUNC_3 (struct ffec_softc*,int ) ;
 int FUNC_4 (struct ffec_softc*,int ,int) ;
 struct ffec_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_14)
{
 struct ffec_softc *VAR_15;
 struct mii_data *VAR_16;
 uint32_t VAR_17, VAR_18, VAR_19;






 VAR_15 = FUNC_5(VAR_14);

 FUNC_0(VAR_15);

 VAR_16 = VAR_15->mii_softc;

 if (VAR_16->mii_media_status & VAR_11)
  VAR_15->link_is_up = 1;
 else
  VAR_15->link_is_up = 0;

 VAR_17 = FUNC_3(VAR_15, VAR_0) & ~VAR_1;
 VAR_18 = FUNC_3(VAR_15, VAR_5) & ~(VAR_7 | VAR_8 |
     VAR_6 | VAR_2 | VAR_3);
 VAR_19 = FUNC_3(VAR_15, VAR_10) & ~VAR_9;

 VAR_18 |= VAR_4;
 switch (VAR_15->phy_conn_type) {
 case 128:
  VAR_18 |= VAR_8;
  break;
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_18 |= VAR_6;
  break;
 default:
  break;
 }

 switch (FUNC_2(VAR_16->mii_media_active)) {
 case 136:
 case 137:
  VAR_17 |= VAR_1;
  break;
 case 135:

  break;
 case 134:
  VAR_18 |= VAR_7;
  break;
 case 133:
  VAR_15->link_is_up = 0;
  return;
 default:
  VAR_15->link_is_up = 0;
  FUNC_6(VAR_14, "Unsupported media %u\n",
      FUNC_2(VAR_16->mii_media_active));
  return;
 }

 if ((FUNC_1(VAR_16->mii_media_active) & VAR_12) != 0)
  VAR_19 |= VAR_9;
 else
  VAR_18 |= VAR_2;

 if ((FUNC_1(VAR_16->mii_media_active) & VAR_13) != 0)
  VAR_18 |= VAR_3;

 FUNC_4(VAR_15, VAR_5, VAR_18);
 FUNC_4(VAR_15, VAR_10, VAR_19);
 FUNC_4(VAR_15, VAR_0, VAR_17);
}
