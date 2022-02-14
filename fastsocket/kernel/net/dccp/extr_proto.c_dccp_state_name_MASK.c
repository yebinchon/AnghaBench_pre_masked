
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
const char *FUNC_0(const int VAR_1)
{
 static const char *const VAR_2[] = {
 [134] = "OPEN",
 [130] = "REQUESTING",
 [133] = "PARTOPEN",
 [135] = "LISTEN",
 [129] = "RESPOND",
 [136] = "CLOSING",
 [138] = "CLOSEREQ",
 [132] = "PASSIVE_CLOSE",
 [131] = "PASSIVE_CLOSEREQ",
 [128] = "TIME_WAIT",
 [137] = "CLOSED",
 };

 if (VAR_1 >= VAR_0)
  return "INVALID STATE!";
 else
  return VAR_2[VAR_1];
}
