
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(int VAR_0)
{

 switch (VAR_0) {
 case 131:
  return ("Cannot allocate memory");
 case 128:
  return ("Version mismatch");
 case 130:
  return ("Permission denied");
 case 135:
  return ("Data format error");
 case 134:
  return ("KVM error");
 case 133:
  return ("KVM unable to find symbol");
 case 132:
  return ("KVM short read");
 case 129:
 default:
  return ("Unknown error");
 }
}
