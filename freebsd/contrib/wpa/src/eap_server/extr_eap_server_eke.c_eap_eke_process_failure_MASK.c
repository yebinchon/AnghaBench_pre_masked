
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_eke_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct eap_eke_data*,int ) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_2,
        struct eap_eke_data *VAR_3,
        const struct wpabuf *VAR_4,
        const u8 *VAR_5, size_t VAR_6)
{
 u32 VAR_7;

 FUNC_2(VAR_1, "EAP-EKE: Received Response/Failure");

 if (VAR_6 < 4) {
  FUNC_2(VAR_1, "EAP-EKE: Too short EAP-EKE-Failure");
  FUNC_1(VAR_3, VAR_0);
  return;
 }

 VAR_7 = FUNC_0(VAR_5);
 FUNC_2(VAR_1, "EAP-EKE: Peer reported failure code 0x%x", VAR_7);

 FUNC_1(VAR_3, VAR_0);
}
