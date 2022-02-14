
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxprtc_softc {int chiptype; int is212x; int dev; scalar_t__ use_timer; int config_hook; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 struct nxprtc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct nxprtc_softc*) ;
 int FUNC_6 (struct nxprtc_softc*) ;
 int FUNC_7 (struct nxprtc_softc*) ;
 int FUNC_8 (struct nxprtc_softc*) ;
 int FUNC_9 (struct nxprtc_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_3)
{
 struct nxprtc_softc *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_3((device_t)VAR_3);
 FUNC_2(&VAR_4->config_hook);


 switch (VAR_4->chiptype) {
 case 133:
 case 130:
 case 131:
  VAR_4->is212x = 1;
  if (FUNC_6(VAR_4) != 0)
   return;
  if (FUNC_5(VAR_4) != 0) {
   FUNC_4(VAR_4->dev, "cannot set up timer\n");
   return;
  }
  break;
 case 129:
  if (FUNC_6(VAR_4) != 0)
   return;
  if (FUNC_7(VAR_4) != 0) {
   FUNC_4(VAR_4->dev, "cannot set up timer\n");
   return;
  }
  break;
 case 132:
 case 128:
  if (FUNC_8(VAR_4) != 0)
   return;
  if (FUNC_9(VAR_4) != 0) {
   FUNC_4(VAR_4->dev, "cannot set up timer\n");
   return;
  }
  break;
 default:
  FUNC_4(VAR_4->dev, "missing init code for this chiptype\n");
  return;
 }
 VAR_6 = VAR_4->use_timer ? 1000000 / VAR_2 : 1000000 / 2;
 VAR_5 = VAR_0 | VAR_1;
 FUNC_0(VAR_4->dev, VAR_6, VAR_5);
 FUNC_1(VAR_4->dev, 495000000);
}
