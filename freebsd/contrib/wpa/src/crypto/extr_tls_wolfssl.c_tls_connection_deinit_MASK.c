
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {struct tls_connection* domain_match; struct tls_connection* suffix_match; struct tls_connection* alt_subject_match; struct tls_connection* subject_match; int ssl; } ;


 int VAR_0 ;
 int FUNC_0 (struct tls_connection*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(void *VAR_1, struct tls_connection *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_2(VAR_0, "SSL: connection deinit");


 FUNC_1(VAR_2->ssl);
 FUNC_0(VAR_2->subject_match);
 FUNC_0(VAR_2->alt_subject_match);
 FUNC_0(VAR_2->suffix_match);
 FUNC_0(VAR_2->domain_match);


 FUNC_0(VAR_2);
}
