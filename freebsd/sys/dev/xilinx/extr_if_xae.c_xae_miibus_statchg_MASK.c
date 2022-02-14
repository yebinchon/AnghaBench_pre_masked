
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xae_softc {int link_is_up; struct mii_data* mii_softc; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
typedef int device_t ;






 int VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xae_softc*,int ,int ) ;
 int FUNC_2 (struct xae_softc*) ;
 int VAR_4 ;
 struct xae_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_5)
{
 struct xae_softc *VAR_6;
 struct mii_data *VAR_7;
 uint32_t VAR_8;






 VAR_6 = FUNC_3(VAR_5);

 FUNC_2(VAR_6);

 VAR_7 = VAR_6->mii_softc;

 if (VAR_7->mii_media_status & VAR_0)
  VAR_6->link_is_up = 1;
 else
  VAR_6->link_is_up = 0;

 switch (FUNC_0(VAR_7->mii_media_active)) {
 case 131:
 case 132:
  VAR_8 = VAR_3;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_6->link_is_up = 0;
  return;
 default:
  VAR_6->link_is_up = 0;
  FUNC_4(VAR_5, "Unsupported media %u\n",
      FUNC_0(VAR_7->mii_media_active));
  return;
 }

 FUNC_1(VAR_6, VAR_4, VAR_8);
}
