
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsmnerr_t ;







const char *FUNC_0(jsmnerr_t VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "No enough tokens";
 case 131:
  return "Invalid character inside JSON string";
 case 129:
  return "The string is not a full JSON packet, more bytes expected";
 case 128:
  return "Success";
 default:
  return "Unknown json error";
 }
}
