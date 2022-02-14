
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
 const uint16_t *VAR_4 = (const uint16_t *)VAR_2;

 if (VAR_3 < 5) {
  FUNC_2((VAR_1, "AVP too short"));
  return;
 }

 FUNC_2((VAR_1, "%04x, ", FUNC_0(VAR_2)));
 VAR_2 += 2;
 VAR_3 -= 2;

 FUNC_2((VAR_1, "%04x ", FUNC_0(VAR_2)));
 VAR_2 += 2;
 VAR_3 -= 2;

 FUNC_2((VAR_1, "%s", FUNC_4(VAR_0,
        "Direction-#%u", FUNC_1(VAR_4))));
 VAR_4++;
 VAR_3--;

 if (VAR_3 != 0) {
  FUNC_2((VAR_1, " "));
  FUNC_3(VAR_1, (const u_char *)VAR_4, VAR_3);
 }
}
