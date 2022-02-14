
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct slabhash {int dummy; } ;
struct TYPE_2__ {int hash; } ;
struct nonce_cache_key {int client_publickey; int magic_query; int nonce; TYPE_1__ entry; } ;
struct lruhash_entry {int dummy; } ;
typedef int k ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct nonce_cache_key*,int ,int) ;
 struct lruhash_entry* FUNC_2 (struct slabhash*,int ,struct nonce_cache_key*,int ) ;

__attribute__((used)) static struct lruhash_entry*
FUNC_3(struct slabhash* VAR_3,
                   const uint8_t VAR_4[VAR_1],
                   const uint8_t VAR_5[VAR_0],
                   const uint8_t VAR_6[VAR_2],
                   uint32_t VAR_7)
{
    struct nonce_cache_key VAR_8;
    FUNC_1(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.entry.hash = VAR_7;
    FUNC_0(VAR_8.nonce, VAR_4, VAR_1);
    FUNC_0(VAR_8.magic_query, VAR_5, VAR_0);
    FUNC_0(VAR_8.client_publickey, VAR_6, VAR_2);

    return FUNC_2(VAR_3, VAR_7, &VAR_8, 0);
}
