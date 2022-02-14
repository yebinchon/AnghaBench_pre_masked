
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int exporterlabel ;
struct TYPE_6__ {unsigned char* exporter_master_secret; } ;
typedef TYPE_1__ SSL ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int *,unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,int const*,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int const*,unsigned char*,unsigned char const*,int,unsigned char*,unsigned int,unsigned char*,size_t,int ) ;

int FUNC_8(SSL *VAR_1, unsigned char *VAR_2, size_t VAR_3,
                                 const char *VAR_4, size_t VAR_5,
                                 const unsigned char *VAR_6,
                                 size_t VAR_7, int VAR_8)
{
    unsigned char VAR_9[VAR_0];



    static const unsigned char VAR_10[] = "exporter";

    unsigned char VAR_11[VAR_0], VAR_12[VAR_0];
    const EVP_MD *VAR_13 = FUNC_6(VAR_1);
    EVP_MD_CTX *VAR_14 = FUNC_4();
    unsigned int VAR_15, VAR_16;
    int VAR_17 = 0;

    if (VAR_14 == ((void*)0) || !FUNC_5(VAR_1))
        goto err;

    if (!VAR_8)
        VAR_7 = 0;

    if (FUNC_1(VAR_14, VAR_13, ((void*)0)) <= 0
            || FUNC_2(VAR_14, VAR_6, VAR_7) <= 0
            || FUNC_0(VAR_14, VAR_11, &VAR_15) <= 0
            || FUNC_1(VAR_14, VAR_13, ((void*)0)) <= 0
            || FUNC_0(VAR_14, VAR_12, &VAR_16) <= 0
            || !FUNC_7(VAR_1, VAR_13, VAR_1->exporter_master_secret,
                                  (const unsigned char *)VAR_4, VAR_5,
                                  VAR_12, VAR_16, VAR_9, VAR_15, 0)
            || !FUNC_7(VAR_1, VAR_13, VAR_9, VAR_10,
                                  sizeof(VAR_10) - 1, VAR_11, VAR_15,
                                  VAR_2, VAR_3, 0))
        goto err;

    VAR_17 = 1;
 err:
    FUNC_3(VAR_14);
    return VAR_17;
}
