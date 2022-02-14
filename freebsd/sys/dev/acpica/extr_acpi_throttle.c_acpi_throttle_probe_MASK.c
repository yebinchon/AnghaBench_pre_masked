
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{

 if (FUNC_3("acpi_throttle", 0))
  return (VAR_0);







 if (FUNC_0(FUNC_1(VAR_1), "p4tcc", -1) &&
     !FUNC_3("p4tcc", 0))
  return (VAR_0);

 FUNC_2(VAR_1, "ACPI CPU Throttling");
 return (0);
}
