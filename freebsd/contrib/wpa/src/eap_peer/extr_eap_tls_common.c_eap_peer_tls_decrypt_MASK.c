
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_ssl_data {int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (struct eap_ssl_data*,struct wpabuf const*,int*) ;
 int FUNC_1 (struct eap_ssl_data*) ;
 struct wpabuf* FUNC_2 (int ,int ,struct wpabuf const*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct eap_sm *VAR_1, struct eap_ssl_data *VAR_2,
    const struct wpabuf *VAR_3,
    struct wpabuf **VAR_4)
{
 const struct wpabuf *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_6);
 if (VAR_5 == ((void*)0))
  return VAR_6 ? 1 : -1;

 *VAR_4 = FUNC_2(VAR_2->ssl_ctx, VAR_2->conn, VAR_5);
 FUNC_1(VAR_2);
 if (*VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, "SSL: Failed to decrypt Phase 2 data");
  return -1;
 }
 return 0;
}
