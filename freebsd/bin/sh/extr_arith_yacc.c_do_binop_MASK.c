
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int arith_t ;
 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static arith_t FUNC_1(int VAR_2, arith_t VAR_3, arith_t VAR_4)
{

 switch (VAR_2) {
 default:
 case 130:
 case 139:
  if (!VAR_4)
   FUNC_0("division by zero");
  if (VAR_3 == VAR_0 && VAR_4 == -1)
   FUNC_0("divide error");
  return VAR_2 == 130 ? VAR_3 % VAR_4 : VAR_3 / VAR_4;
 case 132:
  return (uintmax_t)VAR_3 * (uintmax_t)VAR_4;
 case 143:
  return (uintmax_t)VAR_3 + (uintmax_t)VAR_4;
 case 128:
  return (uintmax_t)VAR_3 - (uintmax_t)VAR_4;
 case 134:
  return (uintmax_t)VAR_3 << (VAR_4 & (sizeof(uintmax_t) * VAR_1 - 1));
 case 129:
  return VAR_3 >> (VAR_4 & (sizeof(uintmax_t) * VAR_1 - 1));
 case 133:
  return VAR_3 < VAR_4;
 case 135:
  return VAR_3 <= VAR_4;
 case 136:
  return VAR_3 > VAR_4;
 case 137:
  return VAR_3 >= VAR_4;
 case 138:
  return VAR_3 == VAR_4;
 case 131:
  return VAR_3 != VAR_4;
 case 142:
  return VAR_3 & VAR_4;
 case 140:
  return VAR_3 ^ VAR_4;
 case 141:
  return VAR_3 | VAR_4;
 }
}
