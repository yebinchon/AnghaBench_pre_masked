
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int VAR_0 ;

void
FUNC_4(netdissect_options *VAR_1, register const u_char *VAR_2, register u_int VAR_3)
{
 if (VAR_3 < 1) {
  FUNC_0((VAR_1, "truncated-ip %d", VAR_3));
  return;
 }

 FUNC_1(*VAR_2);
 switch (*VAR_2 & 0xF0) {
 case 0x40:
  FUNC_3 (VAR_1, VAR_2, VAR_3);
  break;
 case 0x60:
  FUNC_2 (VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_0((VAR_1, "unknown ip %d", (*VAR_2 & 0xF0) >> 4));
  break;
 }
 return;

trunc:
 FUNC_0((VAR_1, "%s", VAR_0));
 return;
}
