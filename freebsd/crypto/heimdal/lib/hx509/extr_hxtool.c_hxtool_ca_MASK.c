
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hx509_generate_private_context {int dummy; } ;
struct certificate_sign_options {int lifetime_string; int * certificate_string; scalar_t__ self_signed_flag; scalar_t__ domain_controller_flag; int path_length_integer; scalar_t__ issue_proxy_flag; scalar_t__ issue_ca_flag; int crl_uri_string; scalar_t__ serial_number_string; int * template_fields_string; int * template_certificate_string; scalar_t__ subject_string; int * certificate_private_key_string; int key_bits_integer; int * generate_key_string; int req_string; int * ca_private_key_string; int * ca_certificate_string; } ;
typedef int spki ;
typedef int hx509_request ;
typedef int hx509_query ;
typedef scalar_t__ hx509_private_key ;
typedef int * hx509_name ;
typedef int * hx509_certs ;
typedef int * hx509_cert ;
typedef int hx509_ca_tbs ;
typedef int heim_integer ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_9__ {TYPE_1__ subjectPublicKey; } ;
typedef TYPE_2__ SubjectPublicKeyInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,struct hx509_generate_private_context*,scalar_t__*) ;
 int FUNC_2 (int ,struct hx509_generate_private_context*,int ) ;
 int FUNC_3 (struct hx509_generate_private_context**) ;
 int FUNC_4 (int ,int *,struct hx509_generate_private_context**) ;
 int FUNC_5 (int ,struct hx509_generate_private_context*) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ,int ,struct certificate_sign_options*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,int ,int *,int **) ;
 int FUNC_14 (int ,int ,scalar_t__,int **) ;
 int FUNC_15 (int ,int ,int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ,int) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int ,int ,int *) ;
 int FUNC_23 (int ,int ,TYPE_2__*) ;
 int FUNC_24 (int ,int ,int *) ;
 int FUNC_25 (int ,int ,int,int *) ;
 int FUNC_26 () ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,int *,int *) ;
 int FUNC_29 (int ,int *,int *,int **) ;
 int FUNC_30 (int **) ;
 int FUNC_31 (int ,int *,int ,int *,int **) ;
 int FUNC_32 (int ,int *,int ,int *) ;
 int FUNC_33 (int ,int,int,char*,...) ;
 int FUNC_34 (int ,int *,int **) ;
 int FUNC_35 (int **) ;
 int FUNC_36 (int ,scalar_t__,int **) ;
 int FUNC_37 (int ,scalar_t__,TYPE_2__*) ;
 int FUNC_38 (scalar_t__*) ;
 int FUNC_39 (int ,int **) ;
 int FUNC_40 (int ,int *) ;
 int FUNC_41 (int *,int ) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int ,int ,TYPE_2__*) ;
 int FUNC_44 (int ,int ,int **) ;
 int FUNC_45 (TYPE_2__*,int ,int) ;
 int FUNC_46 (int,char*) ;
 int FUNC_47 (int *,int ,char*) ;
 int FUNC_48 (int *,scalar_t__*) ;

