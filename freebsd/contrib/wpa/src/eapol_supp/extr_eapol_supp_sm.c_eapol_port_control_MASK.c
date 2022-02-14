
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PortControl ;






__attribute__((used)) static const char * FUNC_0(PortControl VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "Auto";
 case 128:
  return "ForceUnauthorized";
 case 129:
  return "ForceAuthorized";
 default:
  return "Unknown";
 }
}
