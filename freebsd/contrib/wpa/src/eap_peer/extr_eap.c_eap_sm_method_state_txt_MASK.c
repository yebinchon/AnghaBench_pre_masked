
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EapMethodState ;
__attribute__((used)) static const char * FUNC_0(EapMethodState VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "NONE";
 case 130:
  return "INIT";
 case 132:
  return "CONT";
 case 129:
  return "MAY_CONT";
 case 131:
  return "DONE";
 default:
  return "UNKNOWN";
 }
}
