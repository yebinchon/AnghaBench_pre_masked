
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pf_addr {int* addr32; } ;
typedef int sa_family_t ;


 int FUNC_0 (int) ;

int
FUNC_1(struct pf_addr *VAR_0, sa_family_t VAR_1)
{
 int VAR_2 = 31, VAR_3 = 0, VAR_4 = 0;
 u_int32_t VAR_5;

 while (VAR_3 < 4 && VAR_0->addr32[VAR_3] == 0xffffffff) {
  VAR_4 += 32;
  VAR_3++;
 }
 if (VAR_3 < 4) {
  VAR_5 = FUNC_0(VAR_0->addr32[VAR_3]);
  for (VAR_2 = 31; VAR_5 & (1 << VAR_2); --VAR_2)
   VAR_4++;
 }
 return (VAR_4);
}