int
FUNC_49(struct certificate_sign_options *VAR_5, int VAR_6, char **VAR_7)
{
    int VAR_8;
    hx509_ca_tbs VAR_9;
    hx509_cert VAR_10 = ((void*)0), VAR_11 = ((void*)0);
    hx509_private_key VAR_12 = ((void*)0);
    hx509_private_key VAR_13 = ((void*)0);
    hx509_name VAR_14 = ((void*)0);
    SubjectPublicKeyInfo VAR_15;
    int VAR_16 = 0;

    FUNC_45(&VAR_15, 0, sizeof(VAR_15));

    if (VAR_5->ca_certificate_string == ((void*)0) && !VAR_5->self_signed_flag)
 FUNC_10(1, "--ca-certificate argument missing (not using --self-signed)");
    if (VAR_5->ca_private_key_string == ((void*)0) && VAR_5->generate_key_string == ((void*)0) && VAR_5->self_signed_flag)
 FUNC_10(1, "--ca-private-key argument missing (using --self-signed)");
    if (VAR_5->certificate_string == ((void*)0))
 FUNC_10(1, "--certificate argument missing");

    if (VAR_5->template_certificate_string) {
 if (VAR_5->template_fields_string == ((void*)0))
     FUNC_10(1, "--template-certificate not no --template-fields");
    }

    if (VAR_5->lifetime_string) {
 VAR_16 = FUNC_46(VAR_5->lifetime_string, "day");
 if (VAR_16 < 0)
     FUNC_10(1, "Invalid lifetime: %s", VAR_5->lifetime_string);
    }

    if (VAR_5->ca_certificate_string) {
 hx509_certs VAR_17 = ((void*)0);
 hx509_query *VAR_18;

 VAR_8 = FUNC_31(VAR_4, VAR_5->ca_certificate_string, 0,
          ((void*)0), &VAR_17);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8,
        "hx509_certs_init: %s", VAR_5->ca_certificate_string);

 VAR_8 = FUNC_39(VAR_4, &VAR_18);
 if (VAR_8)
     FUNC_10(1, "hx509_query_alloc: %d", VAR_8);

 FUNC_41(VAR_18, VAR_2);
 if (!VAR_5->issue_proxy_flag)
     FUNC_41(VAR_18, VAR_1);

 VAR_8 = FUNC_29(VAR_4, VAR_17, VAR_18, &VAR_10);
 FUNC_40(VAR_4, VAR_18);
 FUNC_30(&VAR_17);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "no CA certificate found");
    } else if (VAR_5->self_signed_flag) {
 if (VAR_5->generate_key_string == ((void*)0)
     && VAR_5->ca_private_key_string == ((void*)0))
     FUNC_10(1, "no signing private key");

 if (VAR_5->req_string)
     FUNC_10(1, "can't be self-signing and have a request at the same time");
    } else
 FUNC_10(1, "missing ca key");

    if (VAR_5->ca_private_key_string) {

 VAR_8 = FUNC_48(VAR_5->ca_private_key_string, &VAR_12);
 if (VAR_8)
     FUNC_9(1, "read_private_key");

 VAR_8 = FUNC_37(VAR_4, VAR_12, &VAR_15);
 if (VAR_8)
     FUNC_10(1, "hx509_private_key2SPKI: %d\n", VAR_8);

 if (VAR_5->self_signed_flag)
     VAR_13 = VAR_12;
    }

    if (VAR_5->req_string) {
 hx509_request VAR_19;

 VAR_8 = FUNC_6(VAR_4, VAR_5->req_string, &VAR_19);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "parse_request: %s", VAR_5->req_string);
 VAR_8 = FUNC_44(VAR_4, VAR_19, &VAR_14);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "get name");
 VAR_8 = FUNC_43(VAR_4, VAR_19, &VAR_15);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "get spki");
 FUNC_42(&VAR_19);
    }

    if (VAR_5->generate_key_string) {
 struct hx509_generate_private_context *VAR_20;

 VAR_8 = FUNC_4(VAR_4,
            &VAR_3,
            &VAR_20);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "generate private key");

 if (VAR_5->issue_ca_flag)
     FUNC_5(VAR_4, VAR_20);

 if (VAR_5->key_bits_integer)
     FUNC_2(VAR_4, VAR_20,
          VAR_5->key_bits_integer);

 VAR_8 = FUNC_1(VAR_4, VAR_20,
       &VAR_13);
 FUNC_3(&VAR_20);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "generate private key");

 VAR_8 = FUNC_37(VAR_4, VAR_13, &VAR_15);
 if (VAR_8)
     FUNC_10(1, "hx509_private_key2SPKI: %d\n", VAR_8);

 if (VAR_5->self_signed_flag)
     VAR_12 = VAR_13;
    }

    if (VAR_5->certificate_private_key_string) {
 VAR_8 = FUNC_48(VAR_5->certificate_private_key_string, &VAR_13);
 if (VAR_8)
     FUNC_9(1, "read_private_key for certificate");
    }

    if (VAR_5->subject_string) {
 if (VAR_14)
     FUNC_35(&VAR_14);
 VAR_8 = FUNC_36(VAR_4, VAR_5->subject_string, &VAR_14);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_parse_name");
    }





    VAR_8 = FUNC_17(VAR_4, &VAR_9);
    if (VAR_8)
 FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_init");

    if (VAR_5->template_certificate_string) {
 hx509_cert VAR_21;
 hx509_certs VAR_22;
 int VAR_23;

 VAR_8 = FUNC_31(VAR_4, VAR_5->template_certificate_string, 0,
          ((void*)0), &VAR_22);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8,
        "hx509_certs_init: %s", VAR_5->template_certificate_string);

 VAR_8 = FUNC_34(VAR_4, VAR_22, &VAR_21);

 FUNC_30(&VAR_22);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "no template certificate found");

 VAR_23 = FUNC_47(VAR_5->template_fields_string,
       FUNC_26(), "");

 VAR_8 = FUNC_25(VAR_4, VAR_9, VAR_23, VAR_21);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_set_template");

 FUNC_27(VAR_21);
    }

    if (VAR_5->serial_number_string) {
 heim_integer VAR_24;

 VAR_8 = FUNC_8(VAR_5->serial_number_string,
      &VAR_24);
 if (VAR_8)
     FUNC_9(1, "der_parse_hex_heim_integer");
 VAR_8 = FUNC_22(VAR_4, VAR_9, &VAR_24);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_init");
 FUNC_7(&VAR_24);
    }

    if (VAR_15.subjectPublicKey.length) {
 VAR_8 = FUNC_23(VAR_4, VAR_9, &VAR_15);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_set_spki");
    }

    if (VAR_14) {
 VAR_8 = FUNC_24(VAR_4, VAR_9, VAR_14);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_set_subject");
    }

    if (VAR_5->crl_uri_string) {
 VAR_8 = FUNC_15(VAR_4, VAR_9,
       VAR_5->crl_uri_string, ((void*)0));
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_add_crl_dp_uri");
    }

    FUNC_11(VAR_4, VAR_9, VAR_5);

    if (VAR_5->issue_ca_flag) {
 VAR_8 = FUNC_18(VAR_4, VAR_9, VAR_5->path_length_integer);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_set_ca");
    }
    if (VAR_5->issue_proxy_flag) {
 VAR_8 = FUNC_21(VAR_4, VAR_9, VAR_5->path_length_integer);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_set_proxy");
    }
    if (VAR_5->domain_controller_flag) {
 FUNC_19(VAR_4, VAR_9);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_set_domaincontroller");
    }

    if (VAR_16) {
 VAR_8 = FUNC_20(VAR_4, VAR_9, VAR_16);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_tbs_set_notAfter_lifetime");
    }

    if (VAR_5->self_signed_flag) {
 VAR_8 = FUNC_14(VAR_4, VAR_9, VAR_12, &VAR_11);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_sign_self");
    } else {
 VAR_8 = FUNC_13(VAR_4, VAR_9, VAR_10, &VAR_11);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_ca_sign");
    }

    if (VAR_13) {
 VAR_8 = FUNC_0(VAR_11, VAR_13);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "_hx509_cert_assign_key");
    }

    {
 hx509_certs VAR_25;

 VAR_8 = FUNC_31(VAR_4, VAR_5->certificate_string,
          VAR_0, ((void*)0), &VAR_25);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_certs_init");

 VAR_8 = FUNC_28(VAR_4, VAR_25, VAR_11);
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_certs_add");

 VAR_8 = FUNC_32(VAR_4, VAR_25, 0, ((void*)0));
 if (VAR_8)
     FUNC_33(VAR_4, 1, VAR_8, "hx509_certs_store");

 FUNC_30(&VAR_25);
    }

    if (VAR_14)
 FUNC_35(&VAR_14);
    if (VAR_10)
 FUNC_27(VAR_10);
    FUNC_27(VAR_11);
    FUNC_12(&VAR_15);

    if (VAR_12 != VAR_13)
 FUNC_38(&VAR_12);
    FUNC_38(&VAR_13);

    FUNC_16(&VAR_9);

    return 0;
}
