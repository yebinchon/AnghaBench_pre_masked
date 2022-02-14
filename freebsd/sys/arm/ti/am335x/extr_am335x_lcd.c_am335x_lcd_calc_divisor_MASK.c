
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_5 = VAR_1;
 VAR_2 = 255;


 for (VAR_3 = 2; VAR_3 < 255; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0/VAR_3 - VAR_1);
  if (VAR_4 < VAR_5) {
   VAR_2 = VAR_3;
   VAR_5 = VAR_4;
  }
 }

 return (VAR_2);
}
