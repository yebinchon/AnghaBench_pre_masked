
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL_CIPHER ;
typedef int SSL ;
typedef int EVP_MD ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,long*) ;
 int * FUNC_3 (int *,int ) ;
 int const* FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,unsigned char*,long) ;
 int FUNC_9 (int *,int const*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 size_t FUNC_12 (scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(SSL *VAR_6, const EVP_MD *VAR_7,
                              const unsigned char **VAR_8, size_t *VAR_9,
                              SSL_SESSION **VAR_10)
{
    SSL_SESSION *VAR_11 = ((void*)0);
    const SSL_CIPHER *VAR_12 = ((void*)0);

    if (VAR_4 != ((void*)0)) {
        FUNC_11(VAR_4);
        VAR_11 = VAR_4;
    } else {
        long VAR_13;
        unsigned char *VAR_14 = FUNC_2(VAR_3, &VAR_13);

        if (VAR_14 == ((void*)0)) {
            FUNC_0(VAR_1, "Could not convert PSK key '%s' to buffer\n",
                       VAR_3);
            return 0;
        }


        VAR_12 = FUNC_3(VAR_6, VAR_5);
        if (VAR_12 == ((void*)0)) {
            FUNC_0(VAR_1, "Error finding suitable ciphersuite\n");
            FUNC_1(VAR_14);
            return 0;
        }

        VAR_11 = FUNC_7();
        if (VAR_11 == ((void*)0)
                || !FUNC_8(VAR_11, VAR_14, VAR_13)
                || !FUNC_9(VAR_11, VAR_12)
                || !FUNC_10(VAR_11, VAR_0)) {
            FUNC_1(VAR_14);
            goto err;
        }
        FUNC_1(VAR_14);
    }

    VAR_12 = FUNC_6(VAR_11);
    if (VAR_12 == ((void*)0))
        goto err;

    if (VAR_7 != ((void*)0) && FUNC_4(VAR_12) != VAR_7) {

        *VAR_8 = ((void*)0);
        *VAR_9 = 0;
        *VAR_10 = ((void*)0);
        FUNC_5(VAR_11);
    } else {
        *VAR_10 = VAR_11;
        *VAR_8 = (unsigned char *)VAR_2;
        *VAR_9 = FUNC_12(VAR_2);
    }

    return 1;

 err:
    FUNC_5(VAR_11);
    return 0;
}
