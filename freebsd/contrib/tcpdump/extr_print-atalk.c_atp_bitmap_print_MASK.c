
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_0,
                 register u_char VAR_1)
{
 register char VAR_2;
 register int VAR_3;






 if ((VAR_1 + 1) & (VAR_1 & 0xff)) {
  VAR_2 = '<';
  for (VAR_3 = 0; VAR_1; ++VAR_3) {
   if (VAR_1 & 1) {
    FUNC_0((VAR_0, "%c%d", VAR_2, VAR_3));
    VAR_2 = ',';
   }
   VAR_1 >>= 1;
  }
  FUNC_0((VAR_0, ">"));
 } else {
  for (VAR_3 = 0; VAR_1; ++VAR_3)
   VAR_1 >>= 1;
  if (VAR_3 > 1)
   FUNC_0((VAR_0, "<0-%d>", VAR_3 - 1));
  else
   FUNC_0((VAR_0, "<0>"));
 }
}
