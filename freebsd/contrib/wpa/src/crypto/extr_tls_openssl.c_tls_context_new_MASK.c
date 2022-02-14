
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int cert_in_cb; int cb_ctx; int event_cb; } ;
struct tls_config {int cert_in_cb; int cb_ctx; int event_cb; } ;


 struct tls_context* FUNC_0 (int) ;

__attribute__((used)) static struct tls_context * FUNC_1(const struct tls_config *VAR_0)
{
 struct tls_context *VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 if (VAR_0) {
  VAR_1->event_cb = VAR_0->event_cb;
  VAR_1->cb_ctx = VAR_0->cb_ctx;
  VAR_1->cert_in_cb = VAR_0->cert_in_cb;
 }
 return VAR_1;
}
