
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct validate_options {int pass_strings; } ;
typedef int hx509_validate_ctx ;
typedef int hx509_lock ;
typedef int hx509_certs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_11(struct validate_options *VAR_5, int VAR_6, char **VAR_7)
{
    hx509_validate_ctx VAR_8;
    hx509_certs VAR_9;
    hx509_lock VAR_10;

    FUNC_5(VAR_1, &VAR_10);
    FUNC_10(VAR_10, &VAR_5->pass_strings);

    FUNC_8(VAR_1, &VAR_8);
    FUNC_9(VAR_8, VAR_2, VAR_3);
    FUNC_6(VAR_8, VAR_0);

    while(VAR_6--) {
 int VAR_11;
 VAR_11 = FUNC_2(VAR_1, VAR_7[0], 0, VAR_10, &VAR_9);
 if (VAR_11)
     FUNC_0(1, "hx509_certs_init: %d", VAR_11);
 FUNC_3(VAR_1, VAR_9, VAR_4, VAR_8);
 FUNC_1(&VAR_9);
 VAR_7++;
    }
    FUNC_7(VAR_8);

    FUNC_4(VAR_10);

    return 0;
}
