
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct cms_envelope_options {int encryption_type_string; scalar_t__ content_info_flag; int content_type_string; scalar_t__ allow_weak_crypto_flag; int certificate_strings; int pass_strings; } ;
typedef int hx509_query ;
typedef int hx509_lock ;
typedef int hx509_certs ;
typedef int hx509_cert ;
typedef int heim_oid ;
struct TYPE_6__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int contentType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,char*,int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int ,int *,int *) ;
 int FUNC_10 (int ,int,int ,void*,size_t,int const*,int *,TYPE_1__*) ;
 int FUNC_11 (int *,TYPE_1__*,TYPE_1__*) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int ,int,int,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int **) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *,int ,int) ;
 int FUNC_21 (int ,int *,int *) ;
 int FUNC_22 (char*,void**,size_t*) ;
 int FUNC_23 (void*) ;

int
FUNC_24(struct cms_envelope_options *VAR_5, int VAR_6, char **VAR_7)
{
    heim_oid VAR_8;
    heim_octet_string VAR_9;
    const heim_oid *VAR_10 = ((void*)0);
    hx509_query *VAR_11;
    hx509_certs VAR_12;
    hx509_cert VAR_13;
    int VAR_14;
    size_t VAR_15;
    void *VAR_16;
    hx509_lock VAR_17;
    int VAR_18 = 0;

    FUNC_20(&VAR_8, 0, sizeof(VAR_8));

    FUNC_15(VAR_4, &VAR_17);
    FUNC_19(VAR_17, &VAR_5->pass_strings);

    VAR_14 = FUNC_22(VAR_7[0], &VAR_16, &VAR_15);
    if (VAR_14)
 FUNC_4(1, "map_file: %s: %d", VAR_7[0], VAR_14);

    VAR_14 = FUNC_9(VAR_4, "MEMORY:cert-store", 0, ((void*)0), &VAR_12);
    if (VAR_14) FUNC_13(VAR_4, 1, VAR_14, "hx509_certs_init: MEMORY");

    FUNC_1(VAR_4, "store", VAR_12, VAR_17, &VAR_5->certificate_strings);

    if (VAR_5->allow_weak_crypto_flag)
 VAR_18 |= VAR_0;

    if (VAR_5->encryption_type_string) {
 VAR_10 = FUNC_12(VAR_5->encryption_type_string);
 if (VAR_10 == ((void*)0))
     FUNC_5(1, "encryption type: %s no found",
   VAR_5->encryption_type_string);
    }

    VAR_14 = FUNC_16(VAR_4, &VAR_11);
    if (VAR_14)
 FUNC_5(1, "hx509_query_alloc: %d", VAR_14);

    FUNC_18(VAR_11, VAR_1);

    VAR_14 = FUNC_7(VAR_4, VAR_12, VAR_11, &VAR_13);
    FUNC_17(VAR_4, VAR_11);
    if (VAR_14)
 FUNC_5(1, "hx509_certs_find: %d", VAR_14);

    FUNC_21(VAR_5->content_type_string, &VAR_2, &VAR_8);

    VAR_14 = FUNC_10(VAR_4, VAR_18, VAR_13, VAR_16, VAR_15, VAR_10,
          &VAR_8, &VAR_9);
    if (VAR_14)
 FUNC_5(1, "hx509_cms_envelope_1: %d", VAR_14);

    FUNC_6(VAR_13);
    FUNC_8(&VAR_12);
    FUNC_23(VAR_16);
    FUNC_3(&VAR_8);

    if (VAR_5->content_info_flag) {
 heim_octet_string VAR_19;

 VAR_14 = FUNC_11(&VAR_3, &VAR_9, &VAR_19);
 if (VAR_14)
     FUNC_5(1, "hx509_cms_wrap_ContentInfo: %d", VAR_14);

 FUNC_2(&VAR_9);
 VAR_9 = VAR_19;
    }

    FUNC_14(VAR_17);

    VAR_14 = FUNC_0(VAR_7[1], VAR_9.data, VAR_9.length);
    if (VAR_14)
 FUNC_5(1, "hx509_write_file: %d", VAR_14);

    FUNC_2(&VAR_9);

    return 0;
}
