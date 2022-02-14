
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct testcase {char* principal_name; char* password; int* res; int enctype; } ;
typedef int krb5_principal ;
struct TYPE_5__ {unsigned char* data; int length; } ;
struct TYPE_6__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ,int,scalar_t__,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ,char*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (unsigned char*,int*,int) ;
 int FUNC_10 (char*,...) ;
 struct testcase* VAR_0 ;

int
FUNC_11(int VAR_1, char **VAR_2)
{
    struct testcase *VAR_3;
    krb5_context VAR_4;
    krb5_error_code VAR_5;
    int VAR_6 = 0;

    VAR_5 = FUNC_5 (&VAR_4);
    if (VAR_5)
 FUNC_0 (1, "krb5_init_context failed: %d", VAR_5);



    FUNC_7(VAR_4, "");

    for (VAR_3 = VAR_0; VAR_3->principal_name; ++VAR_3) {
 krb5_keyblock VAR_7;
 krb5_principal VAR_8;
 int VAR_9;

 VAR_5 = FUNC_6 (VAR_4, VAR_3->principal_name, &VAR_8);
 if (VAR_5)
     FUNC_1 (VAR_4, 1, VAR_5, "krb5_parse_name %s",
        VAR_3->principal_name);
 VAR_5 = FUNC_8 (VAR_4, VAR_3->enctype, VAR_3->password,
      VAR_8, &VAR_7);
 if (VAR_5)
     FUNC_1 (VAR_4, 1, VAR_5, "krb5_string_to_key");
 FUNC_4 (VAR_4, VAR_8);
 if (FUNC_9 (VAR_7.keyvalue.data, VAR_3->res, VAR_7.keyvalue.length) != 0) {
     const unsigned char *VAR_10 = VAR_7.keyvalue.data;

     FUNC_10 ("string_to_key(%s, %s) failed\n",
      VAR_3->principal_name, VAR_3->password);
     FUNC_10 ("should be: ");
     for (VAR_9 = 0; VAR_9 < VAR_7.keyvalue.length; ++VAR_9)
  FUNC_10 ("%02x", VAR_3->res[VAR_9]);
     FUNC_10 ("\nresult was: ");
     for (VAR_9 = 0; VAR_9 < VAR_7.keyvalue.length; ++VAR_9)
  FUNC_10 ("%02x", VAR_10[VAR_9]);
     FUNC_10 ("\n");
     VAR_6 = 1;
 }
 FUNC_3(VAR_4, &VAR_7);
    }
    FUNC_2(VAR_4);
    return VAR_6;
}
