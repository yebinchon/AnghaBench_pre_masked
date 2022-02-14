
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ct_log_entry_type_t ;
typedef int SCT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,unsigned char) ;
 int VAR_3 ;
 int FUNC_9 (char const*,unsigned char**) ;
 scalar_t__ FUNC_10 (int *,unsigned char const**,int) ;

SCT *FUNC_11(unsigned char VAR_4, const char *VAR_5,
                         ct_log_entry_type_t VAR_6, uint64_t VAR_7,
                         const char *VAR_8,
                         const char *VAR_9)
{
    SCT *VAR_10 = FUNC_3();
    unsigned char *VAR_11 = ((void*)0);
    const unsigned char* VAR_12 = ((void*)0);
    int VAR_13;

    if (VAR_10 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }





    if (!FUNC_8(VAR_10, VAR_4)) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }

    VAR_13 = FUNC_9(VAR_5, &VAR_11);
    if (VAR_13 < 0) {
        FUNC_0(VAR_0, VAR_3);
        goto err;
    }
    if (!FUNC_5(VAR_10, VAR_11, VAR_13))
        goto err;
    VAR_11 = ((void*)0);

    VAR_13 = FUNC_9(VAR_8, &VAR_11);
    if (VAR_13 < 0) {
        FUNC_0(VAR_0, VAR_3);
        goto err;
    }
    FUNC_4(VAR_10, VAR_11, VAR_13);
    VAR_11 = ((void*)0);

    VAR_13 = FUNC_9(VAR_9, &VAR_11);
    if (VAR_13 < 0) {
        FUNC_0(VAR_0, VAR_3);
        goto err;
    }

    VAR_12 = VAR_11;
    if (FUNC_10(VAR_10, &VAR_12, VAR_13) <= 0)
        goto err;
    FUNC_1(VAR_11);
    VAR_11 = ((void*)0);

    FUNC_7(VAR_10, VAR_7);

    if (!FUNC_6(VAR_10, VAR_6))
        goto err;

    return VAR_10;

 err:
    FUNC_1(VAR_11);
    FUNC_2(VAR_10);
    return ((void*)0);
}
