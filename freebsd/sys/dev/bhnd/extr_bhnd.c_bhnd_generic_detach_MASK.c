
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_softc*) ;
 struct bhnd_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_1)
{
 struct bhnd_softc *VAR_2;
 int VAR_3;

 if (!FUNC_2(VAR_1))
  return (VAR_0);

 VAR_2 = FUNC_1(VAR_1);

 if ((VAR_3 = FUNC_0(VAR_2)))
  return (VAR_3);

 return (0);
}
