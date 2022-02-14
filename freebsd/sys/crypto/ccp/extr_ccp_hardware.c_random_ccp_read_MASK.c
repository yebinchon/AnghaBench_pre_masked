
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;

u_int
FUNC_2(void *VAR_3, u_int VAR_4)
{
 uint32_t *VAR_5;
 u_int VAR_6, VAR_7;

 FUNC_0(VAR_4 % sizeof(*VAR_5) == 0, ("%u not multiple of u_long", VAR_4));

 VAR_5 = VAR_3;
 for (VAR_6 = VAR_4; VAR_6 > 0; VAR_6 -= sizeof(*VAR_5)) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   *VAR_5 = FUNC_1(VAR_2, VAR_1);
   if (*VAR_5 != 0)
    break;
  }
  if (VAR_7 == VAR_0)
   return (0);
  VAR_5++;
 }
 return (VAR_4);

}
