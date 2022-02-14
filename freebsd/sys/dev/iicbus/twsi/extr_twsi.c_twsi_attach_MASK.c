
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twsi_softc {int * iicbus; int res; int mutex; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 struct twsi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

int
FUNC_9(device_t VAR_4)
{
 struct twsi_softc *VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 VAR_5->dev = VAR_4;

 FUNC_7(&VAR_5->mutex, FUNC_4(VAR_4), "twsi", VAR_1);

 if (FUNC_0(VAR_4, VAR_2, VAR_5->res)) {
  FUNC_6(VAR_4, "could not allocate resources\n");
  FUNC_8(VAR_4);
  return (VAR_0);
 }


 if ((VAR_5->iicbus = FUNC_3(VAR_4, "iicbus", -1)) == ((void*)0)) {
  FUNC_6(VAR_4, "could not allocate iicbus instance\n");
  FUNC_8(VAR_4);
  return (VAR_0);
 }
 FUNC_1(VAR_4);

 FUNC_2(VAR_3, VAR_4);

 return (0);
}
