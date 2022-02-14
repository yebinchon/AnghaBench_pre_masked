
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digest_server_init_options {char* type_string; int kerberos_realm_string; int cb_value_string; int cb_type_string; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_digest ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (int ,int,scalar_t__,char*) ;
 int FUNC_9 (char*,char const*) ;

int
FUNC_10(struct digest_server_init_options *VAR_2,
     int VAR_3, char ** VAR_4)
{
    krb5_error_code VAR_5;
    krb5_digest VAR_6;

    VAR_5 = FUNC_0(VAR_0, &VAR_6);
    if (VAR_5)
 FUNC_8(VAR_0, 1, VAR_5, "digest_alloc");

    VAR_5 = FUNC_7(VAR_0, VAR_6, VAR_2->type_string);
    if (VAR_5)
 FUNC_8(VAR_0, 1, VAR_5, "krb5_digest_set_type");

    if (VAR_2->cb_type_string && VAR_2->cb_value_string) {
 VAR_5 = FUNC_6(VAR_0, VAR_6,
     VAR_2->cb_type_string,
     VAR_2->cb_value_string);
 if (VAR_5)
     FUNC_8(VAR_0, 1, VAR_5, "krb5_digest_set_server_cb");
    }
    VAR_5 = FUNC_5(VAR_0,
       VAR_6,
       VAR_2->kerberos_realm_string,
       VAR_1);
    if (VAR_5)
 FUNC_8(VAR_0, 1, VAR_5, "krb5_digest_init_request");

    FUNC_9("type=%s\n", VAR_2->type_string);
    FUNC_9("server-nonce=%s\n",
    FUNC_4(VAR_0, VAR_6));
    {
 const char *VAR_7 = FUNC_2(VAR_0, VAR_6);
 if (VAR_7)
     FUNC_9("identifier=%s\n", VAR_7);
    }
    FUNC_9("opaque=%s\n", FUNC_3(VAR_0, VAR_6));

    FUNC_1(VAR_6);

    return 0;
}
