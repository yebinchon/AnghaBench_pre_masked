
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int const**) ;
 int FUNC_1 (int const*,size_t,int*,int*,size_t) ;
 scalar_t__ FUNC_2 (int const*,size_t,size_t,int const**,size_t*,int*) ;
 int FUNC_3 (int*,int const*,size_t) ;

int FUNC_4(const u8 *VAR_1, size_t VAR_2,
      const u8 *VAR_3, size_t VAR_4,
      size_t VAR_5, const u8 *VAR_6[], const size_t *VAR_7,
      u8 *VAR_8)
{
 const u8 *VAR_9[6];
 size_t VAR_10[6];
 const u8 *VAR_11, *VAR_12;
 u8 VAR_13[VAR_0];
 size_t VAR_14;
 u8 *VAR_15, *VAR_16;

 if (VAR_5 > FUNC_0(VAR_9) - 1 ||
     (VAR_2 != 32 && VAR_2 != 48 && VAR_2 != 64))
  return -1;

 VAR_2 /= 2;
 VAR_11 = VAR_1;
 VAR_12 = VAR_1 + VAR_2;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_9[VAR_14] = VAR_6[VAR_14];
  VAR_10[VAR_14] = VAR_7[VAR_14];
 }
 VAR_9[VAR_5] = VAR_3;
 VAR_10[VAR_5] = VAR_4;

 if (FUNC_2(VAR_11, VAR_2, VAR_5 + 1, VAR_9, VAR_10, VAR_13))
  return -1;

 VAR_15 = VAR_8;
 VAR_16 = VAR_8 + VAR_0;

 FUNC_3(VAR_15, VAR_13, VAR_0);
 FUNC_3(VAR_16, VAR_3, VAR_4);


 VAR_13[8] &= 0x7f;
 VAR_13[12] &= 0x7f;
 return FUNC_1(VAR_12, VAR_2, VAR_13, VAR_16, VAR_4);
}
