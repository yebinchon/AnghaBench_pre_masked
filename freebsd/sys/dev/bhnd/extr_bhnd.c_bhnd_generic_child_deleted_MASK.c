
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_softc {int dummy; } ;
typedef int device_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bhnd_softc* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct bhnd_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_0);


 if (FUNC_0(VAR_1) != ((void*)0)) {



  FUNC_3("%s leaked device pmu state\n",
      FUNC_1(VAR_1));
 }
}
