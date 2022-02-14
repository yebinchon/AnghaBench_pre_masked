
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,size_t,unsigned char*,int,unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char const*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(const u8 *VAR_1, size_t VAR_2, const char *VAR_3,
     const u8 *VAR_4, size_t VAR_5, u8 *VAR_6, size_t VAR_7)
{
 size_t VAR_8;
 u8 VAR_9[VAR_0];
 u8 VAR_10[VAR_0];
 size_t VAR_11;
 const unsigned char *VAR_12[3];
 size_t VAR_13[3];

 VAR_12[0] = VAR_9;
 VAR_13[0] = VAR_0;
 VAR_12[1] = (unsigned char *) VAR_3;
 VAR_13[1] = FUNC_3(VAR_3);
 VAR_12[2] = VAR_4;
 VAR_13[2] = VAR_5;
 if (FUNC_1(VAR_1, VAR_2, 2, &VAR_12[1], &VAR_13[1], VAR_9) < 0)
  return -1;

 VAR_11 = 0;
 while (VAR_11 < VAR_7) {
  if (FUNC_1(VAR_1, VAR_2, 3, VAR_12, VAR_13, VAR_10) <
      0 ||
      FUNC_0(VAR_1, VAR_2, VAR_9, VAR_0, VAR_9) < 0)
   return -1;

  VAR_8 = VAR_7 - VAR_11;
  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0;
  FUNC_2(VAR_6 + VAR_11, VAR_10, VAR_8);
  VAR_11 += VAR_8;
 }

 return 0;
}
