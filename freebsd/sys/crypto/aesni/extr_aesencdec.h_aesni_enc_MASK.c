
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __m128i ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int const) ;

__attribute__((used)) static inline __m128i
FUNC_2(int VAR_0, const __m128i *VAR_1, const __m128i VAR_2)
{
 __m128i VAR_3;
 int VAR_4;

 VAR_3 = VAR_2 ^ VAR_1[0];
 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4 += 2) {
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4]);
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4 + 1]);
 }

 VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_0]);
 return FUNC_1(VAR_3, VAR_1[VAR_0 + 1]);
}
