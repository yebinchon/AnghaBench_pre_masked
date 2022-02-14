
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daemon_remote {int ctx; } ;
struct config_file {int server_key_file; int server_cert_file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int VAR_2 ;
 char* FUNC_9 (int ,struct config_file*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static int
FUNC_16(struct daemon_remote* VAR_3, struct config_file* VAR_4)
{
 char* VAR_5;
 char* VAR_6;
 VAR_3->ctx = FUNC_2(FUNC_8());
 if(!VAR_3->ctx) {
  FUNC_13("could not SSL_CTX_new");
  return 0;
 }
 if(!FUNC_11(VAR_3->ctx)) {
  return 0;
 }

 VAR_5 = FUNC_9(VAR_4->server_cert_file, VAR_4, 1);
 VAR_6 = FUNC_9(VAR_4->server_key_file, VAR_4, 1);
 if(!VAR_5 || !VAR_6) {
  FUNC_14("out of memory in remote control fname");
  goto setup_error;
 }
 FUNC_15(VAR_2, "setup SSL certificates");
 if (!FUNC_6(VAR_3->ctx,VAR_5)) {
  FUNC_14("Error for server-cert-file: %s", VAR_5);
  FUNC_13("Error in SSL_CTX use_certificate_chain_file");
  goto setup_error;
 }
 if(!FUNC_5(VAR_3->ctx,VAR_6,VAR_0)) {
  FUNC_14("Error for server-key-file: %s", VAR_6);
  FUNC_13("Error in SSL_CTX use_PrivateKey_file");
  goto setup_error;
 }
 if(!FUNC_0(VAR_3->ctx)) {
  FUNC_14("Error for server-key-file: %s", VAR_6);
  FUNC_13("Error in SSL_CTX check_private_key");
  goto setup_error;
 }
 FUNC_12(VAR_3->ctx);
 if(!FUNC_1(VAR_3->ctx, VAR_5, ((void*)0))) {
  FUNC_13("Error setting up SSL_CTX verify locations");
 setup_error:
  FUNC_10(VAR_5);
  FUNC_10(VAR_6);
  return 0;
 }
 FUNC_3(VAR_3->ctx, FUNC_7(VAR_5));
 FUNC_4(VAR_3->ctx, VAR_1, ((void*)0));
 FUNC_10(VAR_5);
 FUNC_10(VAR_6);
 return 1;
}
