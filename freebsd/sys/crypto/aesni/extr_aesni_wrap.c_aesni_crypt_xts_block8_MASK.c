
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int __m128i ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int,int const*,int,int,int,int,int,int,int,int,int*) ;
 int FUNC_3 (int,int const*,int,int,int,int,int,int,int,int,int*) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, const __m128i *VAR_1, __m128i *VAR_2,
    const uint8_t *VAR_3, uint8_t *VAR_4, int VAR_5)
{
 __m128i VAR_6;
 __m128i VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 __m128i VAR_15[8];
 __m128i VAR_16[8];
 __m128i *VAR_17;
 const __m128i *VAR_18;

 VAR_6 = *VAR_2;





 VAR_18 = (const __m128i *)VAR_3;







 do { VAR_15[(0)] = VAR_6; (VAR_7) = FUNC_0(&VAR_18[0]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 do { VAR_15[(1)] = VAR_6; (VAR_8) = FUNC_0(&VAR_18[1]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 do { VAR_15[(2)] = VAR_6; (VAR_9) = FUNC_0(&VAR_18[2]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 do { VAR_15[(3)] = VAR_6; (VAR_10) = FUNC_0(&VAR_18[3]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 do { VAR_15[(4)] = VAR_6; (VAR_11) = FUNC_0(&VAR_18[4]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 do { VAR_15[(5)] = VAR_6; (VAR_12) = FUNC_0(&VAR_18[5]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 do { VAR_15[(6)] = VAR_6; (VAR_13) = FUNC_0(&VAR_18[6]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 do { VAR_15[(7)] = VAR_6; (VAR_14) = FUNC_0(&VAR_18[7]) ^ VAR_6; VAR_6 = FUNC_0(VAR_6); } while (0);
 *VAR_2 = VAR_6;

 if (VAR_5)
  FUNC_3(VAR_0 - 1, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
      VAR_16);
 else
  FUNC_2(VAR_0 - 1, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
      VAR_16);

 VAR_17 = (__m128i *)VAR_4;
 FUNC_1(&VAR_17[0], VAR_16[0] ^ VAR_15[0]);
 FUNC_1(&VAR_17[1], VAR_16[1] ^ VAR_15[1]);
 FUNC_1(&VAR_17[2], VAR_16[2] ^ VAR_15[2]);
 FUNC_1(&VAR_17[3], VAR_16[3] ^ VAR_15[3]);
 FUNC_1(&VAR_17[4], VAR_16[4] ^ VAR_15[4]);
 FUNC_1(&VAR_17[5], VAR_16[5] ^ VAR_15[5]);
 FUNC_1(&VAR_17[6], VAR_16[6] ^ VAR_15[6]);
 FUNC_1(&VAR_17[7], VAR_16[7] ^ VAR_15[7]);
}
