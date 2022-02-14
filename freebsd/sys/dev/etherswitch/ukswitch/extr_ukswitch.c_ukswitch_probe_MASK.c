
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ukswitch_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ukswitch_softc*,int) ;
 struct ukswitch_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct ukswitch_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2, sizeof(*VAR_2));

 FUNC_2(VAR_1, "Generic MDIO switch driver");
 return (VAR_0);
}
