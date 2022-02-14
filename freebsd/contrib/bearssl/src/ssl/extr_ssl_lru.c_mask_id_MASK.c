
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index_key; int hash; } ;
typedef TYPE_1__ br_ssl_session_cache_lru ;
typedef int br_hmac_key_context ;
typedef int br_hmac_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *,unsigned char const*,int ) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int ) ;

__attribute__((used)) static void
FUNC_5(br_ssl_session_cache_lru *VAR_1,
 const unsigned char *VAR_2, unsigned char *VAR_3)
{
 br_hmac_key_context VAR_4;
 br_hmac_context VAR_5;

 FUNC_4(VAR_3, VAR_2, VAR_0);
 FUNC_1(&VAR_4, VAR_1->hash, VAR_1->index_key, sizeof VAR_1->index_key);
 FUNC_0(&VAR_5, &VAR_4, VAR_0);
 FUNC_3(&VAR_5, VAR_2, VAR_0);
 FUNC_2(&VAR_5, VAR_3);
}
