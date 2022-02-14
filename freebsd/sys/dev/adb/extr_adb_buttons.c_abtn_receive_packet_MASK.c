
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int device_t ;


 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static u_int
FUNC_2(device_t VAR_0, u_char VAR_1,
    u_char VAR_2, u_char VAR_3, int VAR_4, u_char *VAR_5)
{
 u_int VAR_6;

 VAR_6 = VAR_5[0];

 switch (VAR_6) {
 case 0x0a:
  FUNC_0("PMU", "keys", "brightness",
      "notify=down");
  break;

 case 0x09:
  FUNC_0("PMU", "keys", "brightness", "notify=up");
  break;

 case 0x08:
 case 0x01:
  FUNC_0("PMU", "keys", "mute", ((void*)0));
  break;
 case 0x07:
 case 0x02:
  FUNC_0("PMU", "keys", "volume", "notify=down");
  break;
 case 0x06:
 case 0x03:
  FUNC_0("PMU", "keys", "volume", "notify=up");
  break;
 case 0x0c:

  break;
 case 0x0b:
  FUNC_0("PMU", "keys", "eject", ((void*)0));
  break;
 case 0x7f:

  break;

 default:




  break;
 }
 return 0;
}
