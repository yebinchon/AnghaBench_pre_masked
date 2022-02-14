
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ssl_data {int tls_v13; int conn; int * tls_out; int tls_in; } ;
struct eap_sm {int ssl_ctx; scalar_t__ serial_num; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct eap_sm *VAR_2, struct eap_ssl_data *VAR_3)
{
 char VAR_4[20];

 if (VAR_3->tls_out) {

  FUNC_7(VAR_1, "SSL: pending tls_out data when "
      "processing new message");
  FUNC_8(VAR_3->tls_out);
  FUNC_0(VAR_3->tls_out == ((void*)0));
 }

 VAR_3->tls_out = FUNC_5(VAR_2->ssl_ctx,
       VAR_3->conn,
       VAR_3->tls_in, ((void*)0));
 if (VAR_3->tls_out == ((void*)0)) {
  FUNC_7(VAR_1, "SSL: TLS processing failed");
  return -1;
 }
 if (FUNC_3(VAR_2->ssl_ctx, VAR_3->conn)) {

  FUNC_7(VAR_0, "SSL: Failed - tls_out available to "
      "report error");
  return -1;
 }

 if (FUNC_6(VAR_2->ssl_ctx, VAR_3->conn, VAR_4, sizeof(VAR_4)) == 0) {
  FUNC_7(VAR_0, "SSL: Using TLS version %s", VAR_4);
  VAR_3->tls_v13 = FUNC_1(VAR_4, "TLSv1.3") == 0;
 }

 if (!VAR_2->serial_num &&
     FUNC_2(VAR_2->ssl_ctx, VAR_3->conn))
  VAR_2->serial_num = FUNC_4(VAR_2->ssl_ctx,
        VAR_3->conn);

 return 0;
}
