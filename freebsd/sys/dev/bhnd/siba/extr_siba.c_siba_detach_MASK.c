
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siba_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct siba_softc*) ;
 int FUNC_1 (int ) ;
 struct siba_softc* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0)
{
 struct siba_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);

 if ((VAR_2 = FUNC_1(VAR_0)))
  return (VAR_2);

 FUNC_0(VAR_1);

 return (0);
}
