
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;

__attribute__((used)) static int64_t
FUNC_1(char **VAR_2, int VAR_3)
{
 int64_t VAR_4, VAR_5;
 int VAR_6, VAR_7;

 if (VAR_3 == 0) {
  if (**VAR_2 != '0')
   VAR_3 = 10;
  else if ((*VAR_2)[1] == 'x' || (*VAR_2)[1] == 'X') {
   *VAR_2 += 2;
   VAR_3 = 16;
  } else {
   VAR_3 = 8;
  }
 }

 if (**VAR_2 == '-') {
  VAR_5 = VAR_1 / VAR_3;
  VAR_7 = VAR_1 % VAR_3;
  ++(*VAR_2);

  VAR_4 = 0;
  VAR_6 = FUNC_0(**VAR_2);
  while (VAR_6 >= 0 && VAR_6 < VAR_3) {
   if (VAR_4 < VAR_5 || (VAR_4 == VAR_5 && VAR_6 > VAR_7))
    return VAR_1;
   VAR_4 = (VAR_4 * VAR_3) - VAR_6;
   VAR_6 = FUNC_0(*++(*VAR_2));
  }
  return VAR_4;
 } else {
  VAR_5 = VAR_0 / VAR_3;
  VAR_7 = VAR_0 % VAR_3;

  VAR_4 = 0;
  VAR_6 = FUNC_0(**VAR_2);
  while (VAR_6 >= 0 && VAR_6 < VAR_3) {
   if (VAR_4 > VAR_5 || (VAR_4 == VAR_5 && VAR_6 > VAR_7))
    return VAR_0;
   VAR_4 = (VAR_4 * VAR_3) + VAR_6;
   VAR_6 = FUNC_0(*++(*VAR_2));
  }
  return VAR_4;
 }
}
