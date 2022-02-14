
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct infra_cache {scalar_t__ client_ip_rates; scalar_t__ domain_rates; scalar_t__ hosts; } ;


 size_t FUNC_0 (scalar_t__) ;

size_t
FUNC_1(struct infra_cache* VAR_0)
{
 size_t VAR_1 = sizeof(*VAR_0) + FUNC_0(VAR_0->hosts);
 if(VAR_0->domain_rates) VAR_1 += FUNC_0(VAR_0->domain_rates);
 if(VAR_0->client_ip_rates) VAR_1 += FUNC_0(VAR_0->client_ip_rates);

 return VAR_1;
}
