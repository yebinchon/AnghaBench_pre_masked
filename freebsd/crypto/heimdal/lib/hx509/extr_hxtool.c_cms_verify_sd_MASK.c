
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct pem_data {scalar_t__ detached_data; TYPE_1__* os; } ;
struct cms_verify_sd_options {char* signed_content_string; scalar_t__ allow_wrong_oid_flag; int signer_allowed_flag; scalar_t__ content_info_flag; scalar_t__ pem_flag; int certificate_strings; int anchors_strings; int pass_strings; scalar_t__ missing_revoke_flag; } ;
typedef int * hx509_verify_ctx ;
typedef int hx509_lock ;
typedef int * hx509_certs ;
typedef int heim_oid ;
struct TYPE_9__ {void* data; size_t length; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,void*,size_t) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char,char**) ;
 int FUNC_8 (int,char*,char*,...) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int **) ;
 int FUNC_14 (int ,char*,int ,int *,int **) ;
 int FUNC_15 (int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_16 (TYPE_1__*,int *,TYPE_1__*,int *) ;
 int FUNC_17 (int ,int *,int,void*,size_t,TYPE_1__*,int *,int *,TYPE_1__*,int **) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int,int,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int ,int *,int ,struct pem_data*) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int **) ;
 int FUNC_26 (int ,int *) ;
 int VAR_5 ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (char*,void**,size_t*) ;
 int FUNC_29 (void*) ;
 int VAR_6 ;
 scalar_t__ FUNC_30 (char*,char*) ;
 char* FUNC_31 (char*) ;
 char* FUNC_32 (char*,char) ;

