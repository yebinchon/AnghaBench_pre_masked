
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nonce_cache_key {int client_publickey; int magic_query; int nonce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

int
FUNC_1(void *VAR_3, void *VAR_4)
{
    struct nonce_cache_key *VAR_5 = VAR_3, *VAR_6 = VAR_4;
    return
        FUNC_0(
            VAR_5->nonce,
            VAR_6->nonce,
            VAR_1) != 0 ||
        FUNC_0(
            VAR_5->magic_query,
            VAR_6->magic_query,
            VAR_0) != 0 ||
        FUNC_0(
            VAR_5->client_publickey, VAR_6->client_publickey,
            VAR_2) != 0;
}
