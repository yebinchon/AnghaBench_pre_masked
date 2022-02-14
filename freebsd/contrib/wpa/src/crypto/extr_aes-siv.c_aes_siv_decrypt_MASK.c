
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int const**) ;
 int FUNC_1 (int const*,size_t,int*,int*,size_t) ;
 int FUNC_2 (int const*,size_t,size_t,int const**,size_t*,int*) ;
 scalar_t__ FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,int const*,size_t) ;

int FUNC_5(const u8 *VAR_1, size_t VAR_2,
      const u8 *VAR_3, size_t VAR_4,
      size_t VAR_5, const u8 *VAR_6[], const size_t *VAR_7,
      u8 *VAR_8)
{
 const u8 *VAR_9[6];
 size_t VAR_10[6];
 const u8 *VAR_11, *VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 int VAR_15;
 u8 VAR_16[VAR_0];
 u8 VAR_17[VAR_0];

 if (VAR_4 < VAR_0 || VAR_5 > FUNC_0(VAR_9) - 1 ||
     (VAR_2 != 32 && VAR_2 != 48 && VAR_2 != 64))
  return -1;
 VAR_13 = VAR_4 - VAR_0;
 VAR_2 /= 2;
 VAR_11 = VAR_1;
 VAR_12 = VAR_1 + VAR_2;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_9[VAR_14] = VAR_6[VAR_14];
  VAR_10[VAR_14] = VAR_7[VAR_14];
 }
 VAR_9[VAR_5] = VAR_8;
 VAR_10[VAR_5] = VAR_13;

 FUNC_4(VAR_16, VAR_3, VAR_0);
 FUNC_4(VAR_8, VAR_3 + VAR_0, VAR_13);

 VAR_16[8] &= 0x7f;
 VAR_16[12] &= 0x7f;

 VAR_15 = FUNC_1(VAR_12, VAR_2, VAR_16, VAR_8, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_2(VAR_11, VAR_2, VAR_5 + 1, VAR_9, VAR_10, VAR_17);
 if (VAR_15)
  return VAR_15;
 if (FUNC_3(VAR_17, VAR_3, VAR_0) == 0)
  return 0;

 return -1;
}
