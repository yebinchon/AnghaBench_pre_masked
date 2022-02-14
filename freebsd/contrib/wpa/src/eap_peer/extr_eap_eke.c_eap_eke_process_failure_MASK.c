
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_method_ret {int dummy; } ;
struct eap_eke_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 struct wpabuf* FUNC_1 (struct eap_eke_data*,struct eap_method_ret*,int ,int ) ;
 int FUNC_2 (struct wpabuf const*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_eke_data *VAR_3,
            struct eap_method_ret *VAR_4,
            const struct wpabuf *VAR_5,
            const u8 *VAR_6,
            size_t VAR_7)
{
 FUNC_3(VAR_1, "EAP-EKE: Received EAP-EKE-Failure/Request");

 if (VAR_7 < 4) {
  FUNC_3(VAR_1, "EAP-EKE: Too short EAP-EKE-Failure");
 } else {
  u32 VAR_8;
  VAR_8 = FUNC_0(VAR_6);
  FUNC_3(VAR_2, "EAP-EKE: Failure-Code 0x%x", VAR_8);
 }

 return FUNC_1(VAR_3, VAR_4, FUNC_2(VAR_5),
      VAR_0);
}
