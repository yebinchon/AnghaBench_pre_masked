
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;


 int FUNC_0 () ;
 char* FUNC_1 (int,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,scalar_t__,char*,...) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,char const*,TYPE_1__*) ;
 int FUNC_6 (int *,char*,size_t,size_t*) ;
 int FUNC_7 (char*,char*,int,int,...) ;
 size_t FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(krb5_context VAR_0, const char *VAR_1,
        size_t VAR_2, size_t VAR_3)
{
    krb5_addresses VAR_4;
    krb5_error_code VAR_5;
    char *VAR_6;
    size_t VAR_7;

    VAR_6 = FUNC_1(1, VAR_3 + 1);

    VAR_5 = FUNC_5(VAR_0, VAR_1, &VAR_4);
    if (VAR_5)
 FUNC_3(VAR_0, 1, VAR_5, "krb5_parse_address");

    if (VAR_4.len != 1)
 FUNC_3(VAR_0, 1, VAR_5, "addresses should be one");

    FUNC_6(&VAR_4.val[0], VAR_6, VAR_2, &VAR_7);





    if (VAR_2 > FUNC_8(VAR_6) + 1)
 FUNC_3(VAR_0, 1, VAR_5, "%s truncate_len %d larger then strlen %d source %s",
   VAR_6, (int)VAR_2, (int)FUNC_8(VAR_6), VAR_1);

    if (VAR_3 != VAR_7)
 FUNC_3(VAR_0, 1, VAR_5, "%s: outlen %d != len %d",
   VAR_6, (int)VAR_3, (int)FUNC_8(VAR_6));

    FUNC_6(&VAR_4.val[0], VAR_6, VAR_3 + 1, &VAR_7);





    if (VAR_7 != VAR_3)
 FUNC_0();
    if (FUNC_8(VAR_6) != VAR_7)
 FUNC_0();

    FUNC_4(VAR_0, &VAR_4);
    FUNC_2(VAR_6);
}
