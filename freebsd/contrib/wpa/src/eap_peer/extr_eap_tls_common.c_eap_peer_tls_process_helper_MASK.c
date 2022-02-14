
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ssl_data {int tls_v13; struct wpabuf const* tls_out; int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;
typedef int buf ;
typedef int EapType ;


 int VAR_0 ;
 int FUNC_0 (struct eap_ssl_data*) ;
 int FUNC_1 (struct eap_sm*,struct eap_ssl_data*,struct wpabuf const*,struct wpabuf**) ;
 int FUNC_2 (struct eap_ssl_data*,int ,int,int ,int,struct wpabuf**) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,char*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct wpabuf const*) ;
 scalar_t__ FUNC_8 (struct wpabuf const*) ;

int FUNC_9(struct eap_sm *VAR_1, struct eap_ssl_data *VAR_2,
    EapType VAR_3, int VAR_4,
    u8 VAR_5, const struct wpabuf *VAR_6,
    struct wpabuf **VAR_7)
{
 int VAR_8 = 0;

 *VAR_7 = ((void*)0);

 if (VAR_2->tls_out && FUNC_8(VAR_2->tls_out) > 0 &&
     FUNC_8(VAR_6) > 0) {
  FUNC_6(VAR_0, "SSL: Received non-ACK when output "
      "fragments are waiting to be sent out");
  return -1;
 }

 if (VAR_2->tls_out == ((void*)0) || FUNC_8(VAR_2->tls_out) == 0) {




  int VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_7);
  char VAR_10[20];

  if (VAR_9) {




   return VAR_9;
  }






  if (FUNC_5(VAR_2->ssl_ctx, VAR_2->conn,
        VAR_10, sizeof(VAR_10)) == 0) {
   FUNC_6(VAR_0, "SSL: Using TLS version %s", VAR_10);
   VAR_2->tls_v13 = FUNC_3(VAR_10, "TLSv1.3") == 0;
  }
 }

 if (VAR_2->tls_out == ((void*)0)) {





  FUNC_0(VAR_2);
  return -1;
 }

 if (FUNC_4(VAR_2->ssl_ctx, VAR_2->conn)) {

  FUNC_6(VAR_0, "SSL: Failed - tls_out available to "
      "report error (len=%u)",
      (unsigned int) FUNC_8(VAR_2->tls_out));
  VAR_8 = -1;

  if (FUNC_8(VAR_2->tls_out) == 0) {
   FUNC_7(VAR_2->tls_out);
   VAR_2->tls_out = ((void*)0);
   return -1;
  }
 }

 if (FUNC_8(VAR_2->tls_out) == 0) {





  FUNC_6(VAR_0, "SSL: No data to be sent out");
  FUNC_7(VAR_2->tls_out);
  VAR_2->tls_out = ((void*)0);
  return 1;
 }


 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8,
          VAR_7);
}
