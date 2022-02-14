
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_global {int server_cred; scalar_t__ server; int cert_in_cb; int cb_ctx; int event_cb; } ;
struct tls_connection {int * server; int * client; struct tls_global* global; } ;


 int FUNC_0 (struct tls_connection*) ;
 struct tls_connection* FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int * FUNC_4 (int ) ;

struct tls_connection * FUNC_5(void *VAR_0)
{
 struct tls_connection *VAR_1;
 struct tls_global *VAR_2 = VAR_0;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_1->global = VAR_2;
 return VAR_1;
}
