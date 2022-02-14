
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ exists; } ;
struct acpi_fujitsu_softc {int dev; int handle; TYPE_1__ gmou; } ;
typedef int device_t ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct acpi_fujitsu_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct acpi_fujitsu_softc *VAR_2;
 ACPI_STATUS VAR_3;

 VAR_2 = FUNC_4(VAR_1);





 FUNC_1(VAR_0);

 if(VAR_2->gmou.exists) {
  VAR_3 = FUNC_3(VAR_2->handle, "SMOU", 1);
  if (FUNC_0(VAR_3))
   FUNC_5(VAR_2->dev, "Couldn't enable pointer\n");
 }
 FUNC_2(VAR_0);

 return (0);
}
