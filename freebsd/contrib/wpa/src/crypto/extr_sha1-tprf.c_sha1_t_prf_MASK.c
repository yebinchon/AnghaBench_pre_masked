
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 scalar_t__ FUNC_1 (unsigned char const*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(const u8 *VAR_1, size_t VAR_2, const char *VAR_3,
        const u8 *VAR_4, size_t VAR_5, u8 *VAR_6, size_t VAR_7)
{
 unsigned char VAR_8 = 0;
 size_t VAR_9, VAR_10;
 u8 VAR_11[VAR_0];
 size_t VAR_12 = FUNC_3(VAR_3);
 u8 VAR_13[2];
 const unsigned char *VAR_14[5];
 size_t VAR_15[5];

 VAR_14[0] = VAR_11;
 VAR_15[0] = 0;
 VAR_14[1] = (unsigned char *) VAR_3;
 VAR_15[1] = VAR_12 + 1;
 VAR_14[2] = VAR_4;
 VAR_15[2] = VAR_5;
 VAR_14[3] = VAR_13;
 VAR_15[3] = 2;
 VAR_14[4] = &VAR_8;
 VAR_15[4] = 1;

 VAR_13[0] = (VAR_7 >> 8) & 0xff;
 VAR_13[1] = VAR_7 & 0xff;
 VAR_9 = 0;
 while (VAR_9 < VAR_7) {
  VAR_8++;
  VAR_10 = VAR_7 - VAR_9;
  if (FUNC_1(VAR_1, VAR_2, 5, VAR_14, VAR_15, VAR_11))
   return -1;
  if (VAR_10 >= VAR_0) {
   FUNC_2(&VAR_6[VAR_9], VAR_11, VAR_0);
   VAR_9 += VAR_0;
  } else {
   FUNC_2(&VAR_6[VAR_9], VAR_11, VAR_10);
   break;
  }
  VAR_15[0] = VAR_0;
 }

 FUNC_0(VAR_11, VAR_0);

 return 0;
}
