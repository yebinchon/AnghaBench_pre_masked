
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int ;
struct crparam {int crp_nbits; int* crp_p; } ;



__attribute__((used)) static int
FUNC_0(struct crparam *VAR_0)
{
 u_int VAR_1 = (VAR_0->crp_nbits + 7) / 8;
 int VAR_2, VAR_3 = VAR_1 * 8;
 u_int8_t VAR_4, *VAR_5 = VAR_0->crp_p;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--) {
  VAR_4 = VAR_5[VAR_2];
  if (VAR_4 != 0) {
   while ((VAR_4 & 0x80) == 0) {
    VAR_3--;
    VAR_4 <<= 1;
   }
   break;
  }
  VAR_3 -= 8;
 }
 return (VAR_3);
}
