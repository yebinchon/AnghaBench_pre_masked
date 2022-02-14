
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct slabhash {int dummy; } ;
struct TYPE_2__ {int * data; struct nonce_cache_key* key; int hash; int lock; } ;
struct nonce_cache_key {TYPE_1__ entry; int client_publickey; int magic_query; int nonce; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nonce_cache_key*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (struct slabhash*,int ,TYPE_1__*,int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct slabhash *VAR_3,
                        const uint8_t VAR_4[VAR_1],
                        const uint8_t VAR_5[VAR_0],
                        const uint8_t VAR_6[VAR_2],
                        uint32_t VAR_7)
{
    struct nonce_cache_key* VAR_8 =
        (struct nonce_cache_key*)FUNC_0(1, sizeof(*VAR_8));
    if(!VAR_8) {
        FUNC_1(VAR_8);
        return;
    }
    FUNC_2(&VAR_8->entry.lock);
    FUNC_3(VAR_8->nonce, VAR_4, VAR_1);
    FUNC_3(VAR_8->magic_query, VAR_5, VAR_0);
    FUNC_3(VAR_8->client_publickey, VAR_6, VAR_2);
    VAR_8->entry.hash = VAR_7;
    VAR_8->entry.key = VAR_8;
    VAR_8->entry.data = ((void*)0);
    FUNC_4(VAR_3,
                    VAR_7, &VAR_8->entry,
                    ((void*)0),
                    ((void*)0));
}
