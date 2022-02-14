
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct hostapd_data {int dummy; } ;
struct anqp_query_info {int dummy; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (struct hostapd_data*,int const*,int const*,struct anqp_query_info*) ;
 int FUNC_2 (struct hostapd_data*,int const*,int const*,struct anqp_query_info*) ;
 int FUNC_3 (struct hostapd_data*,struct anqp_query_info*) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_2,
        const u8 *VAR_3, const u8 *VAR_4,
        struct anqp_query_info *VAR_5)
{
 u32 VAR_6;

 if (VAR_4 - VAR_3 < 4) {
  FUNC_4(VAR_0, "ANQP: Too short vendor specific ANQP "
      "Query element");
  return;
 }

 VAR_6 = FUNC_0(VAR_3);
 VAR_3 += 3;
 if (VAR_6 != VAR_1) {
  FUNC_4(VAR_0, "ANQP: Unsupported vendor OUI %06x",
      VAR_6);
  return;
 }

 switch (*VAR_3) {
 default:
  FUNC_4(VAR_0, "ANQP: Unsupported WFA vendor type %u",
      *VAR_3);
  break;
 }
}
