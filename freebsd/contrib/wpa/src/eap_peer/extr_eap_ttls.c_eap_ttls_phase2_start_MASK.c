
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int conn; } ;
struct eap_ttls_data {int phase2_success; int ttls_version; TYPE_1__ ssl; scalar_t__ reauth; scalar_t__ phase2_start; } ;
struct eap_sm {int ssl_ctx; } ;
struct eap_method_ret {int decision; int methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,int ,struct wpabuf**) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct eap_sm *VAR_4, struct eap_ttls_data *VAR_5,
     struct eap_method_ret *VAR_6, u8 VAR_7,
     struct wpabuf **VAR_8)
{
 VAR_5->phase2_start = 0;
 if (VAR_5->reauth &&
     FUNC_2(VAR_4->ssl_ctx, VAR_5->ssl.conn)) {
  FUNC_3(VAR_3, "EAP-TTLS: Session resumption - "
      "skip phase 2");
  *VAR_8 = FUNC_0(VAR_7, VAR_1,
         VAR_5->ttls_version);
  VAR_6->methodState = VAR_2;
  VAR_6->decision = VAR_0;
  VAR_5->phase2_success = 1;
  return 0;
 }

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8);
}
