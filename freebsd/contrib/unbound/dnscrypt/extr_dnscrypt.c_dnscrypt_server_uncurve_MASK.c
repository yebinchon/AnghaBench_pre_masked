
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sldns_buffer {int dummy; } ;
struct lruhash_entry {int lock; int * data; } ;
struct dnscrypt_query_header {int * nonce; int publickey; } ;
struct dnsc_env {int shared_secrets_cache; int shared_secrets_cache_lock; int num_query_dnscrypt_secret_missed_cache; int nonces_cache_lock; int nonces_cache; int num_query_dnscrypt_replay; } ;
struct TYPE_5__ {int* es_version; TYPE_1__* keypair; int magic_query; } ;
typedef TYPE_2__ dnsccert ;
struct TYPE_4__ {int crypt_secretkey; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int * const,int * const,int,int *,int *) ;
 scalar_t__ FUNC_3 (int * const,int * const,int,int *,int *) ;
 int FUNC_4 (int ,int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 struct lruhash_entry* FUNC_6 (int ,int *,int ,int ,int ) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (int *,int,int ,int ) ;
 struct lruhash_entry* FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,int ,int) ;
 int* FUNC_15 (struct sldns_buffer*,size_t) ;
 int * FUNC_16 (struct sldns_buffer*) ;
 size_t FUNC_17 (struct sldns_buffer*) ;
 int FUNC_18 (struct sldns_buffer*,size_t) ;
 int FUNC_19 (struct sldns_buffer*,int ) ;

__attribute__((used)) static int
FUNC_20(struct dnsc_env* VAR_6,
                        const dnsccert *VAR_7,
                        uint8_t VAR_8[VAR_4],
                        uint8_t VAR_9[VAR_3],
                        struct sldns_buffer* VAR_10)
{
    size_t VAR_11 = FUNC_17(VAR_10);
    uint8_t *const VAR_12 = FUNC_16(VAR_10);
    uint8_t VAR_13[VAR_5];
    struct dnscrypt_query_header *VAR_14;

    uint8_t VAR_15[VAR_2];
    struct lruhash_entry* VAR_16;
    uint32_t VAR_17;

    uint32_t VAR_18;

    if (VAR_11 <= VAR_1) {
        return -1;
    }

    VAR_14 = (struct dnscrypt_query_header *)VAR_12;


    VAR_18 = FUNC_5(
        VAR_14->nonce,
        VAR_7->magic_query,
        VAR_14->publickey);

    FUNC_10(&VAR_6->nonces_cache_lock);
    VAR_16 = FUNC_6(
        VAR_6->nonces_cache,
        VAR_14->nonce,
        VAR_7->magic_query,
        VAR_14->publickey,
        VAR_18);

    if(VAR_16) {
        FUNC_12(&VAR_16->lock);
        VAR_6->num_query_dnscrypt_replay++;
        FUNC_11(&VAR_6->nonces_cache_lock);
        return -1;
    }

    FUNC_4(
        VAR_6->nonces_cache,
        VAR_14->nonce,
        VAR_7->magic_query,
        VAR_14->publickey,
        VAR_18);
    FUNC_11(&VAR_6->nonces_cache_lock);


    VAR_17 = FUNC_8(VAR_15,
                                         VAR_7->es_version[1],
                                         VAR_14->publickey,
                                         VAR_7->keypair->crypt_secretkey);
    VAR_16 = FUNC_9(VAR_6->shared_secrets_cache,
                                       VAR_15,
                                       VAR_17);

    if(!VAR_16) {
        FUNC_10(&VAR_6->shared_secrets_cache_lock);
        VAR_6->num_query_dnscrypt_secret_missed_cache++;
        FUNC_11(&VAR_6->shared_secrets_cache_lock);
        if(VAR_7->es_version[1] == 2) {







            return -1;

    } else {
        if (FUNC_0(VAR_9,
                                VAR_14->publickey,
                                VAR_7->keypair->crypt_secretkey) != 0) {
            return -1;
        }
    }

    FUNC_7(VAR_6->shared_secrets_cache,
                                    VAR_15,
                                    VAR_17,
                                    VAR_9);
    } else {

        FUNC_13(VAR_9, VAR_16->data, VAR_3);
        FUNC_12(&VAR_16->lock);
    }

    FUNC_13(VAR_13, VAR_14->nonce, VAR_4);
    FUNC_14(VAR_13 + VAR_4, 0, VAR_4);

    if(VAR_7->es_version[1] == 2) {
        return -1;

    } else {
        if (FUNC_3
            (VAR_12,
             VAR_12 + VAR_0,
             VAR_11 - VAR_0, VAR_13,
             VAR_9) != 0) {
            return -1;
        }
    }

    VAR_11 -= VAR_1;

    while (*FUNC_15(VAR_10, --VAR_11) == 0)
        ;

    if (*FUNC_15(VAR_10, VAR_11) != 0x80) {
        return -1;
    }

    FUNC_13(VAR_8, VAR_13, VAR_4);

    FUNC_19(VAR_10, 0);
    FUNC_18(VAR_10, VAR_11);

    return 0;
}
