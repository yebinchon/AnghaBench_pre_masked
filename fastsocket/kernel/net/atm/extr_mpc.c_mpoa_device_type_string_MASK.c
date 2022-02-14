
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(char VAR_0)
{
 switch(VAR_0) {
 case 128:
  return "non-MPOA device";
  break;
 case 130:
  return "MPS";
  break;
 case 131:
  return "MPC";
  break;
 case 129:
  return "both MPS and MPC";
  break;
 default:
  return "unspecified (non-MPOA) device";
  break;
 }

 return "";
}
