
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(uint64_t VAR_7, int *VAR_8, int *VAR_9)
{
 uint32_t VAR_10, VAR_11;

 *VAR_8 = -1;
 *VAR_9 = (VAR_7 % 4) * 2;
 VAR_10 = 0;

 if (VAR_7 >= VAR_6 && VAR_7 <= VAR_5) {
  *VAR_8 = VAR_7 / 4;
  return (0);
 }

 VAR_10 += (VAR_5 - VAR_6 + 1);
 if (VAR_7 >= VAR_2 && VAR_7 <= VAR_1) {
  VAR_11 = (VAR_7 - VAR_2);
  *VAR_8 = (VAR_11 + VAR_10) / 4;
  return (0);
 }

 VAR_10 += (VAR_1 - VAR_2 + 1);
 if (VAR_7 >= VAR_4 && VAR_7 <= VAR_3) {
  VAR_11 = (VAR_7 - VAR_4);
  *VAR_8 = (VAR_11 + VAR_10) / 4;
  return (0);
 }

 return (VAR_0);
}
