
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_1, size_t VAR_2, const char *VAR_3,
   const u8 *VAR_4, size_t VAR_5,
   const u8 *VAR_6, size_t VAR_7,
   u8 *VAR_8, size_t VAR_9)
{
 u8 VAR_10 = 0;
 size_t VAR_11, VAR_12;
 u8 VAR_13[VAR_0];
 size_t VAR_14 = FUNC_2(VAR_3) + 1;
 const unsigned char *VAR_15[4];
 size_t VAR_16[4];

 VAR_15[0] = (u8 *) VAR_3;
 VAR_16[0] = VAR_14;
 VAR_15[1] = VAR_4;
 VAR_16[1] = VAR_5;
 VAR_15[2] = VAR_6;
 VAR_16[2] = VAR_7;
 VAR_15[3] = &VAR_10;
 VAR_16[3] = 1;

 VAR_11 = 0;
 while (VAR_11 < VAR_9) {
  VAR_12 = VAR_9 - VAR_11;
  if (VAR_12 >= VAR_0) {
   if (FUNC_0(VAR_1, VAR_2, 4, VAR_15, VAR_16,
          &VAR_8[VAR_11]) < 0)
    return -1;
   VAR_11 += VAR_0;
  } else {
   if (FUNC_0(VAR_1, VAR_2, 4, VAR_15, VAR_16,
          VAR_13) < 0)
    return -1;
   FUNC_1(&VAR_8[VAR_11], VAR_13, VAR_12);
   break;
  }
  VAR_10++;
 }

 return 0;
}
