
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_dock_softc {scalar_t__ _sta; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct acpi_dock_softc* FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(device_t VAR_2)
{
 struct acpi_dock_softc *VAR_3;

 FUNC_1(VAR_1);

 VAR_3 = FUNC_5(VAR_2);
 FUNC_2(VAR_2);






 if (VAR_3->_sta == VAR_0 ||
     FUNC_0(VAR_3->_sta))
  FUNC_3(VAR_2);
 else if (VAR_3->_sta == 0)
  FUNC_4(VAR_2);
}
