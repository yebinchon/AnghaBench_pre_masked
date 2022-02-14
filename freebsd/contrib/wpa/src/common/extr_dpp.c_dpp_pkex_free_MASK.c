
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_pkex {int exchange_resp; int exchange_req; int peer_bootstrap_key; int y; int x; struct dpp_pkex* code; struct dpp_pkex* identifier; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dpp_pkex*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct dpp_pkex *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->identifier);
 FUNC_1(VAR_0->code);
 FUNC_0(VAR_0->x);
 FUNC_0(VAR_0->y);
 FUNC_0(VAR_0->peer_bootstrap_key);
 FUNC_2(VAR_0->exchange_req);
 FUNC_2(VAR_0->exchange_resp);
 FUNC_1(VAR_0);
}
