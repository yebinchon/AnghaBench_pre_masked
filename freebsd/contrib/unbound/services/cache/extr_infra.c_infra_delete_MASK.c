
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct infra_cache {int client_ip_rates; int domain_limits; int domain_rates; int hosts; } ;


 int VAR_0 ;
 int FUNC_0 (struct infra_cache*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;

void
FUNC_3(struct infra_cache* VAR_1)
{
 if(!VAR_1)
  return;
 FUNC_1(VAR_1->hosts);
 FUNC_1(VAR_1->domain_rates);
 FUNC_2(&VAR_1->domain_limits, VAR_0, ((void*)0));
 FUNC_1(VAR_1->client_ip_rates);
 FUNC_0(VAR_1);
}
