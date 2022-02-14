
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct infra_key {int dummy; } ;
struct infra_data {int dummy; } ;
struct infra_cache {int domain_limits; int client_ip_rates; int domain_rates; int hosts; int host_ttl; } ;
struct config_file {int infra_cache_numhosts; size_t ratelimit_size; size_t ip_ratelimit_size; int ip_ratelimit_slabs; int ratelimit_slabs; int infra_cache_slabs; int ip_ratelimit; int ratelimit; int host_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct infra_cache* FUNC_0 (struct config_file*) ;
 int FUNC_1 (struct infra_cache*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct infra_cache*,struct config_file*) ;
 int FUNC_3 (int ,size_t,int ) ;
 int FUNC_4 (int *,int ,int *) ;

struct infra_cache*
FUNC_5(struct infra_cache* VAR_4, struct config_file* VAR_5)
{
 size_t VAR_6;
 if(!VAR_4)
  return FUNC_0(VAR_5);
 VAR_4->host_ttl = VAR_5->host_ttl;
 VAR_2 = VAR_5->ratelimit;
 VAR_3 = VAR_5->ip_ratelimit;
 VAR_6 = VAR_5->infra_cache_numhosts * (sizeof(struct infra_key)+
  sizeof(struct infra_data)+VAR_0);



 if(!FUNC_3(VAR_4->hosts, VAR_6, VAR_5->infra_cache_slabs) ||
    !FUNC_3(VAR_4->domain_rates, VAR_5->ratelimit_size,
     VAR_5->ratelimit_slabs) ||
    !FUNC_3(VAR_4->client_ip_rates, VAR_5->ip_ratelimit_size,
     VAR_5->ip_ratelimit_slabs)) {
  FUNC_1(VAR_4);
  VAR_4 = FUNC_0(VAR_5);
 } else {

  FUNC_4(&VAR_4->domain_limits, VAR_1,
   ((void*)0));
  if(!FUNC_2(VAR_4, VAR_5)) {
   FUNC_1(VAR_4);
   return ((void*)0);
  }
 }
 return VAR_4;
}
