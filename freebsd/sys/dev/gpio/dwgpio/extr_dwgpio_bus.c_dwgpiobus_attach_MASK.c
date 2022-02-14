
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwgpiobus_softc {int res; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct dwgpiobus_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ,int *,int,int *) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct dwgpiobus_softc *VAR_3;
 phandle_t VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 VAR_3->dev = VAR_2;

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4 == -1)
  return (VAR_0);

 if (FUNC_2(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_6(VAR_2, "Could not allocate resources.\n");
  return (VAR_0);
 }

 FUNC_9(VAR_2, VAR_4);




 FUNC_4(VAR_2);




 for (VAR_4 = FUNC_0(VAR_4); VAR_4 > 0; VAR_4 = FUNC_1(VAR_4))
  FUNC_8(VAR_2, VAR_4, 0, ((void*)0), -1, ((void*)0));

 return (FUNC_3(VAR_2));
}
