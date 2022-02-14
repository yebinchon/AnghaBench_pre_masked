
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_toshiba_softc {int video_handle; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct acpi_toshiba_softc* FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct acpi_toshiba_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0);
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_3->video_handle = FUNC_0(VAR_2);
 return (0);
}
