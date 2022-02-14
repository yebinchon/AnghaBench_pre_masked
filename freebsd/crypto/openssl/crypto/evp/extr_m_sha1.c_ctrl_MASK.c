
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sha1tmp ;
typedef int padtmp ;
typedef int SHA_CTX ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_5 (unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_6(EVP_MD_CTX *VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
    unsigned char VAR_6[40];
    unsigned char VAR_7[VAR_1];

    SHA_CTX *VAR_8;

    if (VAR_3 != VAR_0)
        return -2;

    if (VAR_2 == ((void*)0))
        return 0;

    VAR_8 = FUNC_0(VAR_2);


    if (VAR_4 != 48)
        return 0;





    if (FUNC_4(VAR_8, VAR_5, VAR_4) <= 0)
        return 0;


    FUNC_5(VAR_6, 0x36, sizeof(VAR_6));

    if (!FUNC_4(VAR_8, VAR_6, sizeof(VAR_6)))
        return 0;

    if (!FUNC_2(VAR_7, VAR_8))
        return 0;



    if (!FUNC_3(VAR_8))
        return 0;

    if (FUNC_4(VAR_8, VAR_5, VAR_4) <= 0)
        return 0;


    FUNC_5(VAR_6, 0x5c, sizeof(VAR_6));

    if (!FUNC_4(VAR_8, VAR_6, sizeof(VAR_6)))
        return 0;

    if (!FUNC_4(VAR_8, VAR_7, sizeof(VAR_7)))
        return 0;


    FUNC_1(VAR_7, sizeof(VAR_7));

    return 1;

}
