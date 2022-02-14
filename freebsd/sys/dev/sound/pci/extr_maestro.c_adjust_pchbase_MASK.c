
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct agg_chinfo {scalar_t__ phys; size_t base; } ;
typedef size_t bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,size_t,...) ;

__attribute__((used)) static void
FUNC_1(struct agg_chinfo *VAR_3, u_int VAR_4, u_int VAR_5)
{
 struct agg_chinfo *VAR_6[VAR_0];
 u_int VAR_7, VAR_8, VAR_9;
 bus_addr_t VAR_10;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   if (VAR_3[VAR_7].phys < VAR_6[VAR_8]->phys) {
    for (VAR_9 = VAR_7; VAR_9 > VAR_8; VAR_9--)
     VAR_6[VAR_9] = VAR_6[VAR_9 - 1];
    break;
   }
  VAR_6[VAR_8] = VAR_3 + VAR_7;
 }




 VAR_10 = VAR_6[0]->base;
 for (VAR_9 = 1, VAR_7 = 1; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_6[VAR_7]->phys + VAR_5 - VAR_10 >= 1 << (FUNC_0(2) + 2 + 1))

   VAR_10 = (VAR_6[VAR_7]->base -= VAR_9++ << (FUNC_0(2) + 2 + 1));
  else
   VAR_6[VAR_7]->base = VAR_10;
 }


 if (VAR_2) {
  FUNC_0("Total of %d bases are assigned.\n", VAR_9);
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   FUNC_0("ch.%d: phys 0x%llx, wpwa 0x%llx\n",
          VAR_7, (long long)VAR_3[VAR_7].phys,
          (long long)(VAR_3[VAR_7].phys -
        VAR_3[VAR_7].base) >> 1);
  }
 }
}
