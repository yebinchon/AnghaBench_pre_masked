
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccm_softc {int dev; int * res; int bsh; int bst; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ccm_softc*,int ) ;
 int FUNC_2 (struct ccm_softc*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct ccm_softc*) ;
 int VAR_7 ;
 int FUNC_5 () ;
 struct ccm_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8)
{
 struct ccm_softc *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(VAR_8);
 VAR_9->dev = VAR_8;

 if (FUNC_3(VAR_8, VAR_7, VAR_9->res)) {
  FUNC_7(VAR_8, "could not allocate resources\n");
  return (VAR_3);
 }


 VAR_9->bst = FUNC_9(VAR_9->res[0]);
 VAR_9->bsh = FUNC_8(VAR_9->res[0]);


 VAR_10 = FUNC_1(VAR_9, VAR_1);
 VAR_10 |= (VAR_4 | VAR_5);
 FUNC_2(VAR_9, VAR_1, VAR_10);


 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  if (FUNC_1(VAR_9, VAR_2) & VAR_6) {
   FUNC_7(VAR_9->dev, "On board oscillator is ready.\n");
   break;
  }

  FUNC_5();
 }


 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_2(VAR_9, FUNC_0(VAR_11), 0xffffffff);
 }


 FUNC_4(VAR_9);

 return (0);
}
