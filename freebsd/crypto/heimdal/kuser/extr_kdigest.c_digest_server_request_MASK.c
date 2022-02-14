
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct digest_server_request_options {int kerberos_realm_string; int * client_response_string; int * opaque_string; int client_nonce_string; int * server_nonce_string; int username_string; int * type_string; int * server_identifier_string; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_digest ;
struct TYPE_4__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ krb5_data ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,char**) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int *) ;
 scalar_t__ FUNC_12 (int ,int ,int *) ;
 scalar_t__ FUNC_13 (int ,int ,int *) ;
 scalar_t__ FUNC_14 (int ,int ,int *) ;
 scalar_t__ FUNC_15 (int ,int ,int *) ;
 scalar_t__ FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int,scalar_t__,char*) ;
 int FUNC_18 (int ,int,char*) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (int *,char*) ;

int
FUNC_21(struct digest_server_request_options *VAR_2,
        int VAR_3, char **VAR_4)
{
    krb5_error_code VAR_5;
    krb5_digest VAR_6;
    const char *VAR_7, *VAR_8;
    krb5_data VAR_9;

    if (VAR_2->server_nonce_string == ((void*)0))
 FUNC_0(1, "server nonce missing");
    if (VAR_2->type_string == ((void*)0))
 FUNC_0(1, "type missing");
    if (VAR_2->opaque_string == ((void*)0))
 FUNC_0(1, "opaque missing");
    if (VAR_2->client_response_string == ((void*)0))
 FUNC_0(1, "client response missing");

    VAR_5 = FUNC_4(VAR_0, &VAR_6);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "digest_alloc");

    if (FUNC_20(VAR_2->type_string, "CHAP") == 0) {
 if (VAR_2->server_identifier_string == ((void*)0))
     FUNC_0(1, "server identifier missing");

 VAR_5 = FUNC_11(VAR_0, VAR_6,
      VAR_2->server_identifier_string);
 if (VAR_5)
     FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_set_type");
    }

    VAR_5 = FUNC_15(VAR_0, VAR_6, VAR_2->type_string);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_set_type");

    VAR_5 = FUNC_16(VAR_0, VAR_6, VAR_2->username_string);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_set_username");

    VAR_5 = FUNC_14(VAR_0, VAR_6,
           VAR_2->server_nonce_string);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_set_server_nonce");

    if(VAR_2->client_nonce_string) {
 VAR_5 = FUNC_10(VAR_0, VAR_6,
        VAR_2->client_nonce_string);
 if (VAR_5)
     FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_set_client_nonce");
    }


    VAR_5 = FUNC_12(VAR_0, VAR_6, VAR_2->opaque_string);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_set_opaque");

    VAR_5 = FUNC_13(VAR_0, VAR_6,
           VAR_2->client_response_string);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_set_responseData");

    VAR_5 = FUNC_9(VAR_0, VAR_6,
         VAR_2->kerberos_realm_string, VAR_1);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_request");

    VAR_7 = FUNC_8(VAR_0, VAR_6) ? "ok" : "failed";
    VAR_8 = FUNC_6(VAR_0, VAR_6);

    FUNC_19("status=%s\n", VAR_7);
    if (VAR_8)
 FUNC_19("rsp=%s\n", VAR_8);
    FUNC_19("tickets=no\n");

    VAR_5 = FUNC_7(VAR_0, VAR_6, &VAR_9);
    if (VAR_5)
 FUNC_17(VAR_0, 1, VAR_5, "krb5_digest_get_session_key");

    if (VAR_9.length) {
 char *VAR_10;
 FUNC_2(VAR_9.data, VAR_9.length, &VAR_10);
 if (VAR_10 == ((void*)0))
     FUNC_18(VAR_0, 1, "hex_encode");
 FUNC_3(&VAR_9);
 FUNC_19("session-key=%s\n", VAR_10);
 FUNC_1(VAR_10);
    }

    FUNC_5(VAR_6);

    return 0;
}
