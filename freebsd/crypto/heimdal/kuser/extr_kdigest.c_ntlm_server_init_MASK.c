
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int type2 ;
struct TYPE_6__ {char* data; int length; } ;
struct ntlm_type2 {char* targetname; TYPE_1__ targetinfo; int flags; int challenge; } ;
struct ntlm_server_init_options {int kerberos_realm_string; } ;
struct ntlm_buf {char* data; int length; } ;
typedef int krb5_ntlm ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {int length; char* data; } ;
typedef TYPE_2__ krb5_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char**) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct ntlm_type2*,struct ntlm_buf*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (int ,int,char*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,TYPE_2__*) ;
 int FUNC_11 (int ,int ,char**) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int,char*,char*) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (struct ntlm_type2*,int ,int) ;
 int FUNC_15 (char*,char*) ;

int
FUNC_16(struct ntlm_server_init_options *VAR_4,
   int VAR_5, char ** VAR_6)
{
    krb5_error_code VAR_7;
    krb5_ntlm VAR_8;
    struct ntlm_type2 VAR_9;
    krb5_data VAR_10, VAR_11;
    struct ntlm_buf VAR_12;
    char *VAR_13;
    static char VAR_14[] = "\x00\x00";

    FUNC_14(&VAR_9, 0, sizeof(VAR_9));

    VAR_7 = FUNC_6(VAR_2, &VAR_8);
    if (VAR_7)
 FUNC_4(VAR_2, 1, VAR_7, "krb5_ntlm_alloc");

    VAR_7 = FUNC_12(VAR_2,
     VAR_8,
     VAR_4->kerberos_realm_string,
     VAR_3,
     VAR_1|VAR_0,
     "NUTCRACKER",
     "L");
    if (VAR_7)
 FUNC_4(VAR_2, 1, VAR_7, "krb5_ntlm_init_request");





    VAR_7 = FUNC_8(VAR_2, VAR_8, &VAR_10);
    if (VAR_7)
 FUNC_4(VAR_2, 1, VAR_7, "krb5_ntlm_init_get_challange");

    if (VAR_10.length != sizeof(VAR_9))
 FUNC_5(VAR_2, 1, "ntlm challenge have wrong length");
    FUNC_13(VAR_9, VAR_10.data, sizeof(VAR_9));
    FUNC_3(&VAR_10);

    VAR_7 = FUNC_9(VAR_2, VAR_8, &VAR_9);
    if (VAR_7)
 FUNC_4(VAR_2, 1, VAR_7, "krb5_ntlm_init_get_flags");

    FUNC_11(VAR_2, VAR_8, &VAR_9);
    VAR_9 = VAR_14;
    VAR_9 = 2;

    VAR_7 = FUNC_2(&VAR_9, &VAR_12);
    if (VAR_7)
 FUNC_5(VAR_2, 1, "heim_ntlm_encode_type2");

    FUNC_1(VAR_9);





    FUNC_0(VAR_12.data, VAR_12.length, &VAR_13);
    FUNC_1(VAR_12.data);
    FUNC_15("type2=%s\n", VAR_13);
    FUNC_1(VAR_13);





    VAR_7 = FUNC_10(VAR_2, VAR_8, &VAR_11);
    if (VAR_7)
 FUNC_4(VAR_2, 1, VAR_7, "krb5_ntlm_init_get_opaque");

    FUNC_0(VAR_11.data, VAR_11.length, &VAR_13);
    FUNC_3(&VAR_11);
    FUNC_15("opaque=%s\n", VAR_13);
    FUNC_1(VAR_13);





    FUNC_7(VAR_2, VAR_8);

    return 0;
}
