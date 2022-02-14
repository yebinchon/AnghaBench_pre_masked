
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md5_sha1_ctx {int sha1; int md5; } ;
typedef int sha1tmp ;
typedef int padtmp ;
typedef int md5tmp ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 struct md5_sha1_ctx* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int *) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned char*,int,int) ;
 scalar_t__ FUNC_8 (int *,void*,int) ;

__attribute__((used)) static int FUNC_9(EVP_MD_CTX *VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
    unsigned char VAR_7[48];
    unsigned char VAR_8[VAR_1];
    unsigned char VAR_9[VAR_2];
    struct md5_sha1_ctx *VAR_10;

    if (VAR_4 != VAR_0)
        return -2;

    if (VAR_3 == ((void*)0))
        return 0;

    VAR_10 = FUNC_0(VAR_3);


    if (VAR_5 != 48)
        return 0;





    if (FUNC_8(VAR_3, VAR_6, VAR_5) <= 0)
        return 0;


    FUNC_7(VAR_7, 0x36, sizeof(VAR_7));

    if (!FUNC_2(&VAR_10->md5, VAR_7, sizeof(VAR_7)))
        return 0;

    if (!FUNC_1(VAR_8, &VAR_10->md5))
        return 0;

    if (!FUNC_5(&VAR_10->sha1, VAR_7, 40))
        return 0;

    if (!FUNC_4(VAR_9, &VAR_10->sha1))
        return 0;



    if (!FUNC_6(VAR_3))
        return 0;

    if (FUNC_8(VAR_3, VAR_6, VAR_5) <= 0)
        return 0;


    FUNC_7(VAR_7, 0x5c, sizeof(VAR_7));

    if (!FUNC_2(&VAR_10->md5, VAR_7, sizeof(VAR_7)))
        return 0;

    if (!FUNC_2(&VAR_10->md5, VAR_8, sizeof(VAR_8)))
        return 0;

    if (!FUNC_5(&VAR_10->sha1, VAR_7, 40))
        return 0;

    if (!FUNC_5(&VAR_10->sha1, VAR_9, sizeof(VAR_9)))
        return 0;



    FUNC_3(VAR_8, sizeof(VAR_8));
    FUNC_3(VAR_9, sizeof(VAR_9));

    return 1;

}
