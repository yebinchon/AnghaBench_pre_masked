
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int key_bits ;
typedef int i_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const*,int,int,int const**,size_t*,int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 size_t FUNC_3 (char const*) ;

void FUNC_4(const u8 *VAR_1, const u8 *VAR_2, size_t VAR_3,
      const char *VAR_4, u8 *VAR_5, size_t VAR_6)
{
 u8 VAR_7[4], VAR_8[4];
 const u8 *VAR_9[4];
 size_t VAR_10[4];
 int VAR_11, VAR_12;
 u8 VAR_13[VAR_0], *VAR_14;
 size_t VAR_15;

 FUNC_0(VAR_8, VAR_6 * 8);

 VAR_9[0] = VAR_7;
 VAR_10[0] = sizeof(VAR_7);
 VAR_9[1] = VAR_2;
 VAR_10[1] = VAR_3;
 VAR_9[2] = (const u8 *) VAR_4;
 VAR_10[2] = FUNC_3(VAR_4);
 VAR_9[3] = VAR_8;
 VAR_10[3] = sizeof(VAR_8);

 VAR_12 = (VAR_6 + VAR_0 - 1) / VAR_0;
 VAR_14 = VAR_5;
 VAR_15 = VAR_6;

 for (VAR_11 = 1; VAR_11 <= VAR_12; VAR_11++) {
  FUNC_0(VAR_7, VAR_11);
  FUNC_1(VAR_1, VAR_0, 4, VAR_9, VAR_10, VAR_13);
  if (VAR_11 < VAR_12) {
   FUNC_2(VAR_14, VAR_13, VAR_0);
   VAR_14 += VAR_0;
   VAR_15 -= VAR_0;
  } else
   FUNC_2(VAR_14, VAR_13, VAR_15);
 }
}
