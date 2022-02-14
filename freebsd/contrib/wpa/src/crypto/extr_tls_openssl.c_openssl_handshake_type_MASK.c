
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 char const* FUNC_0 (int const) ;

__attribute__((used)) static const char * FUNC_1(int VAR_0, const u8 *VAR_1,
        size_t VAR_2)
{
 if (VAR_0 == 257 && VAR_1 && VAR_2 == 1)
  return FUNC_0(VAR_1[0]);
 if (VAR_0 != 22 || !VAR_1 || VAR_2 == 0)
  return "";
 switch (VAR_1[0]) {
 case 0:
  return "hello request";
 case 1:
  return "client hello";
 case 2:
  return "server hello";
 case 3:
  return "hello verify request";
 case 4:
  return "new session ticket";
 case 5:
  return "end of early data";
 case 6:
  return "hello retry request";
 case 8:
  return "encrypted extensions";
 case 11:
  return "certificate";
 case 12:
  return "server key exchange";
 case 13:
  return "certificate request";
 case 14:
  return "server hello done";
 case 15:
  return "certificate verify";
 case 16:
  return "client key exchange";
 case 20:
  return "finished";
 case 21:
  return "certificate url";
 case 22:
  return "certificate status";
 case 23:
  return "supplemental data";
 case 24:
  return "key update";
 case 254:
  return "message hash";
 default:
  return "?";
 }
}
