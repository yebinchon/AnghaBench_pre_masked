
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct cms_unenvelope_options {scalar_t__ allow_weak_crypto_flag; int certificate_strings; scalar_t__ content_info_flag; int pass_strings; } ;
typedef int hx509_lock ;
typedef int hx509_certs ;
struct TYPE_11__ {int * member_1; int member_0; } ;
typedef TYPE_1__ heim_oid ;
struct TYPE_12__ {void* data; size_t length; } ;
typedef TYPE_2__ heim_octet_string ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int,char*,char*,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ,int *,int *) ;
 int FUNC_9 (int ,int ,int,void*,size_t,int *,int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_11 (int ,int,int,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (char*,void**,size_t*) ;
 int FUNC_16 (void*) ;

int
FUNC_17(struct cms_unenvelope_options *VAR_3, int VAR_4, char **VAR_5)
{
    heim_oid VAR_6 = { 0, ((void*)0) };
    heim_octet_string VAR_7, VAR_8;
    hx509_certs VAR_9;
    size_t VAR_10;
    void *VAR_11;
    int VAR_12;
    hx509_lock VAR_13;
    int VAR_14 = 0;

    FUNC_13(VAR_2, &VAR_13);
    FUNC_14(VAR_13, &VAR_3->pass_strings);

    VAR_12 = FUNC_15(VAR_5[0], &VAR_11, &VAR_10);
    if (VAR_12)
 FUNC_5(1, "map_file: %s: %d", VAR_5[0], VAR_12);

    VAR_8.data = VAR_11;
    VAR_8.length = VAR_10;

    if (VAR_3->content_info_flag) {
 heim_octet_string VAR_15;
 heim_oid VAR_16;

 VAR_12 = FUNC_10(&VAR_8, &VAR_16, &VAR_15, ((void*)0));
 if (VAR_12)
     FUNC_6(1, "hx509_cms_unwrap_ContentInfo: %d", VAR_12);

 if (FUNC_4(&VAR_16, &VAR_1) != 0)
     FUNC_6(1, "Content is not SignedData");
 FUNC_3(&VAR_16);

 VAR_8 = VAR_15;
    }

    VAR_12 = FUNC_8(VAR_2, "MEMORY:cert-store", 0, ((void*)0), &VAR_9);
    if (VAR_12)
 FUNC_6(1, "hx509_certs_init: MEMORY: %d", VAR_12);

    FUNC_1(VAR_2, "store", VAR_9, VAR_13, &VAR_3->certificate_strings);

    if (VAR_3->allow_weak_crypto_flag)
 VAR_14 |= VAR_0;

    VAR_12 = FUNC_9(VAR_2, VAR_9, VAR_14, VAR_8.data, VAR_8.length,
          ((void*)0), 0, &VAR_6, &VAR_7);
    if (VAR_8.data != VAR_11)
 FUNC_2(&VAR_8);
    if (VAR_12)
 FUNC_11(VAR_2, 1, VAR_12, "hx509_cms_unenvelope");

    FUNC_16(VAR_11);
    FUNC_12(VAR_13);
    FUNC_7(&VAR_9);
    FUNC_3(&VAR_6);

    VAR_12 = FUNC_0(VAR_5[1], VAR_7.data, VAR_7.length);
    if (VAR_12)
 FUNC_6(1, "hx509_write_file: %d", VAR_12);

    FUNC_2(&VAR_7);

    return 0;
}
