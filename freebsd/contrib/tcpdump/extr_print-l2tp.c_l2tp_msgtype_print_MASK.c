
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
 const uint16_t *VAR_4 = (const uint16_t *)VAR_2;

 if (VAR_3 < 2) {
  FUNC_1((VAR_1, "AVP too short"));
  return;
 }
 FUNC_1((VAR_1, "%s", FUNC_2(VAR_0, "MSGTYPE-#%u",
     FUNC_0(VAR_4))));
}
