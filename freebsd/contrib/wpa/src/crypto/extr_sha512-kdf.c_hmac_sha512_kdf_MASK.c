
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int const*,size_t,int,unsigned char const**,size_t*,int*) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (int*,int ,size_t) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const u8 *VAR_1, size_t VAR_2,
      const char *VAR_3, const u8 *VAR_4, size_t VAR_5,
      u8 *VAR_6, size_t VAR_7)
{
 u8 VAR_8[VAR_0];
 u8 VAR_9 = 1;
 const unsigned char *VAR_10[4];
 size_t VAR_11[4];
 size_t VAR_12, VAR_13;

 VAR_10[0] = VAR_8;
 VAR_11[0] = VAR_0;
 if (VAR_3) {
  VAR_10[1] = (const unsigned char *) VAR_3;
  VAR_11[1] = FUNC_4(VAR_3) + 1;
 } else {
  VAR_10[1] = (const u8 *) "";
  VAR_11[1] = 0;
 }
 VAR_10[2] = VAR_4;
 VAR_11[2] = VAR_5;
 VAR_10[3] = &VAR_9;
 VAR_11[3] = 1;

 if (FUNC_1(VAR_1, VAR_2, 3, &VAR_10[1], &VAR_11[1], VAR_8) < 0)
  return -1;

 VAR_12 = 0;
 for (;;) {
  VAR_13 = VAR_7 - VAR_12;
  if (VAR_13 > VAR_0)
   VAR_13 = VAR_0;
  FUNC_2(VAR_6 + VAR_12, VAR_8, VAR_13);
  VAR_12 += VAR_13;

  if (VAR_12 == VAR_7)
   break;

  if (VAR_9 == 255) {
   FUNC_3(VAR_6, 0, VAR_7);
   FUNC_0(VAR_8, VAR_0);
   return -1;
  }
  VAR_9++;

  if (FUNC_1(VAR_1, VAR_2, 4, VAR_10, VAR_11, VAR_8) < 0)
  {
   FUNC_3(VAR_6, 0, VAR_7);
   FUNC_0(VAR_8, VAR_0);
   return -1;
  }
 }

 FUNC_0(VAR_8, VAR_0);
 return 0;
}
