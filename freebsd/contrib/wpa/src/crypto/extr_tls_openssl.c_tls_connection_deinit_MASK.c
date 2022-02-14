
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {struct tls_connection* session_ticket; struct tls_connection* check_cert_subject; struct tls_connection* domain_match; struct tls_connection* suffix_match; struct tls_connection* altsubject_match; struct tls_connection* subject_match; int ssl; scalar_t__ success_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tls_connection*) ;
 int FUNC_4 (struct tls_connection*) ;

void FUNC_5(void *VAR_0, struct tls_connection *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->success_data) {




  FUNC_1(VAR_1->ssl, 1);
  FUNC_2(VAR_1->ssl);
 }
 FUNC_0(VAR_1->ssl);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1->subject_match);
 FUNC_3(VAR_1->altsubject_match);
 FUNC_3(VAR_1->suffix_match);
 FUNC_3(VAR_1->domain_match);
 FUNC_3(VAR_1->check_cert_subject);
 FUNC_3(VAR_1->session_ticket);
 FUNC_3(VAR_1);
}
