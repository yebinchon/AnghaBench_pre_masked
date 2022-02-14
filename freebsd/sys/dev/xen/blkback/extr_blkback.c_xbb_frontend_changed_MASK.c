
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_softc {int dev; int lock; } ;
typedef int device_t ;
typedef int XenbusState ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;





 struct xbb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xbb_softc*) ;
 int FUNC_5 (struct xbb_softc*) ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int const) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(device_t VAR_1, XenbusState VAR_2)
{
 struct xbb_softc *VAR_3 = FUNC_1(VAR_1);

 FUNC_0("frontend_state=%s, xbb_state=%s\n",
         FUNC_9(VAR_2),
  FUNC_9(FUNC_7(VAR_3->dev)));

 switch (VAR_2) {
 case 128:
  break;
 case 129:
 case 130:
  FUNC_4(VAR_3);
  break;
 case 131:
 case 132:
  FUNC_2(&VAR_3->lock);
  FUNC_5(VAR_3);
  FUNC_3(&VAR_3->lock);
  if (VAR_2 == 132)
   FUNC_8(VAR_3->dev, 132);
  break;
 default:
  FUNC_6(VAR_3->dev, VAR_0, "saw state %d at frontend",
     VAR_2);
  break;
 }
}
