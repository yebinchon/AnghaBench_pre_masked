
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u_int32_t
FUNC_2(u_int32_t VAR_1, int VAR_2)
{
 u_int32_t VAR_3, VAR_4;

 if (VAR_2 < 1)
  VAR_2 = 1;

 VAR_3 = FUNC_0(FUNC_1(VAR_1), VAR_0 >> 1);

 if (VAR_3 > VAR_1 && (VAR_3 >> 1) > 0 && (VAR_3 >> 1) >= ((VAR_1 * 3) >> 2))
  VAR_3 >>= 1;

 VAR_4 = VAR_3 - (VAR_3 % VAR_2);
 while (VAR_4 < 16 || VAR_4 < VAR_2) {
  VAR_3 <<= 1;
  VAR_4 = VAR_3 - (VAR_3 % VAR_2);
 }

 return VAR_3;
}
