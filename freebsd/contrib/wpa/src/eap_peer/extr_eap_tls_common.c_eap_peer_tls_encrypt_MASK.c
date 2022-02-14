
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ssl_data {int * tls_out; int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;
typedef int EapType ;


 int VAR_0 ;
 int FUNC_0 (struct eap_ssl_data*) ;
 int FUNC_1 (struct eap_ssl_data*,int ,int,int ,int ,struct wpabuf**) ;
 int * FUNC_2 (int ,int ,struct wpabuf const*) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 scalar_t__ FUNC_4 (struct wpabuf const*) ;

int FUNC_5(struct eap_sm *VAR_1, struct eap_ssl_data *VAR_2,
    EapType VAR_3, int VAR_4, u8 VAR_5,
    const struct wpabuf *VAR_6,
    struct wpabuf **VAR_7)
{
 if (VAR_6) {
  FUNC_0(VAR_2);
  VAR_2->tls_out = FUNC_2(VAR_2->ssl_ctx,
             VAR_2->conn, VAR_6);
  if (VAR_2->tls_out == ((void*)0)) {
   FUNC_3(VAR_0, "SSL: Failed to encrypt Phase 2 "
       "data (in_len=%lu)",
       (unsigned long) FUNC_4(VAR_6));
   FUNC_0(VAR_2);
   return -1;
  }
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 0,
          VAR_7);
}
