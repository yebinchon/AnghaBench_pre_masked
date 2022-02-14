
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct eap_ssl_data {int tls_out_limit; scalar_t__ phase2; int * conn; struct eap_sm* eap; } ;
struct eap_sm {unsigned int tls_flags; scalar_t__ fragment_size; int * ssl_ctx; int tls_test_flags; scalar_t__ init_phase2; } ;
typedef int session_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct eap_sm*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int,unsigned int,scalar_t__*,int) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct eap_sm *VAR_5, struct eap_ssl_data *VAR_6,
       int VAR_7, int VAR_8)
{
 u8 VAR_9[8];
 unsigned int VAR_10 = VAR_5->tls_flags;

 if (VAR_5->ssl_ctx == ((void*)0)) {
  FUNC_6(VAR_1, "TLS context not initialized - cannot use TLS-based EAP method");
  return -1;
 }

 VAR_6->eap = VAR_5;
 VAR_6->phase2 = VAR_5->init_phase2;

 VAR_6->conn = FUNC_2(VAR_5->ssl_ctx);
 if (VAR_6->conn == ((void*)0)) {
  FUNC_6(VAR_2, "SSL: Failed to initialize new TLS "
      "connection");
  return -1;
 }
 if (VAR_8 != VAR_0)
  VAR_10 |= VAR_3;
 FUNC_0(VAR_9, "hostapd", 7);
 VAR_9[7] = (u8) VAR_8;
 if (FUNC_5(VAR_5->ssl_ctx, VAR_6->conn, VAR_7,
          VAR_10, VAR_9,
          sizeof(VAR_9))) {
  FUNC_6(VAR_2, "SSL: Failed to configure verification "
      "of TLS peer certificate");
  FUNC_1(VAR_5->ssl_ctx, VAR_6->conn);
  VAR_6->conn = ((void*)0);
  return -1;
 }

 VAR_6->tls_out_limit = VAR_5->fragment_size > 0 ? VAR_5->fragment_size : 1398;
 if (VAR_6->phase2) {



  if (VAR_6->tls_out_limit > 100)
   VAR_6->tls_out_limit -= 100;
 }
 return 0;
}
