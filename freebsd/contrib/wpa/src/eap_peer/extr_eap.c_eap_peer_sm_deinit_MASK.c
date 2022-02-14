
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ ssl_ctx; scalar_t__ ssl_ctx2; } ;


 int FUNC_0 (struct eap_sm*,char*) ;
 int FUNC_1 (struct eap_sm*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct eap_sm *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0, "EAP deinit");
 FUNC_2(VAR_0);
 if (VAR_0->ssl_ctx2)
  FUNC_4(VAR_0->ssl_ctx2);
 FUNC_4(VAR_0->ssl_ctx);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