int
FUNC_33(struct cms_verify_sd_options *VAR_7, int VAR_8, char **VAR_9)
{
    hx509_verify_ctx VAR_10 = ((void*)0);
    heim_oid VAR_11;
    heim_octet_string VAR_12, VAR_13, VAR_14, *VAR_15 = ((void*)0);
    hx509_certs VAR_16 = ((void*)0);
    hx509_certs VAR_17 = ((void*)0);
    hx509_certs VAR_18 = ((void*)0);
    hx509_lock VAR_19;
    int VAR_20, VAR_21 = 0;

    size_t VAR_22;
    void *VAR_23 = ((void*)0);

    if (VAR_7->missing_revoke_flag)
 FUNC_18(VAR_3, 1);

    FUNC_21(VAR_3, &VAR_19);
    FUNC_26(VAR_19, &VAR_7->pass_strings);

    VAR_20 = FUNC_25(VAR_3, &VAR_10);
    if (VAR_20)
 FUNC_19(VAR_3, 1, VAR_20, "hx509_verify_init_ctx");

    VAR_20 = FUNC_14(VAR_3, "MEMORY:cms-anchors", 0, ((void*)0), &VAR_18);
    if (VAR_20)
 FUNC_19(VAR_3, 1, VAR_20, "hx509_certs_init: MEMORY");
    VAR_20 = FUNC_14(VAR_3, "MEMORY:cert-store", 0, ((void*)0), &VAR_16);
    if (VAR_20)
 FUNC_19(VAR_3, 1, VAR_20, "hx509_certs_init: MEMORY");

    FUNC_3(VAR_3, "anchors", VAR_18, VAR_19, &VAR_7->anchors_strings);
    FUNC_3(VAR_3, "store", VAR_16, VAR_19, &VAR_7->certificate_strings);

    if (VAR_7->pem_flag) {
 struct pem_data VAR_24;
 FILE *VAR_25;

 VAR_24.os = &VAR_13;
 VAR_24.detached_data = 0;

 VAR_25 = FUNC_11(VAR_9[0], "r");
 if (VAR_25 == ((void*)0))
     FUNC_8(1, "Failed to open file %s", VAR_9[0]);

 VAR_20 = FUNC_22(VAR_3, VAR_25, VAR_5, &VAR_24);
 FUNC_10(VAR_25);
 if (VAR_20)
     FUNC_9(1, "PEM reader failed: %d", VAR_20);

 if (VAR_24.detached_data && VAR_7->signed_content_string == ((void*)0)) {
     char *VAR_26 = FUNC_32(VAR_9[0], '.');
     if (VAR_26 && FUNC_30(VAR_26, ".pem") == 0) {
  char *VAR_27 = FUNC_31(VAR_9[0]);
  if (VAR_27 == ((void*)0))
      FUNC_9(1, "malloc: out of memory");
  VAR_27[VAR_26 - VAR_9[0]] = '\0';
  VAR_20 = FUNC_0(VAR_27, &VAR_14);
  if (VAR_20)
      FUNC_9(1, "map_file: %s: %d", VAR_27, VAR_20);
  FUNC_12(VAR_27);
  VAR_15 = &VAR_14;
     }
 }

    } else {
 VAR_20 = FUNC_28(VAR_9[0], &VAR_23, &VAR_22);
 if (VAR_20)
     FUNC_8(1, "map_file: %s: %d", VAR_9[0], VAR_20);

 VAR_13.data = VAR_23;
 VAR_13.length = VAR_22;
    }

    if (VAR_7->signed_content_string) {
 VAR_20 = FUNC_0(VAR_7->signed_content_string, &VAR_14);
 if (VAR_20)
     FUNC_9(1, "map_file: %s: %d", VAR_7->signed_content_string, VAR_20);
 VAR_15 = &VAR_14;
    }

    if (VAR_7->content_info_flag) {
 heim_octet_string VAR_28;
 heim_oid VAR_29;

 VAR_20 = FUNC_16(&VAR_13, &VAR_29, &VAR_28, ((void*)0));
 if (VAR_20)
     FUNC_9(1, "hx509_cms_unwrap_ContentInfo: %d", VAR_20);

 if (FUNC_6(&VAR_29, &VAR_2) != 0)
     FUNC_9(1, "Content is not SignedData");
 FUNC_5(&VAR_29);

 if (VAR_23 == ((void*)0))
     FUNC_4(&VAR_13);
 else {
     FUNC_29(VAR_23);
     VAR_23 = ((void*)0);
 }
 VAR_13 = VAR_28;
    }

    FUNC_23(VAR_10, VAR_18);

    if (!VAR_7->signer_allowed_flag)
 VAR_21 |= VAR_1;
    if (VAR_7->allow_wrong_oid_flag)
 VAR_21 |= VAR_0;

    VAR_20 = FUNC_17(VAR_3, VAR_10, VAR_21, VAR_13.data, VAR_13.length, VAR_15,
      VAR_16, &VAR_11, &VAR_12, &VAR_17);
    if (VAR_23 != VAR_13.data)
 FUNC_4(&VAR_13);
    else
 FUNC_29(VAR_23);
    if (VAR_20)
 FUNC_19(VAR_3, 1, VAR_20, "hx509_cms_verify_signed");

    {
 char *VAR_30;
 FUNC_7(&VAR_11, '.', &VAR_30);
 FUNC_27("type: %s\n", VAR_30);
 FUNC_12(VAR_30);
 FUNC_5(&VAR_11);
    }
    if (VAR_17 == ((void*)0)) {
 FUNC_27("unsigned\n");
    } else {
 FUNC_27("signers:\n");
 FUNC_15(VAR_3, VAR_17, VAR_4, VAR_6);
    }

    FUNC_24(VAR_10);

    FUNC_13(&VAR_16);
    FUNC_13(&VAR_17);
    FUNC_13(&VAR_18);

    FUNC_20(VAR_19);

    if (VAR_8 > 1) {
 VAR_20 = FUNC_2(VAR_9[1], VAR_12.data, VAR_12.length);
 if (VAR_20)
     FUNC_9(1, "hx509_write_file: %d", VAR_20);
    }

    FUNC_4(&VAR_12);

    if (VAR_15)
 FUNC_1(VAR_15);

    return 0;
}
