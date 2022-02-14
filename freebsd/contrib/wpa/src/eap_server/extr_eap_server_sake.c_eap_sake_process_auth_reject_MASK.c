
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sake_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_sake_data*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_2,
      struct eap_sake_data *VAR_3,
      const struct wpabuf *VAR_4,
      const u8 *VAR_5, size_t VAR_6)
{
 FUNC_1(VAR_1, "EAP-SAKE: Received Response/Auth-Reject");
 FUNC_0(VAR_3, VAR_0);
}
