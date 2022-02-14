
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_options {scalar_t__ print_flag; int expr_string; scalar_t__ digitalSignature_flag; scalar_t__ keyEncipherment_flag; scalar_t__ private_key_flag; scalar_t__ eku_string; int friendlyname_string; int pass_strings; } ;
typedef int hx509_query ;
typedef int hx509_lock ;
typedef int hx509_certs ;
typedef int hx509_cert ;
typedef int heim_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ,int *,int *) ;
 int FUNC_7 (int ,int,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int **) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (scalar_t__,int *,int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (char*,...) ;

int
FUNC_20(struct query_options *VAR_4, int VAR_5, char **VAR_6)
{
    hx509_lock VAR_7;
    hx509_query *VAR_8;
    hx509_certs VAR_9;
    hx509_cert VAR_10;
    int VAR_11;

    VAR_11 = FUNC_10(VAR_3, &VAR_8);
    if (VAR_11)
 FUNC_1(1, "hx509_query_alloc: %d", VAR_11);

    FUNC_9(VAR_3, &VAR_7);
    FUNC_16(VAR_7, &VAR_4->pass_strings);

    VAR_11 = FUNC_6(VAR_3, "MEMORY:cert-store", 0, ((void*)0), &VAR_9);
    if (VAR_11) FUNC_7(VAR_3, 1, VAR_11, "hx509_certs_init: MEMORY");

    while (VAR_5 > 0) {

 VAR_11 = FUNC_3(VAR_3, VAR_9, VAR_7, VAR_6[0]);
 if (VAR_11)
     FUNC_1(1, "hx509_certs_append: %s: %d", VAR_6[0], VAR_11);

 VAR_5--;
 VAR_6++;
    }

    if (VAR_4->friendlyname_string)
 FUNC_14(VAR_8, VAR_4->friendlyname_string);

    if (VAR_4->eku_string) {
 heim_oid VAR_12;

 FUNC_17(VAR_4->eku_string, ((void*)0), &VAR_12);

 VAR_11 = FUNC_12(VAR_8, &VAR_12);
 if (VAR_11)
     FUNC_1(1, "hx509_query_match_eku: %d", VAR_11);
 FUNC_0(&VAR_12);
    }

    if (VAR_4->private_key_flag)
 FUNC_15(VAR_8, VAR_2);

    if (VAR_4->keyEncipherment_flag)
 FUNC_15(VAR_8, VAR_1);

    if (VAR_4->digitalSignature_flag)
 FUNC_15(VAR_8, VAR_0);

    if (VAR_4->expr_string)
 FUNC_13(VAR_3, VAR_8, VAR_4->expr_string);

    VAR_11 = FUNC_4(VAR_3, VAR_9, VAR_8, &VAR_10);
    FUNC_11(VAR_3, VAR_8);
    if (VAR_11)
 FUNC_19("no match found (%d)\n", VAR_11);
    else {
 FUNC_19("match found\n");
 if (VAR_4->print_flag)
     FUNC_18(VAR_3, VAR_10, 0);
    }

    FUNC_2(VAR_10);
    FUNC_5(&VAR_9);

    FUNC_8(VAR_7);

    return VAR_11;
}
