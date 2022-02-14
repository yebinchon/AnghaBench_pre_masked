
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_memattr_t ;
__attribute__((used)) static inline const char *
FUNC_0(vm_memattr_t VAR_0)
{

 switch (VAR_0) {
 case 130:
  return ("WRITE_COMBINING");
 case 128:
  return ("WRITE_THROUGH");
 case 129:
  return ("WRITE_PROTECTED");
 case 131:
  return ("WRITE_BACK");
 case 132:
  return ("UNCACHED");
 case 133:
  return ("UNCACHEABLE");
 default:
  return ("UNKNOWN");
 }
}
