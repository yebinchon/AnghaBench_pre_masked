
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static inline u32 FUNC_1(const void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 const u8 *VAR_8 = VAR_1;

 VAR_7 = VAR_2;
 VAR_4 = VAR_5 = VAR_0;
 VAR_6 = VAR_3;

 while (VAR_7 >= 12) {
  VAR_4 += (VAR_8[0] +((u32)VAR_8[1]<<8) +((u32)VAR_8[2]<<16) +((u32)VAR_8[3]<<24));
  VAR_5 += (VAR_8[4] +((u32)VAR_8[5]<<8) +((u32)VAR_8[6]<<16) +((u32)VAR_8[7]<<24));
  VAR_6 += (VAR_8[8] +((u32)VAR_8[9]<<8) +((u32)VAR_8[10]<<16)+((u32)VAR_8[11]<<24));

  FUNC_0(VAR_4,VAR_5,VAR_6);

  VAR_8 += 12;
  VAR_7 -= 12;
 }

 VAR_6 += VAR_2;
 switch (VAR_7) {
 case 11: VAR_6 += ((u32)VAR_8[10]<<24);
 case 10: VAR_6 += ((u32)VAR_8[9]<<16);
 case 9 : VAR_6 += ((u32)VAR_8[8]<<8);
 case 8 : VAR_5 += ((u32)VAR_8[7]<<24);
 case 7 : VAR_5 += ((u32)VAR_8[6]<<16);
 case 6 : VAR_5 += ((u32)VAR_8[5]<<8);
 case 5 : VAR_5 += VAR_8[4];
 case 4 : VAR_4 += ((u32)VAR_8[3]<<24);
 case 3 : VAR_4 += ((u32)VAR_8[2]<<16);
 case 2 : VAR_4 += ((u32)VAR_8[1]<<8);
 case 1 : VAR_4 += VAR_8[0];
 };

 FUNC_0(VAR_4,VAR_5,VAR_6);

 return VAR_6;
}
