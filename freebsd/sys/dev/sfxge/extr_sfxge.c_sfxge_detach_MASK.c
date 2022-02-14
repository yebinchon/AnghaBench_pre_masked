
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int ifnet; } ;
typedef int device_t ;


 struct sfxge_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct sfxge_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sfxge_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct sfxge_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1);


 FUNC_2(VAR_1->ifnet);


 FUNC_1(VAR_1);

 return (0);
}
