
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_bootstrap_info {int pubkey; struct dpp_bootstrap_info* info; struct dpp_bootstrap_info* uri; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dpp_bootstrap_info*) ;

void FUNC_2(struct dpp_bootstrap_info *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_1(VAR_0->uri);
 FUNC_1(VAR_0->info);
 FUNC_0(VAR_0->pubkey);
 FUNC_1(VAR_0);
}
