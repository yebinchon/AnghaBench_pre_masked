
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct dwc_softc {int link_is_up; struct mii_data* mii_softc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dwc_softc*) ;




 int VAR_3 ;
 int VAR_4 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct dwc_softc*,int ) ;
 int FUNC_4 (struct dwc_softc*,int ,int) ;
 struct dwc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_6)
{
 struct dwc_softc *VAR_7;
 struct mii_data *VAR_8;
 uint32_t VAR_9;






 VAR_7 = FUNC_5(VAR_6);

 FUNC_0(VAR_7);

 VAR_8 = VAR_7->mii_softc;

 if (VAR_8->mii_media_status & VAR_3)
  VAR_7->link_is_up = 1;
 else
  VAR_7->link_is_up = 0;

 VAR_9 = FUNC_3(VAR_7, VAR_5);
 switch (FUNC_2(VAR_8->mii_media_active)) {
 case 131:
 case 132:
  VAR_9 &= ~(VAR_1 | VAR_2);
  break;
 case 130:
  VAR_9 |= (VAR_1 | VAR_2);
  break;
 case 129:
  VAR_9 &= ~(VAR_1);
  VAR_9 |= (VAR_2);
  break;
 case 128:
  VAR_7->link_is_up = 0;
  return;
 default:
  VAR_7->link_is_up = 0;
  FUNC_6(VAR_6, "Unsupported media %u\n",
      FUNC_2(VAR_8->mii_media_active));
  return;
 }
 if ((FUNC_1(VAR_8->mii_media_active) & VAR_4) != 0)
  VAR_9 |= (VAR_0);
 else
  VAR_9 &= ~(VAR_0);
 FUNC_4(VAR_7, VAR_5, VAR_9);
}
