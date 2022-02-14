
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4)
{
 const uint32_t *VAR_5 = (const uint32_t *)VAR_3;

 if (VAR_4 < 4) {
  FUNC_1((VAR_2, "AVP too short"));
  return;
 }
 if (FUNC_0(VAR_5) & VAR_0) {
  FUNC_1((VAR_2, "A"));
 }
 if (FUNC_0(VAR_5) & VAR_1) {
  FUNC_1((VAR_2, "D"));
 }
}
