
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int buf ;


 int VAR_0 ;
 int* VAR_1 ;
 size_t FUNC_0 (int,int *,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, uint32_t *VAR_3)
{
 uint8_t VAR_4[VAR_0], *VAR_5;
 size_t VAR_6;

 *VAR_3 = ~0;
 while ((VAR_6 = FUNC_0(VAR_2, VAR_4, sizeof(VAR_4))) > 0) {
  VAR_5 = &VAR_4[0];
  while (VAR_6-- > 0)
   *VAR_3 = VAR_1[(*VAR_3 ^ *VAR_5++) & 0xff] ^ (*VAR_3 >> 8);
 }
 *VAR_3 = ~*VAR_3;
 return (VAR_6);
}
