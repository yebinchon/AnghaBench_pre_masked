
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mgmt_header_t {int sa; int da; int bssid; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_0, const u_char *VAR_1)
{
 const struct mgmt_header_t *VAR_2 = (const struct mgmt_header_t *) VAR_1;

 FUNC_0((VAR_0, "BSSID:%s DA:%s SA:%s ",
     FUNC_1(VAR_0, (VAR_2)->bssid), FUNC_1(VAR_0, (VAR_2)->da),
     FUNC_1(VAR_0, (VAR_2)->sa)));
}
