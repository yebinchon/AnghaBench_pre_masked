
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * response; int * tst_info; int * request; } ;
typedef TYPE_1__ TS_RESP_CTX ;
typedef int TS_RESP ;
typedef int BIO ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (TYPE_1__*,int *) ;
 int * FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

TS_RESP *FUNC_14(TS_RESP_CTX *VAR_6, BIO *VAR_7)
{
    ASN1_OBJECT *VAR_8;
    TS_RESP *VAR_9;
    int VAR_10 = 0;

    FUNC_8(VAR_6);

    if ((VAR_6->response = FUNC_4()) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        goto end;
    }
    if ((VAR_6->request = FUNC_6(VAR_7, ((void*)0))) == ((void*)0)) {
        FUNC_1(VAR_6, VAR_5,
                                    "Bad request format or system error.");
        FUNC_0(VAR_6, VAR_2);
        goto end;
    }
    if (!FUNC_1(VAR_6, VAR_4, ((void*)0)))
        goto end;
    if (!FUNC_9(VAR_6))
        goto end;
    if ((VAR_8 = FUNC_11(VAR_6)) == ((void*)0))
        goto end;
    if ((VAR_6->tst_info = FUNC_10(VAR_6, VAR_8)) == ((void*)0))
        goto end;
    if (!FUNC_12(VAR_6))
        goto end;
    if (!FUNC_13(VAR_6))
        goto end;
    VAR_10 = 1;

 end:
    if (!VAR_10) {
        FUNC_5(VAR_1, VAR_3);
        if (VAR_6->response != ((void*)0)) {
            if (FUNC_2(VAR_6,
                                                 VAR_5,
                                                 "Error during response "
                                                 "generation.") == 0) {
                FUNC_3(VAR_6->response);
                VAR_6->response = ((void*)0);
            }
        }
    }
    VAR_9 = VAR_6->response;
    VAR_6->response = ((void*)0);
    FUNC_7(VAR_6);
    return VAR_9;
}
