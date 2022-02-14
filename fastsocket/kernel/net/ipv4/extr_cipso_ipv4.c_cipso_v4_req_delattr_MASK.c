
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock {int dummy; } ;
struct ip_options {scalar_t__ cipso; } ;
struct inet_request_sock {struct ip_options* opt; } ;


 int FUNC_0 (struct ip_options**) ;
 struct inet_request_sock* FUNC_1 (struct request_sock*) ;

void FUNC_2(struct request_sock *VAR_0)
{
 struct ip_options *VAR_1;
 struct inet_request_sock *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = VAR_2->opt;
 if (VAR_1 == ((void*)0) || VAR_1->cipso == 0)
  return;

 FUNC_0(&VAR_2->opt);
}
