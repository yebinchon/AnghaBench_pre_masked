
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_salt ;
struct TYPE_4__ {scalar_t__* key_data_contents; int * key_data_length; int * key_data_type; } ;
typedef TYPE_1__ krb5_key_data ;
typedef scalar_t__ krb5_error_code ;


 int FUNC_0 (char**,char*,int ,...) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,char**) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char**) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_8(krb5_key_data *VAR_1, krb5_salt *VAR_2, char *VAR_3, size_t VAR_4)
{
    krb5_error_code VAR_5;
    char *VAR_6;

    VAR_5 = FUNC_3 (VAR_0,
      VAR_1->key_data_type[0],
      &VAR_6);
    if (VAR_5)
 FUNC_0 (&VAR_6, "unknown(%d)", VAR_1->key_data_type[0]);
    FUNC_7(VAR_3, VAR_6, VAR_4);
    FUNC_2(VAR_6);

    FUNC_6(VAR_3, "(", VAR_4);

    VAR_5 = FUNC_4 (VAR_0,
       VAR_1->key_data_type[0],
       VAR_1->key_data_type[1],
       &VAR_6);
    if (VAR_5)
 FUNC_0 (&VAR_6, "unknown(%d)", VAR_1->key_data_type[1]);
    FUNC_6(VAR_3, VAR_6, VAR_4);
    FUNC_2(VAR_6);

    if (FUNC_1(VAR_2, VAR_1) == 0)
 VAR_6 = FUNC_5("");
    else if(VAR_1->key_data_length[1] == 0)
 VAR_6 = FUNC_5("()");
    else
 FUNC_0 (&VAR_6, "(%.*s)", VAR_1->key_data_length[1],
    (char *)VAR_1->key_data_contents[1]);
    FUNC_6(VAR_3, VAR_6, VAR_4);
    FUNC_2(VAR_6);

    FUNC_6(VAR_3, ")", VAR_4);
}
