
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __m128i ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const) ;

__attribute__((used)) static inline __m128i
FUNC_6(__m128i VAR_0)
{
 const __m128i VAR_1 = FUNC_2(0, 0, 1, 0);
 const __m128i VAR_2 = FUNC_3();

 VAR_0 = FUNC_0(VAR_0, VAR_1);
 __m128i VAR_3 = FUNC_1(VAR_0, VAR_2);
 VAR_3 = FUNC_5(VAR_3, VAR_2);
 VAR_0 = FUNC_4(VAR_0, VAR_3);

 return VAR_0;
}
