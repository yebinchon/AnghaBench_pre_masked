
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_uhub_softc {int * ah; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int **) ;
 struct acpi_uhub_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 int VAR_2;
 struct acpi_uhub_softc *VAR_3 = FUNC_4(VAR_1);

 if (FUNC_0(FUNC_3(VAR_1, &VAR_3->ah)) ||
     (VAR_3->ah == ((void*)0))) {
  return (VAR_0);
 }
 if ((VAR_2 = FUNC_5(VAR_1)) != 0) {
  return (VAR_2);
 }

 if ((VAR_2 = FUNC_1(VAR_1)) != 0) {
  FUNC_2(VAR_1);
 }
 return VAR_2;
}
