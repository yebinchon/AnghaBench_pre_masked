
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_ASYNC_FD ;
typedef int DWORD ;
typedef int ASYNC_WAIT_CTX ;
typedef int ASYNC_JOB ;


 scalar_t__ FUNC_0 (int *,int ,int *,void**) ;
 int FUNC_1 (int *,int ,int ,int *,int (*) (int *,int ,int ,int *)) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *,int *,int) ;
 char VAR_0 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int ,char*,int,int *,int *) ;
 int FUNC_9 (int ,char*,int,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_13 (int ,char*,int) ;

__attribute__((used)) static void FUNC_14(void) {
    ASYNC_JOB *VAR_2;
    ASYNC_WAIT_CTX *VAR_3;
    OSSL_ASYNC_FD VAR_4[2] = {0, 0};
    OSSL_ASYNC_FD *VAR_5;







    if ((VAR_2 = FUNC_2()) == ((void*)0))
        return;

    VAR_3 = FUNC_3(VAR_2);

    if (FUNC_0(VAR_3, VAR_1, &VAR_4[0],
                              (void **)&VAR_5)) {
        VAR_4[1] = *VAR_5;
    } else {
        VAR_5 = FUNC_7(sizeof(*VAR_5));
        if (VAR_5 == ((void*)0))
            return;
        *VAR_5 = VAR_4[1];

        if (!FUNC_1(VAR_3, VAR_1, VAR_4[0],
                                        VAR_5, FUNC_12)) {
            FUNC_12(VAR_3, VAR_1, VAR_4[0], VAR_5);
            return;
        }
    }
    FUNC_4();
}
