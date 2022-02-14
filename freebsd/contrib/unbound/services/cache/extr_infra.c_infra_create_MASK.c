
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct infra_key {int dummy; } ;
struct infra_data {int dummy; } ;
struct infra_cache {void* client_ip_rates; void* domain_rates; int host_ttl; void* hosts; } ;
struct config_file {int infra_cache_numhosts; size_t ratelimit_size; size_t ip_ratelimit_size; int ip_ratelimit_slabs; int ip_ratelimit; int ratelimit_slabs; int ratelimit; int host_ttl; int infra_cache_slabs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct infra_cache*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct infra_cache*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct infra_cache*,struct config_file*) ;
 void* FUNC_4 (int ,int ,size_t,int *,int *,int *,int *,int *) ;

struct infra_cache*
FUNC_5(struct config_file* VAR_16)
{
 struct infra_cache* VAR_17 = (struct infra_cache*)FUNC_0(1,
  sizeof(struct infra_cache));
 size_t VAR_18 = VAR_16->infra_cache_numhosts * (sizeof(struct infra_key)+
  sizeof(struct infra_data)+VAR_0);
 VAR_17->hosts = FUNC_4(VAR_16->infra_cache_slabs,
  VAR_1, VAR_18, &VAR_7, &VAR_2,
  &VAR_4, &VAR_3, ((void*)0));
 if(!VAR_17->hosts) {
  FUNC_1(VAR_17);
  return ((void*)0);
 }
 VAR_17->host_ttl = VAR_16->host_ttl;
 VAR_5 = VAR_16->ratelimit;
 VAR_17->domain_rates = FUNC_4(VAR_16->ratelimit_slabs,
  VAR_1, VAR_16->ratelimit_size,
  &VAR_15, &VAR_12, &VAR_14,
  &VAR_13, ((void*)0));
 if(!VAR_17->domain_rates) {
  FUNC_2(VAR_17);
  return ((void*)0);
 }

 if(!FUNC_3(VAR_17, VAR_16)) {
  FUNC_2(VAR_17);
  return ((void*)0);
 }
 VAR_6 = VAR_16->ip_ratelimit;
 VAR_17->client_ip_rates = FUNC_4(VAR_16->ip_ratelimit_slabs,
     VAR_1, VAR_16->ip_ratelimit_size, &VAR_11,
     &VAR_8, &VAR_10, &VAR_9, ((void*)0));
 if(!VAR_17->client_ip_rates) {
  FUNC_2(VAR_17);
  return ((void*)0);
 }
 return VAR_17;
}
