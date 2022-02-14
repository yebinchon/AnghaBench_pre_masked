
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static long double
FUNC_5(int64_t *VAR_0)
{
 int64_t VAR_1 = *VAR_0++;
 uint16_t VAR_2 = FUNC_0(VAR_1);
 uint16_t VAR_3 = FUNC_2(VAR_1);
 uint16_t VAR_4 = FUNC_1(VAR_1);
 uint16_t VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = 0, VAR_7;
 int64_t VAR_8 = 1, VAR_9, VAR_10;
 long double VAR_11;

 FUNC_4(VAR_5 >= VAR_2);
 FUNC_4(VAR_5 % VAR_2 == 0);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_8 *= VAR_2;

 VAR_11 = (long double)VAR_0[VAR_6++] * (long double)(VAR_8 - 1);

 VAR_9 = VAR_8 * VAR_2;
 VAR_10 = VAR_9 > VAR_5 ? VAR_9 / VAR_5 : 1;

 while (VAR_7 <= VAR_4) {
  FUNC_4(VAR_8 < VAR_9);
  VAR_11 += (long double)VAR_0[VAR_6++] * (long double)(VAR_8);

  if ((VAR_8 += VAR_10) != VAR_9)
   continue;

  VAR_9 = VAR_8 * VAR_2;
  VAR_10 = VAR_9 > VAR_5 ? VAR_9 / VAR_5 : 1;
  VAR_7++;
 }

 return (VAR_11 + (long double)VAR_0[VAR_6] * (long double)VAR_8);
}
