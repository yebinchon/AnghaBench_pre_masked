
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crl_sign_options {char* signer_string; scalar_t__ crl_file_string; scalar_t__ lifetime_string; int pass_strings; } ;
typedef int hx509_query ;
typedef int hx509_lock ;
typedef int hx509_crl ;
typedef int * hx509_certs ;
typedef int * hx509_cert ;
struct TYPE_3__ {int data; int length; } ;
typedef TYPE_1__ heim_octet_string ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ,char*) ;
 int FUNC_4 (int ,int *,int *,int **) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int ,char*,int ,int *,int **) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_12 (int ,int,int,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int **) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (scalar_t__,char*) ;
 int FUNC_20 (scalar_t__,int ,int ) ;

int
FUNC_21(struct crl_sign_options *VAR_2, int VAR_3, char **VAR_4)
{
    hx509_crl VAR_5;
    heim_octet_string VAR_6;
    hx509_cert VAR_7 = ((void*)0);
    hx509_lock VAR_8;
    int VAR_9;

    FUNC_14(VAR_1, &VAR_8);
    FUNC_18(VAR_8, &VAR_2->pass_strings);

    VAR_9 = FUNC_8(VAR_1, &VAR_5);
    if (VAR_9)
 FUNC_0(1, "crl alloc");

    if (VAR_2->signer_string == ((void*)0))
 FUNC_0(1, "signer missing");

    {
 hx509_certs VAR_10 = ((void*)0);
 hx509_query *VAR_11;

 VAR_9 = FUNC_6(VAR_1, VAR_2->signer_string, 0,
          ((void*)0), &VAR_10);
 if (VAR_9)
     FUNC_12(VAR_1, 1, VAR_9,
        "hx509_certs_init: %s", VAR_2->signer_string);

 VAR_9 = FUNC_15(VAR_1, &VAR_11);
 if (VAR_9)
     FUNC_12(VAR_1, 1, VAR_9, "hx509_query_alloc: %d", VAR_9);

 FUNC_17(VAR_11, VAR_0);

 VAR_9 = FUNC_4(VAR_1, VAR_10, VAR_11, &VAR_7);
 FUNC_16(VAR_1, VAR_11);
 FUNC_5(&VAR_10);
 if (VAR_9)
     FUNC_12(VAR_1, 1, VAR_9, "no signer certificate found");
    }

    if (VAR_2->lifetime_string) {
 int VAR_12;

 VAR_12 = FUNC_19(VAR_2->lifetime_string, "day");
 if (VAR_12 < 0)
     FUNC_0(1, "Invalid lifetime: %s", VAR_2->lifetime_string);

 FUNC_10(VAR_1, VAR_5, VAR_12);
    }

    {
 hx509_certs VAR_13 = ((void*)0);
 int VAR_14;

 VAR_9 = FUNC_6(VAR_1, "MEMORY:revoked-certs", 0,
          ((void*)0), &VAR_13);
 if (VAR_9)
     FUNC_12(VAR_1, 1, VAR_9,
        "hx509_certs_init: MEMORY cert");

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
     VAR_9 = FUNC_3(VAR_1, VAR_13, VAR_8, VAR_4[VAR_14]);
     if (VAR_9)
  FUNC_12(VAR_1, 1, VAR_9, "hx509_certs_append: %s", VAR_4[VAR_14]);
 }

 FUNC_7(VAR_1, VAR_5, VAR_13);
 FUNC_5(&VAR_13);
    }

    FUNC_11(VAR_1, VAR_7, VAR_5, &VAR_6);

    if (VAR_2->crl_file_string)
 FUNC_20(VAR_2->crl_file_string, VAR_6.data, VAR_6.length);

    FUNC_1(VAR_6.data);

    FUNC_9(VAR_1, &VAR_5);
    FUNC_2(VAR_7);
    FUNC_13(VAR_8);

    return 0;
}
