
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(int64_t *VAR_3, int64_t *VAR_4)
{
 int VAR_5 = VAR_0;
 long double VAR_6 = 0, VAR_7 = 0;
 int64_t VAR_8, VAR_9;
 uint_t VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  int64_t VAR_11 = FUNC_0(VAR_10);

  if (VAR_11 == 0) {
   VAR_8 = VAR_3[VAR_10];
   VAR_9 = VAR_4[VAR_10];
  }

  VAR_6 += (long double)VAR_11 * (long double)VAR_3[VAR_10];
  VAR_7 += (long double)VAR_11 * (long double)VAR_4[VAR_10];
 }

 if (VAR_6 < VAR_7)
  return (VAR_2);

 if (VAR_6 > VAR_7)
  return (VAR_1);






 if (VAR_8 < VAR_9)
  return (VAR_2);

 if (VAR_8 > VAR_9)
  return (VAR_1);

 return (0);
}
