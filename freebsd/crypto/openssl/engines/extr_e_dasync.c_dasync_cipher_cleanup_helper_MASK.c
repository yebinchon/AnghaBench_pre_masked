
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasync_pipeline_ctx {int inner_cipher_data; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(EVP_CIPHER_CTX *VAR_0,
                                        const EVP_CIPHER *VAR_1)
{
    struct dasync_pipeline_ctx *VAR_2 =
        (struct dasync_pipeline_ctx *)FUNC_0(VAR_0);

    FUNC_2(VAR_2->inner_cipher_data,
                       FUNC_1(VAR_1));

    return 1;
}
