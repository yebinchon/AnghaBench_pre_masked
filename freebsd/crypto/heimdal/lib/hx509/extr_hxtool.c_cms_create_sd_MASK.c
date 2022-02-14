
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num_strings; } ;
struct TYPE_10__ {scalar_t__ num_strings; } ;
struct cms_create_sd_options {scalar_t__ detached_signature_flag; scalar_t__ pem_flag; scalar_t__ content_info_flag; int content_type_string; TYPE_2__ peer_alg_strings; scalar_t__ embed_leaf_only_flag; int embedded_certs_flag; int signer_string; scalar_t__ signer_flag; scalar_t__ id_by_name_flag; TYPE_7__ anchors_strings; TYPE_7__ pool_strings; TYPE_7__ certificate_strings; int pass_strings; } ;
typedef int hx509_query ;
typedef int hx509_pem_header ;
typedef int * hx509_peer_info ;
typedef int hx509_lock ;
typedef int * hx509_certs ;
typedef int heim_oid ;
struct TYPE_8__ {int data; int length; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int contentType ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char**,char*,char*,char*) ;
 int FUNC_2 (int ,char*,int *,int ,TYPE_7__*) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,char*,...) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int *,int **) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (int ,char*,int ,int *,int **) ;
 int FUNC_13 (int ,int *,int ,int *) ;
 int FUNC_14 (int ,int,int *,void*,size_t,int *,int *,int *,int *,int *,TYPE_1__*) ;
 int FUNC_15 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_16 (int ,int,int,char*,...) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int **,char*,char*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,char*,int *,int *,int ,int ) ;
 int FUNC_23 (int ,int **) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (int *,int ,int) ;
 int FUNC_29 (int ,int *,int *) ;
 int FUNC_30 (int ,int **,TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_31 (char*,void**,size_t*) ;
 int FUNC_32 (void*) ;

int
FUNC_33(struct cms_create_sd_options *VAR_11, int VAR_12, char **VAR_13)
{
    heim_oid VAR_14;
    hx509_peer_info VAR_15 = ((void*)0);
    heim_octet_string VAR_16;
    hx509_query *VAR_17;
    hx509_lock VAR_18;
    hx509_certs VAR_19, VAR_20, VAR_21, VAR_22 = ((void*)0);
    size_t VAR_23;
    void *VAR_24;
    int VAR_25, VAR_26 = 0;
    char *VAR_27, *VAR_28 = ((void*)0);

    FUNC_28(&VAR_14, 0, sizeof(VAR_14));

    VAR_27 = VAR_13[0];

    if (VAR_12 < 2) {
 FUNC_1(&VAR_28, "%s.%s", VAR_27,
   VAR_11->pem_flag ? "pem" : "cms-signeddata");
 if (VAR_28 == ((void*)0))
     FUNC_6(1, "out of memory");
    } else
 VAR_28 = VAR_13[1];

    FUNC_18(VAR_9, &VAR_18);
    FUNC_27(VAR_18, &VAR_11->pass_strings);

    VAR_25 = FUNC_12(VAR_9, "MEMORY:cert-store", 0, ((void*)0), &VAR_19);
    if (VAR_25) FUNC_16(VAR_9, 1, VAR_25, "hx509_certs_init: MEMORY");
    VAR_25 = FUNC_12(VAR_9, "MEMORY:cert-pool", 0, ((void*)0), &VAR_20);
    if (VAR_25) FUNC_16(VAR_9, 1, VAR_25, "hx509_certs_init: MEMORY");

    FUNC_2(VAR_9, "store", VAR_19, VAR_18, &VAR_11->certificate_strings);
    FUNC_2(VAR_9, "pool", VAR_20, VAR_18, &VAR_11->pool_strings);

    if (VAR_11->anchors_strings.num_strings) {
 VAR_25 = FUNC_12(VAR_9, "MEMORY:cert-anchors",
          0, ((void*)0), &VAR_21);
 if (VAR_25) FUNC_16(VAR_9, 1, VAR_25, "hx509_certs_init: MEMORY");
 FUNC_2(VAR_9, "anchors", VAR_21, VAR_18, &VAR_11->anchors_strings);
    } else
 VAR_21 = ((void*)0);

    if (VAR_11->detached_signature_flag)
 VAR_26 |= VAR_0;
    if (VAR_11->id_by_name_flag)
 VAR_26 |= VAR_1;
    if (!VAR_11->signer_flag) {
 VAR_26 |= VAR_4;

    }

    if (VAR_11->signer_flag) {
 VAR_25 = FUNC_23(VAR_9, &VAR_17);
 if (VAR_25)
     FUNC_6(1, "hx509_query_alloc: %d", VAR_25);

 FUNC_26(VAR_17, VAR_6);
 FUNC_26(VAR_17, VAR_5);

 if (VAR_11->signer_string)
     FUNC_25(VAR_17, VAR_11->signer_string);

 VAR_25 = FUNC_10(VAR_9, VAR_19, VAR_17, &VAR_22);
 FUNC_24(VAR_9, VAR_17);
 if (VAR_25)
     FUNC_16(VAR_9, 1, VAR_25, "hx509_certs_find");
    }
    if (!VAR_11->embedded_certs_flag)
 VAR_26 |= VAR_3;
    if (VAR_11->embed_leaf_only_flag)
 VAR_26 |= VAR_2;

    VAR_25 = FUNC_31(VAR_27, &VAR_24, &VAR_23);
    if (VAR_25)
 FUNC_5(1, "map_file: %s: %d", VAR_27, VAR_25);

    if (VAR_11->peer_alg_strings.num_strings)
 FUNC_30(VAR_9, &VAR_15, &VAR_11->peer_alg_strings);

    FUNC_29(VAR_11->content_type_string, &VAR_7, &VAR_14);

    VAR_25 = FUNC_14(VAR_9,
      VAR_26,
      &VAR_14,
      VAR_24,
      VAR_23,
      ((void*)0),
      VAR_22,
      VAR_15,
      VAR_21,
      VAR_20,
      &VAR_16);
    if (VAR_25)
 FUNC_16(VAR_9, 1, VAR_25, "hx509_cms_create_signed: %d", VAR_25);

    FUNC_11(&VAR_21);
    FUNC_11(&VAR_20);
    FUNC_11(&VAR_19);
    FUNC_32(VAR_24);
    FUNC_17(VAR_18);
    FUNC_19(VAR_15);
    FUNC_4(&VAR_14);

    if (VAR_11->content_info_flag) {
 heim_octet_string VAR_29;

 VAR_25 = FUNC_15(&VAR_8, &VAR_16, &VAR_29);
 if (VAR_25)
     FUNC_6(1, "hx509_cms_wrap_ContentInfo: %d", VAR_25);

 FUNC_3(&VAR_16);
 VAR_16 = VAR_29;
    }

    if (VAR_11->pem_flag) {
 hx509_pem_header *VAR_30 = ((void*)0);
 FILE *VAR_31;

 FUNC_20(&VAR_30, "Content-disposition",
        VAR_11->detached_signature_flag ?
        "detached" : "inline");
 if (VAR_22) {
     VAR_25 = FUNC_13(VAR_9, VAR_22, VAR_10, VAR_30);
     if (VAR_25)
  FUNC_16(VAR_9, 1, VAR_25, "print signer");
 }

 VAR_31 = FUNC_8(VAR_28, "w");
 if (VAR_31 == ((void*)0))
     FUNC_5(1, "open %s", VAR_28);

 VAR_25 = FUNC_22(VAR_9, "CMS SIGNEDDATA", VAR_30, VAR_31,
         VAR_16.data, VAR_16.length);
 FUNC_7(VAR_31);
 FUNC_21(VAR_30);
 if (VAR_25)
     FUNC_6(1, "hx509_pem_write: %d", VAR_25);

    } else {
 VAR_25 = FUNC_0(VAR_28, VAR_16.data, VAR_16.length);
 if (VAR_25)
     FUNC_6(1, "hx509_write_file: %d", VAR_25);
    }

    FUNC_11(&VAR_22);
    FUNC_9(VAR_16.data);

    return 0;
}
