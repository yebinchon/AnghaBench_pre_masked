
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siba_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct siba_softc*) ;
 int FUNC_1 (struct siba_softc*) ;
 int FUNC_2 (int ) ;
 struct siba_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_0)
{
 struct siba_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_1->dev = VAR_0;

 FUNC_1(VAR_1);


 if ((VAR_2 = FUNC_4(VAR_0))) {
  FUNC_2(VAR_0);
  FUNC_0(VAR_1);
  return (VAR_2);
 }

 return (0);
}
