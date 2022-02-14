
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnsc_env {int nonces_cache_lock; void* nonces_cache; void* shared_secrets_cache; int shared_secrets_cache_lock; int provider_name; int hash_key; } ;
struct config_file {int dnscrypt_nonce_cache_size; int dnscrypt_nonce_cache_slabs; int dnscrypt_shared_secret_cache_size; int dnscrypt_shared_secret_cache_slabs; int dnscrypt_provider; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dnsc_env*,struct config_file*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct dnsc_env*,struct config_file*) ;
 scalar_t__ FUNC_2 (struct dnsc_env*,struct config_file*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 void* FUNC_7 (int ,int ,int ,int ,int ,int ,int ,int *) ;

int
FUNC_8(struct dnsc_env *VAR_9, struct config_file *VAR_10)
{
    if(FUNC_1(VAR_9, VAR_10) <= 0) {
        FUNC_3("dnsc_apply_cfg: no cert file loaded");
    }
    if(FUNC_2(VAR_9, VAR_10) <= 0) {
        FUNC_3("dnsc_apply_cfg: no key file loaded");
    }
    FUNC_6(VAR_9->hash_key, sizeof VAR_9->hash_key);
    VAR_9->provider_name = VAR_10->dnscrypt_provider;

    if(FUNC_0(VAR_9, VAR_10) <= 0) {
        FUNC_3("dnsc_apply_cfg: could not load local data");
    }
    FUNC_4(&VAR_9->shared_secrets_cache_lock);
    VAR_9->shared_secrets_cache = FUNC_7(
        VAR_10->dnscrypt_shared_secret_cache_slabs,
        VAR_0,
        VAR_10->dnscrypt_shared_secret_cache_size,
        VAR_8,
        VAR_5,
        VAR_7,
        VAR_6,
        ((void*)0)
    );
    FUNC_5(&VAR_9->shared_secrets_cache_lock);
    if(!VAR_9->shared_secrets_cache){
        FUNC_3("dnsc_apply_cfg: could not create shared secrets cache.");
    }
    FUNC_4(&VAR_9->nonces_cache_lock);
    VAR_9->nonces_cache = FUNC_7(
        VAR_10->dnscrypt_nonce_cache_slabs,
        VAR_0,
        VAR_10->dnscrypt_nonce_cache_size,
        VAR_4,
        VAR_1,
        VAR_3,
        VAR_2,
        ((void*)0)
    );
    FUNC_5(&VAR_9->nonces_cache_lock);
    return 0;
}
