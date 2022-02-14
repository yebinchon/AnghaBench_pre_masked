
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port ;
typedef int SSL ;
typedef int BIO_ADDR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,size_t*) ;
 unsigned short FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ,unsigned char*,size_t,unsigned char*,unsigned int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned char*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 unsigned char* FUNC_13 (size_t,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (unsigned char*,unsigned short*,int) ;
 int * VAR_4 ;

int FUNC_15(SSL *VAR_5, unsigned char *VAR_6,
                             unsigned int *VAR_7)
{
    unsigned char *VAR_8;
    size_t VAR_9 = 0;
    unsigned short VAR_10;
    BIO_ADDR *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);


    if (!VAR_2) {
        if (FUNC_10(VAR_3, VAR_0) <= 0) {
            FUNC_5(VAR_1, "error setting random cookie secret\n");
            return 0;
        }
        VAR_2 = 1;
    }

    if (FUNC_12(VAR_5)) {
        VAR_11 = VAR_12 = FUNC_1();
        if (VAR_12 == ((void*)0)) {
            FUNC_5(VAR_1, "memory full\n");
            return 0;
        }


        (void)FUNC_4(FUNC_11(VAR_5), VAR_12);
    } else {
        VAR_12 = VAR_4;
    }


    if (!FUNC_2(VAR_12, ((void*)0), &VAR_9)) {
        FUNC_5(VAR_1, "Failed getting peer address\n");
        return 0;
    }
    FUNC_8(VAR_9 != 0);
    VAR_10 = FUNC_3(VAR_12);
    VAR_9 += sizeof(VAR_10);
    VAR_8 = FUNC_13(VAR_9, "cookie generate buffer");

    FUNC_14(VAR_8, &VAR_10, sizeof(VAR_10));
    FUNC_2(VAR_12, VAR_8 + sizeof(VAR_10), ((void*)0));


    FUNC_7(FUNC_6(), VAR_3, VAR_0,
         VAR_8, VAR_9, VAR_6, VAR_7);

    FUNC_9(VAR_8);
    FUNC_0(VAR_11);

    return 1;
}
