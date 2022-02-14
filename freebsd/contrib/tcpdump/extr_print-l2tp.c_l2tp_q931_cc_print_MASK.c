
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2)
{
 if (VAR_2 < 3) {
  FUNC_0((VAR_0, "AVP too short"));
  return;
 }
 FUNC_1(VAR_0, (const uint16_t *)VAR_1);
 FUNC_0((VAR_0, ", %02x", VAR_1[2]));
 VAR_1 += 3;
 VAR_2 -= 3;
 if (VAR_2 != 0) {
  FUNC_0((VAR_0, " "));
  FUNC_2(VAR_0, VAR_1, VAR_2);
 }
}
