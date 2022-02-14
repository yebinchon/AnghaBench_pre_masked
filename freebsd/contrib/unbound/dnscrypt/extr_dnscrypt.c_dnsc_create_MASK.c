
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnsc_env {int num_query_dnscrypt_replay; int nonces_cache_lock; int nonces_cache; int num_query_dnscrypt_secret_missed_cache; int shared_secrets_cache_lock; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

struct dnsc_env *
FUNC_6(void)
{
 struct dnsc_env *VAR_1;



 if (FUNC_4() == -1) {
  FUNC_1("dnsc_create: could not initialize libsodium.");
 }
 VAR_1 = (struct dnsc_env *) FUNC_0(1, sizeof(struct dnsc_env));
 FUNC_2(&VAR_1->shared_secrets_cache_lock);
 FUNC_3(&VAR_1->shared_secrets_cache_lock,
                 &VAR_1->num_query_dnscrypt_secret_missed_cache,
                 sizeof(VAR_1->num_query_dnscrypt_secret_missed_cache));
 FUNC_2(&VAR_1->nonces_cache_lock);
 FUNC_3(&VAR_1->nonces_cache_lock,
                 &VAR_1->nonces_cache,
                 sizeof(VAR_1->nonces_cache));
 FUNC_3(&VAR_1->nonces_cache_lock,
                 &VAR_1->num_query_dnscrypt_replay,
                 sizeof(VAR_1->num_query_dnscrypt_replay));

 return VAR_1;
}
