
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

void
FUNC_4(netdissect_options *VAR_0, u_char VAR_1)
{
 if (!FUNC_0(VAR_1)) {
  VAR_1 = FUNC_3(VAR_1);
  FUNC_2((VAR_0, "M-"));
 }
 if (!FUNC_1(VAR_1)) {
  VAR_1 ^= 0x40;
  FUNC_2((VAR_0, "^"));
 }
 FUNC_2((VAR_0, "%c", VAR_1));
}
