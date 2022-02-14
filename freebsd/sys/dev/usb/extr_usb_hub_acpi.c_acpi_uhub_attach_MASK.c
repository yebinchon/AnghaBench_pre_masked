
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_uhub_softc {int * ah; } ;
typedef int device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct acpi_uhub_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 int VAR_2;
 struct acpi_uhub_softc *VAR_3 = FUNC_3(VAR_1);

 VAR_3->ah = FUNC_0(VAR_1);

 if (VAR_3->ah == ((void*)0)) {
  return (VAR_0);
 }
 if ((VAR_2 = FUNC_4(VAR_1)) != 0) {
  return (VAR_2);
 }

 if ((VAR_2 = FUNC_1(VAR_1)) != 0) {
  FUNC_2(VAR_1);
 }

 return (VAR_2);
}
