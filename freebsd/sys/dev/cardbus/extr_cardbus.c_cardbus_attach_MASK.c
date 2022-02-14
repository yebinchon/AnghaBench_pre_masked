
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardbus_softc {int * sc_bus; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int*,int ,int ,int,int ) ;
 struct cardbus_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct cardbus_softc *VAR_3;




 VAR_3 = FUNC_1(VAR_2);
 VAR_3->sc_dev = VAR_2;
 FUNC_2(VAR_2, "Your bus numbers may be AFU\n");

 return (0);
}
