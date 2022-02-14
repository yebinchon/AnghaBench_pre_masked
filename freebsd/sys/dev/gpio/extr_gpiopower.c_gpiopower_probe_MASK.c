
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{

 if (FUNC_1(VAR_1, "gpio-poweroff")) {
  FUNC_0(VAR_1, "GPIO poweroff control");
  return (0);
 } else if (FUNC_1(VAR_1, "gpio-restart")) {
  FUNC_0(VAR_1, "GPIO restart control");
  return (0);
 }

 return (VAR_0);
}
