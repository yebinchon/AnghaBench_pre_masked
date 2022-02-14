
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int flags; } ;
struct eap_ssl_data {int * conn; int ssl_ctx; } ;
struct eap_sm {void* ignore; } ;
struct eap_peer_config {int ocsp; int * pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,struct tls_connection_params*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_8,
       struct eap_ssl_data *VAR_9,
       struct eap_peer_config *VAR_10,
       struct tls_connection_params *VAR_11)
{
 int VAR_12;

 if (VAR_10->ocsp)
  VAR_11->flags |= VAR_1;
 if (VAR_10->ocsp >= 2)
  VAR_11->flags |= VAR_2;
 if (VAR_10->ocsp == 3)
  VAR_11->flags |= VAR_3;
 VAR_9->conn = FUNC_3(VAR_9->ssl_ctx);
 if (VAR_9->conn == ((void*)0)) {
  FUNC_5(VAR_0, "SSL: Failed to initialize new TLS "
      "connection");
  return -1;
 }

 VAR_12 = FUNC_4(VAR_9->ssl_ctx, VAR_9->conn, VAR_11);
 if (VAR_12 == VAR_4) {





  FUNC_5(VAR_0,
      "TLS: Bad PIN provided, requesting a new one");
  FUNC_1(VAR_10->pin);
  VAR_10->pin = ((void*)0);
  FUNC_0(VAR_8);
  VAR_8->ignore = VAR_7;
 } else if (VAR_12 == VAR_5) {
  FUNC_5(VAR_0, "TLS: Failed to initialize engine");
 } else if (VAR_12 == VAR_6) {
  FUNC_5(VAR_0, "TLS: Failed to load private key");
  VAR_8->ignore = VAR_7;
 }
 if (VAR_12) {
  FUNC_5(VAR_0, "TLS: Failed to set TLS connection "
      "parameters");
  FUNC_2(VAR_9->ssl_ctx, VAR_9->conn);
  VAR_9->conn = ((void*)0);
  return -1;
 }

 return 0;
}
