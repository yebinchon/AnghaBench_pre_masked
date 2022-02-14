
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_ssl_data {int conn; int ssl_ctx; struct wpabuf* tls_out; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct wpabuf* FUNC_1 (struct eap_ssl_data*,struct wpabuf const*,int*) ;
 int FUNC_2 (struct eap_ssl_data*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct wpabuf* FUNC_5 (int ,int ,struct wpabuf const*,struct wpabuf**) ;
 int FUNC_6 (int ,char*,struct wpabuf*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_9(struct eap_sm *VAR_2, struct eap_ssl_data *VAR_3,
     const struct wpabuf *VAR_4,
     struct wpabuf **VAR_5)
{
 const struct wpabuf *VAR_6;
 int VAR_7;
 struct wpabuf *VAR_8;

 VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_7);
 if (VAR_6 == ((void*)0))
  return VAR_7 ? 1 : -1;


 if (VAR_3->tls_out) {

  FUNC_7(VAR_0, "SSL: eap_tls_process_input - pending "
      "tls_out data even though tls_out_len = 0");
  FUNC_8(VAR_3->tls_out);
  FUNC_0(VAR_3->tls_out == ((void*)0));
 }
 VAR_8 = ((void*)0);
 VAR_3->tls_out = FUNC_5(VAR_3->ssl_ctx, VAR_3->conn,
       VAR_6, &VAR_8);

 FUNC_2(VAR_3);

 if (VAR_8 &&
     FUNC_3(VAR_3->ssl_ctx, VAR_3->conn) &&
     !FUNC_4(VAR_3->ssl_ctx, VAR_3->conn)) {
  FUNC_6(VAR_1, "SSL: Application data",
        VAR_8);
  *VAR_5 = VAR_8;
  return 2;
 }

 FUNC_8(VAR_8);

 return 0;
}
