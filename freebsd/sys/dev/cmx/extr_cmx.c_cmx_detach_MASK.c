
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmx_softc {int dying; int cdev; int sel; int ch; scalar_t__ polling; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct cmx_softc*) ;
 int FUNC_1 (struct cmx_softc*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct cmx_softc* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct cmx_softc*) ;

int
FUNC_10(device_t VAR_1)
{
 struct cmx_softc *VAR_2 = FUNC_7(VAR_1);

 FUNC_2(VAR_1, "called\n");

 VAR_2->dying = 1;

 FUNC_0(VAR_2);
 if (VAR_2->polling) {
  FUNC_2(VAR_2->dev, "disabling polling\n");
  FUNC_4(&VAR_2->ch);
  VAR_2->polling = 0;
  FUNC_1(VAR_2);
  FUNC_3(&VAR_2->ch);
  FUNC_8(&VAR_2->sel, VAR_0);
 } else {
  FUNC_1(VAR_2);
 }

 FUNC_9(VAR_2);
 FUNC_6(VAR_2->cdev);

 FUNC_2(VAR_1, "releasing resources\n");
 FUNC_5(VAR_1);
 return 0;
}
