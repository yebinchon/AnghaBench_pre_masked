
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const VAR_0 ;

__attribute__((used)) static int
FUNC_0(const uint8_t VAR_1[15], uint8_t VAR_2)
{
 int VAR_3, VAR_4 = -1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_5 = VAR_1[VAR_3] & VAR_0;
  if (VAR_5 > VAR_4)
   VAR_4 = VAR_5;
 }
 return VAR_4 / 2;
}
