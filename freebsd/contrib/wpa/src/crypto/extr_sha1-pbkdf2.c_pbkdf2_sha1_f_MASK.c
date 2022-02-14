
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,size_t,unsigned char*,int,unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*,size_t,int,unsigned char const**,size_t*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const u8 *VAR_2,
    size_t VAR_3, int VAR_4, unsigned int VAR_5,
    u8 *VAR_6)
{
 unsigned char VAR_7[VAR_0], VAR_8[VAR_0];
 int VAR_9, VAR_10;
 unsigned char VAR_11[4];
 const u8 *VAR_12[2];
 size_t VAR_13[2];
 size_t VAR_14 = FUNC_3(VAR_1);

 VAR_12[0] = VAR_2;
 VAR_13[0] = VAR_3;
 VAR_12[1] = VAR_11;
 VAR_13[1] = 4;







 VAR_11[0] = (VAR_5 >> 24) & 0xff;
 VAR_11[1] = (VAR_5 >> 16) & 0xff;
 VAR_11[2] = (VAR_5 >> 8) & 0xff;
 VAR_11[3] = VAR_5 & 0xff;
 if (FUNC_1((u8 *) VAR_1, VAR_14, 2, VAR_12, VAR_13,
        VAR_7))
  return -1;
 FUNC_2(VAR_6, VAR_7, VAR_0);

 for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++) {
  if (FUNC_0((u8 *) VAR_1, VAR_14, VAR_7,
         VAR_0, VAR_8))
   return -1;
  FUNC_2(VAR_7, VAR_8, VAR_0);
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   VAR_6[VAR_10] ^= VAR_8[VAR_10];
 }

 return 0;
}
