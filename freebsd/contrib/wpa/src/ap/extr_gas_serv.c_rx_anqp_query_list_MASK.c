
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_data {int dummy; } ;
struct anqp_query_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct hostapd_data*,int ,struct anqp_query_info*) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_1,
          const u8 *VAR_2, const u8 *VAR_3,
          struct anqp_query_info *VAR_4)
{
 FUNC_2(VAR_0, "ANQP: %u Info IDs requested in Query list",
     (unsigned int) (VAR_3 - VAR_2) / 2);

 while (VAR_3 - VAR_2 >= 2) {
  FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_4);
  VAR_2 += 2;
 }
}
