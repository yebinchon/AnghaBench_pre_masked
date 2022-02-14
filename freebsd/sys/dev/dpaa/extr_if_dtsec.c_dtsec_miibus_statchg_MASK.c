
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dtsec_softc {int sc_dev; int sc_mach; TYPE_1__* sc_mii; } ;
typedef int e_EnetSpeed ;
typedef int device_t ;
struct TYPE_2__ {int mii_media_active; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 struct dtsec_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_5(device_t VAR_6)
{
 struct dtsec_softc *VAR_7;
 e_EnetSpeed VAR_8;
 bool VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(VAR_6);

 FUNC_0(VAR_7);

 VAR_9 = ((VAR_7->sc_mii->mii_media_active & VAR_2) == VAR_1);

 switch (FUNC_2(VAR_7->sc_mii->mii_media_active)) {
 case 130:
 case 131:
  VAR_8 = VAR_5;
  break;

        case 129:
  VAR_8 = VAR_4;
  break;

        case 128:
  VAR_8 = VAR_3;
  break;

 default:
  VAR_8 = VAR_3;
 }

 VAR_10 = FUNC_1(VAR_7->sc_mach, VAR_8, VAR_9);
 if (VAR_10 != VAR_0)
  FUNC_4(VAR_7->sc_dev, "error while adjusting MAC speed.\n");
}
