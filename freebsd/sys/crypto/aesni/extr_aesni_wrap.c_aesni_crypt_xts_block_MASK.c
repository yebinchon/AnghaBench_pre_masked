
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int __m128i ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int,int const*,int) ;
 int FUNC_3 (int,int const*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, const __m128i *VAR_1, __m128i *VAR_2,
    const uint8_t *VAR_3, uint8_t *VAR_4, int VAR_5)
{
 __m128i VAR_6;

 VAR_6 = FUNC_0((const __m128i *)VAR_3) ^ *VAR_2;

 if (VAR_5)
  VAR_6 = FUNC_3(VAR_0 - 1, VAR_1, VAR_6);
 else
  VAR_6 = FUNC_2(VAR_0 - 1, VAR_1, VAR_6);

 FUNC_1((__m128i *)VAR_4, VAR_6 ^ *VAR_2);

 *VAR_2 = FUNC_4(*VAR_2);
}
