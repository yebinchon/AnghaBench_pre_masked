
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_ssl_data {int conn; } ;
struct eap_sm {int ssl_ctx; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int ,int ,struct wpabuf const*) ;
 int FUNC_1 (int ,char*) ;

struct wpabuf * FUNC_2(struct eap_sm *VAR_1,
           struct eap_ssl_data *VAR_2,
           const struct wpabuf *VAR_3)
{
 struct wpabuf *VAR_4;

 VAR_4 = FUNC_0(VAR_1->ssl_ctx, VAR_2->conn,
         VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0, "SSL: Failed to encrypt Phase 2 data");
  return ((void*)0);
 }

 return VAR_4;
}
