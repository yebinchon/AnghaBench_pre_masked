
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bhnd_softc*) ;
 struct bhnd_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_1)
{
 struct bhnd_softc *VAR_2;
 int VAR_3;

 if (FUNC_3(VAR_1))
  return (VAR_0);

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->dev = VAR_1;


 if ((VAR_3 = FUNC_0(VAR_1))) {
  FUNC_1(VAR_2);
  return (VAR_3);
 }

 return (0);
}
