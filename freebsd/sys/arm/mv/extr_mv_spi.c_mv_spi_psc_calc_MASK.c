
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4, VAR_5;

 VAR_5 = FUNC_0();
 for (*VAR_2 = 2; *VAR_2 <= 15; (*VAR_2)++) {
  for (*VAR_3 = 0; *VAR_3 <= 7; (*VAR_3)++) {
   VAR_4 = *VAR_2 * (1 << *VAR_3);
   if (VAR_5 / VAR_4 <= VAR_1)
    return (0);
  }
 }

 return (VAR_0);
}
