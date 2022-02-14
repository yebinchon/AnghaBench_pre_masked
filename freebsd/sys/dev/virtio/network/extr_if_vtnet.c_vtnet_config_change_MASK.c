
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {scalar_t__ vtnet_link_active; } ;
typedef int device_t ;


 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 struct vtnet_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct vtnet_softc*) ;
 int FUNC_4 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct vtnet_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 FUNC_4(VAR_1);
 if (VAR_1->vtnet_link_active != 0)
  FUNC_3(VAR_1);
 FUNC_1(VAR_1);

 return (0);
}
