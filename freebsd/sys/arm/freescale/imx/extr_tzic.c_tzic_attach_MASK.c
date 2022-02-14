
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tzic_softc {int * tzicregs; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 struct tzic_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct tzic_softc*) ;
 struct tzic_softc* VAR_9 ;
 int FUNC_7 (struct tzic_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_10)
{
 struct tzic_softc *VAR_11 = FUNC_4(VAR_10);
 int VAR_12;

 if (VAR_9)
  return (VAR_0);
 VAR_9 = VAR_11;
 VAR_11->dev = VAR_10;

 VAR_12 = 0;
 VAR_11->tzicregs = FUNC_3(VAR_10, VAR_5, &VAR_12,
     VAR_4);
 if (VAR_11->tzicregs == ((void*)0)) {
  FUNC_5(VAR_10, "could not allocate resources\n");
  return (VAR_0);
 }


 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
  FUNC_7(VAR_11, FUNC_1(VAR_12), 0xffffffff);


 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
  FUNC_7(VAR_11, FUNC_0(VAR_12), 0xffffffff);


 for (VAR_12 = 0; VAR_12 < 128 / 4; ++VAR_12)
  FUNC_7(VAR_11, FUNC_2(VAR_12), 0);





 FUNC_7(VAR_11, VAR_7, 0xff);
 FUNC_7(VAR_11, VAR_8, 0);
 FUNC_7(VAR_11, VAR_6, VAR_3|VAR_2|VAR_1);


 if (FUNC_6(VAR_11) != 0) {
  FUNC_5(VAR_10, "could not attach PIC\n");
  return (VAR_0);
 }

 return (0);
}
