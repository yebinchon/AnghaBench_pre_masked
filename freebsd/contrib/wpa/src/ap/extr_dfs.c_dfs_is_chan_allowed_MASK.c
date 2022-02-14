
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_channel_data {int chan; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct hostapd_channel_data *VAR_1, int VAR_2)
{




 int VAR_3[] = { 36, 44, 52, 60, 100, 108, 116, 124, 132, 149, 157,
        184, 192 };




 int VAR_4[] = { 36, 52, 100, 116, 132, 149 };




 int VAR_5[] = { 36, 100 };
 int *VAR_6 = VAR_3;
 unsigned int VAR_7, VAR_8 = 0;

 switch (VAR_2) {
 case 2:
  VAR_6 = VAR_3;
  VAR_8 = FUNC_0(VAR_3);
  break;
 case 4:
  VAR_6 = VAR_4;
  VAR_8 = FUNC_0(VAR_4);
  break;
 case 8:
  VAR_6 = VAR_5;
  VAR_8 = FUNC_0(VAR_5);
  break;
 default:
  FUNC_1(VAR_0, "Unknown width for %d channels", VAR_2);
  break;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_1->chan == VAR_6[VAR_7])
   return 1;
 }

 return 0;
}
