
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md5_sha1_ctx {int sha1; int md5; } ;
typedef int EVP_MD_CTX ;


 struct md5_sha1_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(EVP_MD_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
    struct md5_sha1_ctx *VAR_3 = FUNC_0(VAR_0);
    if (!FUNC_1(&VAR_3->md5, VAR_1, VAR_2))
        return 0;
    return FUNC_2(&VAR_3->sha1, VAR_1, VAR_2);
}
