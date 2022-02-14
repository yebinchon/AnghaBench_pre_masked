
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_crypto_options {int pass_strings; } ;
typedef int hx509_verify_ctx ;
typedef int hx509_lock ;
typedef int hx509_certs ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,int,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int VAR_1 ;

int
FUNC_9(struct test_crypto_options *VAR_2, int VAR_3, char ** VAR_4)
{
    hx509_verify_ctx VAR_5;
    hx509_certs VAR_6;
    hx509_lock VAR_7;
    int VAR_8, VAR_9;

    FUNC_5(VAR_0, &VAR_7);
    FUNC_8(VAR_7, &VAR_2->pass_strings);

    VAR_9 = FUNC_2(VAR_0, "MEMORY:test-crypto", 0, ((void*)0), &VAR_6);
    if (VAR_9) FUNC_4(VAR_0, 1, VAR_9, "hx509_certs_init: MEMORY");

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
 VAR_9 = FUNC_0(VAR_0, VAR_6, VAR_7, VAR_4[VAR_8]);
 if (VAR_9)
     FUNC_4(VAR_0, 1, VAR_9, "hx509_certs_append");
    }

    VAR_9 = FUNC_7(VAR_0, &VAR_5);
    if (VAR_9)
 FUNC_4(VAR_0, 1, VAR_9, "hx509_verify_init_ctx");

    FUNC_6(VAR_5, VAR_6);

    VAR_9 = FUNC_3(VAR_0, VAR_6, VAR_1, VAR_5);
    if (VAR_9)
 FUNC_4(VAR_0, 1, VAR_9, "hx509_cert_iter");

    FUNC_1(&VAR_6);

    return 0;
}
