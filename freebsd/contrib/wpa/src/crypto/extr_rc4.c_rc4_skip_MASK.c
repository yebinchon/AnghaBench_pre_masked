
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int) ;

int FUNC_1(const u8 *VAR_0, size_t VAR_1, size_t VAR_2,
      u8 *VAR_3, size_t VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 u8 VAR_8[256], *VAR_9;
 size_t VAR_10;


 for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
  VAR_8[VAR_5] = VAR_5;
 VAR_6 = 0;
 VAR_10 = 0;
 for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
  VAR_6 = (VAR_6 + VAR_8[VAR_5] + VAR_0[VAR_10]) & 0xff;
  VAR_10++;
  if (VAR_10 >= VAR_1)
   VAR_10 = 0;
  FUNC_0(VAR_5, VAR_6);
 }


 VAR_5 = VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5 = (VAR_5 + 1) & 0xff;
  VAR_6 = (VAR_6 + VAR_8[VAR_5]) & 0xff;
  FUNC_0(VAR_5, VAR_6);
 }


 VAR_9 = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5 = (VAR_5 + 1) & 0xff;
  VAR_6 = (VAR_6 + VAR_8[VAR_5]) & 0xff;
  FUNC_0(VAR_5, VAR_6);
  *VAR_9++ ^= VAR_8[(VAR_8[VAR_5] + VAR_8[VAR_6]) & 0xff];
 }

 return 0;
}
