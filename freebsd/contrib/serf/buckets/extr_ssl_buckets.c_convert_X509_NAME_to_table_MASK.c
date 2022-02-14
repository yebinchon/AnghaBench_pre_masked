
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int X509_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (char*,int,int *) ;

__attribute__((used)) static apr_hash_t *
FUNC_4(X509_NAME *VAR_8, apr_pool_t *VAR_9)
{
    char VAR_10[1024];
    int VAR_11;

    apr_hash_t *VAR_12 = FUNC_1(VAR_9);

    VAR_11 = FUNC_0(VAR_8,
                                    VAR_1,
                                    VAR_10, 1024);
    if (VAR_11 != -1)
        FUNC_2(VAR_12, "CN", VAR_0,
                     FUNC_3(VAR_10, VAR_11, VAR_9));
    VAR_11 = FUNC_0(VAR_8,
                                    VAR_6,
                                    VAR_10, 1024);
    if (VAR_11 != -1)
        FUNC_2(VAR_12, "E", VAR_0,
                     FUNC_3(VAR_10, VAR_11, VAR_9));
    VAR_11 = FUNC_0(VAR_8,
                                    VAR_5,
                                    VAR_10, 1024);
    if (VAR_11 != -1)
        FUNC_2(VAR_12, "OU", VAR_0,
                     FUNC_3(VAR_10, VAR_11, VAR_9));
    VAR_11 = FUNC_0(VAR_8,
                                    VAR_4,
                                    VAR_10, 1024);
    if (VAR_11 != -1)
        FUNC_2(VAR_12, "O", VAR_0,
                     FUNC_3(VAR_10, VAR_11, VAR_9));
    VAR_11 = FUNC_0(VAR_8,
                                    VAR_3,
                                    VAR_10, 1024);
    if (VAR_11 != -1)
        FUNC_2(VAR_12, "L", VAR_0,
                     FUNC_3(VAR_10, VAR_11, VAR_9));
    VAR_11 = FUNC_0(VAR_8,
                                    VAR_7,
                                    VAR_10, 1024);
    if (VAR_11 != -1)
        FUNC_2(VAR_12, "ST", VAR_0,
                     FUNC_3(VAR_10, VAR_11, VAR_9));
    VAR_11 = FUNC_0(VAR_8,
                                    VAR_2,
                                    VAR_10, 1024);
    if (VAR_11 != -1)
        FUNC_2(VAR_12, "C", VAR_0,
                     FUNC_3(VAR_10, VAR_11, VAR_9));

    return VAR_12;
}
