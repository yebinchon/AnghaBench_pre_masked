
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_salt ;
struct TYPE_5__ {size_t length; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_context ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,char**) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ,char const*,int ,TYPE_2__*) ;
 int FUNC_5 (char const*,...) ;

__attribute__((used)) static void
FUNC_6(krb5_context VAR_0,
      krb5_enctype VAR_1,
      const char *VAR_2,
      krb5_salt VAR_3,
      const char *VAR_4)
{
    krb5_error_code VAR_5;
    size_t VAR_6;
    krb5_keyblock VAR_7;
    char *VAR_8;

    VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_7);
    if (VAR_5)
 FUNC_2(VAR_0, 1, VAR_5, "krb5_string_to_key_salt");
    VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_8);
    if (VAR_5)
 FUNC_2(VAR_0, 1, VAR_5, "krb5_enctype_to_string");
    FUNC_5(VAR_4, VAR_8);
    FUNC_5(": ");
    for(VAR_6 = 0; VAR_6 < VAR_7.keyvalue.length; VAR_6++)
 FUNC_5("%02x", ((unsigned char*)VAR_7.keyvalue.data)[VAR_6]);
    FUNC_5("\n");
    FUNC_3(VAR_0, &VAR_7);
    FUNC_0(VAR_8);
}
