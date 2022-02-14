
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "hardware";

 case 129:
  return "software";

 case 128:
  return "tracepoint";

 case 130:
  return "hardware-cache";

 default:
  break;
 }

 return "unknown";
}
