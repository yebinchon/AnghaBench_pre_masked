
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int an_gone; } ;
typedef int device_t ;


 int FUNC_0 (struct an_softc*) ;
 int FUNC_1 (struct an_softc*) ;
 int FUNC_2 (struct an_softc*) ;
 struct an_softc* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_0)
{
 struct an_softc *VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 VAR_1->an_gone = 1;
 FUNC_1(VAR_1);

 return (0);
}
