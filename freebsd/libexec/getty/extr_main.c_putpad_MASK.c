
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int speed_t ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2)
{
 int VAR_3 = 0;
 speed_t VAR_4 = FUNC_0(&VAR_1);

 if (FUNC_1(*VAR_2)) {
  while (FUNC_1(*VAR_2)) {
   VAR_3 *= 10;
   VAR_3 += *VAR_2++ - '0';
  }
  VAR_3 *= 10;
  if (*VAR_2 == '.' && FUNC_1(VAR_2[1])) {
   VAR_3 += VAR_2[1] - '0';
   VAR_2 += 2;
  }
 }

 FUNC_3(VAR_2);




 if (VAR_3 == 0 || VAR_4 <= 0)
  return;







 VAR_3 = (VAR_3 * VAR_4 + 50000) / 100000;
 while (VAR_3--)
  FUNC_2(*VAR_0);
}
