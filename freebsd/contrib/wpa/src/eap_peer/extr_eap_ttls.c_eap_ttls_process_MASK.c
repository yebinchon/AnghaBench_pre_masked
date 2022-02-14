
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int conn; } ;
struct eap_ttls_data {int ttls_version; int resuming; TYPE_1__ ssl; } ;
struct eap_sm {int ssl_ctx; } ;
struct eap_method_ret {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpabuf const*) ;
 struct wpabuf* FUNC_1 (int,int ,int ) ;
 int* FUNC_2 (struct eap_sm*,TYPE_1__*,int ,struct eap_method_ret*,struct wpabuf const*,size_t*,int*) ;
 int FUNC_3 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*) ;
 int FUNC_4 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,int,struct wpabuf*,struct wpabuf**) ;
 int FUNC_5 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,int,struct wpabuf*,struct wpabuf**) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int,int ) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct eap_sm *VAR_4, void *VAR_5,
     struct eap_method_ret *VAR_6,
     const struct wpabuf *VAR_7)
{
 size_t VAR_8;
 int VAR_9;
 u8 VAR_10, VAR_11;
 struct wpabuf *VAR_12;
 const u8 *VAR_13;
 struct eap_ttls_data *VAR_14 = VAR_5;
 struct wpabuf VAR_15;

 VAR_13 = FUNC_2(VAR_4, &VAR_14->ssl, VAR_2, VAR_6,
     VAR_7, &VAR_8, &VAR_10);
 if (VAR_13 == ((void*)0))
  return ((void*)0);
 VAR_11 = FUNC_0(VAR_7);

 if (VAR_10 & VAR_0) {
  FUNC_7(VAR_3, "EAP-TTLS: Start (server ver=%d, own "
      "ver=%d)", VAR_10 & VAR_1,
      VAR_14->ttls_version);






  VAR_8 = 0;
 }

 FUNC_9(&VAR_15, VAR_13, VAR_8);

 VAR_12 = ((void*)0);
 if (FUNC_6(VAR_4->ssl_ctx, VAR_14->ssl.conn) &&
     !VAR_14->resuming) {
  VAR_9 = FUNC_4(VAR_4, VAR_14, VAR_6, VAR_11, &VAR_15, &VAR_12);
 } else {
  VAR_9 = FUNC_5(VAR_4, VAR_14, VAR_6, VAR_11,
       &VAR_15, &VAR_12);
 }

 FUNC_3(VAR_4, VAR_14, VAR_6);



 if (VAR_9 == 1) {
  FUNC_8(VAR_12);
  return FUNC_1(VAR_11, VAR_2,
           VAR_14->ttls_version);
 }
 return VAR_12;
}
