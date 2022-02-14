
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_prf_alg {size_t hash_len; } ;


 int VAR_0 ;
 struct ikev2_prf_alg* FUNC_0 (int) ;
 int FUNC_1 (int,int const*,size_t,int,int const**,size_t*,int*) ;
 int FUNC_2 (int*,int*,size_t) ;

int FUNC_3(int VAR_1, const u8 *VAR_2, size_t VAR_3,
     const u8 *VAR_4, size_t VAR_5,
     u8 *VAR_6, size_t VAR_7)
{
 u8 VAR_8[VAR_0];
 size_t VAR_9;
 u8 VAR_10, *VAR_11, *VAR_12;
 const u8 *VAR_13[3];
 size_t VAR_14[3];
 const struct ikev2_prf_alg *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_0(VAR_1);
 if (VAR_15 == ((void*)0))
  return -1;
 VAR_9 = VAR_15->hash_len;

 VAR_13[0] = VAR_8;
 VAR_14[0] = VAR_9;
 VAR_13[1] = VAR_4;
 VAR_14[1] = VAR_5;
 VAR_13[2] = &VAR_10;
 VAR_14[2] = 1;

 VAR_11 = VAR_6;
 VAR_12 = VAR_6 + VAR_7;
 VAR_10 = 1;
 while (VAR_11 < VAR_12) {
  size_t VAR_17;
  if (VAR_10 == 1)
   VAR_16 = FUNC_1(VAR_1, VAR_2, VAR_3, 2, &VAR_13[1],
          &VAR_14[1], VAR_8);
  else
   VAR_16 = FUNC_1(VAR_1, VAR_2, VAR_3, 3, VAR_13, VAR_14,
          VAR_8);
  if (VAR_16 < 0)
   return -1;
  VAR_17 = VAR_9;
  if ((int) VAR_17 > VAR_12 - VAR_11)
   VAR_17 = VAR_12 - VAR_11;
  FUNC_2(VAR_11, VAR_8, VAR_17);
  VAR_11 += VAR_17;
  VAR_10++;
 }

 return 0;
}
