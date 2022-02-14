
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 device_t VAR_3, VAR_4;
 int VAR_5, VAR_6;






 VAR_4 = FUNC_1(FUNC_2(VAR_2), "acpi_perf", -1);
 if (VAR_4 && FUNC_3(VAR_4)) {
  VAR_5 = FUNC_0(VAR_4, &VAR_6);
  if (VAR_5 == 0 && (VAR_6 & VAR_0) == 0)
   return (VAR_1);
 }
 VAR_3 = FUNC_1(FUNC_2(VAR_2), "est", -1);
 if (VAR_3 && FUNC_3(VAR_3))
  return (VAR_1);

 FUNC_4(VAR_2, "SpeedStep ICH");
 return (-1000);
}
