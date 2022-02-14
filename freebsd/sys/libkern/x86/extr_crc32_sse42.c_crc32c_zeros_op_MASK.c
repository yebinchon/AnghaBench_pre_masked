
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_1, size_t VAR_2)
{
 uint32_t VAR_3[32];
 uint32_t VAR_4;
 int VAR_5;


 VAR_3[0] = VAR_0;
 VAR_4 = 1;
 for (VAR_5 = 1; VAR_5 < 32; VAR_5++) {
  VAR_3[VAR_5] = VAR_4;
  VAR_4 <<= 1;
 }


 FUNC_0(VAR_1, VAR_3);


 FUNC_0(VAR_3, VAR_1);






 do {
  FUNC_0(VAR_1, VAR_3);
  VAR_2 >>= 1;
  if (VAR_2 == 0)
   return;
  FUNC_0(VAR_3, VAR_1);
  VAR_2 >>= 1;
 } while (VAR_2);


 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  VAR_1[VAR_5] = VAR_3[VAR_5];
}
