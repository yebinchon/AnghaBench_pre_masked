
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct anqp_element {int payload; } ;


 int VAR_0 ;
 struct anqp_element* FUNC_0 (struct hostapd_data*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_6(struct hostapd_data *VAR_1, struct wpabuf *VAR_2,
     u16 VAR_3)
{
 struct anqp_element *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_4)
  return;
 if (FUNC_5(VAR_2) < 2 + 2 + FUNC_2(VAR_4->payload)) {
  FUNC_1(VAR_0, "ANQP: No room for InfoID %u payload",
      VAR_3);
  return;
 }

 FUNC_4(VAR_2, VAR_3);
 FUNC_4(VAR_2, FUNC_2(VAR_4->payload));
 FUNC_3(VAR_2, VAR_4->payload);
}
