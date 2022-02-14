
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ptr; } ;
struct TYPE_8__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int CMAC_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char const*,size_t,int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int *,int) ;

EVP_PKEY *FUNC_7(ENGINE *VAR_4, const unsigned char *VAR_5,
                                size_t VAR_6, const EVP_CIPHER *VAR_7)
{

    EVP_PKEY *VAR_8 = FUNC_4();
    CMAC_CTX *VAR_9 = FUNC_1();

    if (VAR_8 == ((void*)0)
            || VAR_9 == ((void*)0)
            || !FUNC_6(VAR_8, VAR_4, VAR_1, ((void*)0), -1)) {

        goto err;
    }

    if (!FUNC_2(VAR_9, VAR_5, VAR_6, VAR_7, VAR_4)) {
        FUNC_5(VAR_0, VAR_2);
        goto err;
    }

    VAR_8->pkey.ptr = VAR_9;
    return VAR_8;

 err:
    FUNC_3(VAR_8);
    FUNC_0(VAR_9);
    return ((void*)0);





}
