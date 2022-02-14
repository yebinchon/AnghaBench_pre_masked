
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_data {scalar_t__ tls_session_lifetime; struct tls_data* check_cert_subject; struct tls_data* ocsp_stapling_response; struct tls_data* ca_cert; int * ssl; } ;
struct tls_context {scalar_t__ tls_session_lifetime; struct tls_context* check_cert_subject; struct tls_context* ocsp_stapling_response; struct tls_context* ca_cert; int * ssl; } ;
typedef int SSL_CTX ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 struct tls_data* FUNC_7 (int *) ;
 int FUNC_8 (struct tls_data*) ;
 struct tls_data* VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_9(void *VAR_2)
{
 struct tls_data *VAR_3 = VAR_2;
 SSL_CTX *VAR_4 = VAR_3->ssl;
 struct tls_context *VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 != VAR_0)
  FUNC_8(VAR_5);
 if (VAR_3->tls_session_lifetime > 0)
  FUNC_5(VAR_4, 0);
 FUNC_8(VAR_3->ca_cert);
 FUNC_6(VAR_4);

 VAR_1--;
 if (VAR_1 == 0) {




  FUNC_1();

  FUNC_0();
  FUNC_3(((void*)0));
  FUNC_2();
  FUNC_4();

  FUNC_8(VAR_0->ocsp_stapling_response);
  VAR_0->ocsp_stapling_response = ((void*)0);
  FUNC_8(VAR_0);
  VAR_0 = ((void*)0);
 }

 FUNC_8(VAR_3->check_cert_subject);
 FUNC_8(VAR_3);
}
