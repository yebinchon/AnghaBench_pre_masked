
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_strings; int * strings; } ;
struct TYPE_6__ {int num_strings; int * strings; } ;
struct request_create_options {TYPE_2__ dnsname_strings; TYPE_1__ email_strings; scalar_t__ verbose_flag; scalar_t__ subject_string; int key_bits_integer; int generate_key_string; int key_string; } ;
typedef int key ;
typedef int hx509_request ;
typedef int hx509_private_key ;
typedef int * hx509_name ;
struct TYPE_8__ {int length; int data; } ;
typedef TYPE_3__ heim_octet_string ;
typedef int SubjectPublicKeyInfo ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int,int,char*) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int *,char**) ;
 int FUNC_10 (int ,scalar_t__,int **) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (int ,int ,int *) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char const*,int ,int ) ;

int
FUNC_20(struct request_create_options *VAR_1, int VAR_2, char **VAR_3)
{
    heim_octet_string VAR_4;
    hx509_request VAR_5;
    int VAR_6, VAR_7;
    hx509_private_key VAR_8;
    SubjectPublicKeyInfo VAR_9;
    const char *VAR_10 = VAR_3[0];

    FUNC_17(&VAR_9, 0, sizeof(VAR_9));

    FUNC_6(VAR_1->key_string,
     VAR_1->generate_key_string,
     VAR_1->key_bits_integer,
     &VAR_8);

    FUNC_14(VAR_0, &VAR_5);

    if (VAR_1->subject_string) {
 hx509_name VAR_11 = ((void*)0);

 VAR_6 = FUNC_10(VAR_0, VAR_1->subject_string, &VAR_11);
 if (VAR_6)
     FUNC_4(1, "hx509_parse_name: %d\n", VAR_6);
 FUNC_16(VAR_0, VAR_5, VAR_11);

 if (VAR_1->verbose_flag) {
     char *VAR_12;
     FUNC_9(VAR_11, &VAR_12);
     FUNC_18("%s\n", VAR_12);
 }
 FUNC_8(&VAR_11);
    }

    for (VAR_7 = 0; VAR_7 < VAR_1->email_strings.num_strings; VAR_7++) {
 VAR_6 = FUNC_1(VAR_0, VAR_5,
           VAR_1->email_strings.strings[VAR_7]);
 if (VAR_6)
     FUNC_7(VAR_0, 1, VAR_6, "hx509_request_add_email");
    }

    for (VAR_7 = 0; VAR_7 < VAR_1->dnsname_strings.num_strings; VAR_7++) {
 VAR_6 = FUNC_0(VAR_0, VAR_5,
       VAR_1->dnsname_strings.strings[VAR_7]);
 if (VAR_6)
     FUNC_7(VAR_0, 1, VAR_6, "hx509_request_add_dns_name");
    }


    VAR_6 = FUNC_11(VAR_0, VAR_8, &VAR_9);
    if (VAR_6)
 FUNC_4(1, "hx509_private_key2SPKI: %d\n", VAR_6);

    VAR_6 = FUNC_15(VAR_0,
        VAR_5,
        &VAR_9);
    FUNC_5(&VAR_9);
    if (VAR_6)
 FUNC_7(VAR_0, 1, VAR_6, "hx509_request_set_SubjectPublicKeyInfo");

    VAR_6 = FUNC_2(VAR_0,
       VAR_5,
       VAR_8,
       &VAR_4);
    if (VAR_6)
 FUNC_7(VAR_0, 1, VAR_6, "_hx509_request_to_pkcs10");

    FUNC_12(&VAR_8);
    FUNC_13(&VAR_5);

    if (VAR_6 == 0)
 FUNC_19(VAR_10, VAR_4.data, VAR_4.length);
    FUNC_3(&VAR_4);

    return 0;
}
