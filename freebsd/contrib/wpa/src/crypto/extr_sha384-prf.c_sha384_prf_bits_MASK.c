
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
typedef int length_le ;
typedef int hash ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (int const*,size_t,int,int const**,size_t*,int*) ;
 int FUNC_3 (int*,int*,size_t) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5(const u8 *VAR_1, size_t VAR_2, const char *VAR_3,
      const u8 *VAR_4, size_t VAR_5, u8 *VAR_6,
      size_t VAR_7)
{
 u16 VAR_8 = 1;
 size_t VAR_9, VAR_10;
 u8 VAR_11[VAR_0];
 const u8 *VAR_12[4];
 size_t VAR_13[4];
 u8 VAR_14[2], VAR_15[2];
 size_t VAR_16 = (VAR_7 + 7) / 8;

 VAR_12[0] = VAR_14;
 VAR_13[0] = 2;
 VAR_12[1] = (u8 *) VAR_3;
 VAR_13[1] = FUNC_4(VAR_3);
 VAR_12[2] = VAR_4;
 VAR_13[2] = VAR_5;
 VAR_12[3] = VAR_15;
 VAR_13[3] = sizeof(VAR_15);

 FUNC_0(VAR_15, VAR_7);
 VAR_9 = 0;
 while (VAR_9 < VAR_16) {
  VAR_10 = VAR_16 - VAR_9;
  FUNC_0(VAR_14, VAR_8);
  if (VAR_10 >= VAR_0) {
   if (FUNC_2(VAR_1, VAR_2, 4, VAR_12, VAR_13,
            &VAR_6[VAR_9]) < 0)
    return -1;
   VAR_9 += VAR_0;
  } else {
   if (FUNC_2(VAR_1, VAR_2, 4, VAR_12, VAR_13,
            VAR_11) < 0)
    return -1;
   FUNC_3(&VAR_6[VAR_9], VAR_11, VAR_10);
   VAR_9 += VAR_10;
   break;
  }
  VAR_8++;
 }





 if (VAR_7 % 8) {
  u8 VAR_17 = 0xff << (8 - VAR_7 % 8);
  VAR_6[VAR_9 - 1] &= VAR_17;
 }

 FUNC_1(VAR_11, sizeof(VAR_11));

 return 0;
}
