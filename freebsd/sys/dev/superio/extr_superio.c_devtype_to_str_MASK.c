
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int superio_dev_type_t ;
__attribute__((used)) static const char *
FUNC_0(superio_dev_type_t VAR_0)
{
 switch (VAR_0) {
 case 129:
  return ("none");
 case 131:
  return ("HWM");
 case 128:
  return ("WDT");
 case 132:
  return ("GPIO");
 case 130:
  return ("invalid");
 }
 return ("invalid");
}
