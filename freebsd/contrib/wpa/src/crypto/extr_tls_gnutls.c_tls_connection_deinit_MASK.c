
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {struct tls_connection* domain_match; struct tls_connection* suffix_match; int pull_buf; int push_buf; struct tls_connection* pre_shared_secret; int session; int xcred; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tls_connection*) ;
 int FUNC_3 (int ) ;

void FUNC_4(void *VAR_0, struct tls_connection *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1->xcred);
 FUNC_1(VAR_1->session);
 FUNC_2(VAR_1->pre_shared_secret);
 FUNC_3(VAR_1->push_buf);
 FUNC_3(VAR_1->pull_buf);
 FUNC_2(VAR_1->suffix_match);
 FUNC_2(VAR_1->domain_match);
 FUNC_2(VAR_1);
}
