
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3(int VAR_1, const u8 *VAR_2, size_t VAR_3,
   const char *VAR_4, const u8 *VAR_5, size_t VAR_6,
   u8 *VAR_7, size_t VAR_8)
{
 unsigned char VAR_9 = 0;
 size_t VAR_10, VAR_11;
 u8 VAR_12[VAR_0];
 size_t VAR_13 = FUNC_2(VAR_4);
 u8 VAR_14[2];
 const unsigned char *VAR_15[5];
 size_t VAR_16[5];

 VAR_15[0] = VAR_12;
 VAR_16[0] = 0;
 VAR_15[1] = (unsigned char *) VAR_4;
 VAR_16[1] = VAR_13;
 VAR_15[2] = VAR_5;
 VAR_16[2] = VAR_6;

 if (VAR_1 == 0) {
  VAR_14[0] = 0;
  VAR_14[1] = 0;

  VAR_15[3] = &VAR_9;
  VAR_16[3] = 1;
  VAR_15[4] = VAR_14;
  VAR_16[4] = 2;
 } else {
  VAR_14[0] = VAR_8 & 0xff;

  VAR_15[3] = VAR_14;
  VAR_16[3] = 1;
  VAR_15[4] = &VAR_9;
  VAR_16[4] = 1;
 }

 VAR_10 = 0;
 while (VAR_10 < VAR_8) {
  VAR_9++;
  VAR_11 = VAR_8 - VAR_10;
  if (FUNC_0(VAR_2, VAR_3, 5, VAR_15, VAR_16, VAR_12) < 0)
   return -1;
  if (VAR_11 >= VAR_0) {
   FUNC_1(&VAR_7[VAR_10], VAR_12, VAR_0);
   VAR_10 += VAR_0;
  } else {
   FUNC_1(&VAR_7[VAR_10], VAR_12, VAR_11);
   break;
  }
  VAR_16[0] = VAR_0;
 }

 return 0;
}
