
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;


 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int,scalar_t__,char*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,char const*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(krb5_context VAR_0, const char *VAR_1,
    const char *VAR_2, int VAR_3)
{
    krb5_addresses VAR_4, VAR_5;
    krb5_error_code VAR_6;

    VAR_6 = FUNC_4(VAR_0, VAR_1, &VAR_4);
    if (VAR_6)
 FUNC_1(VAR_0, 1, VAR_6, "krb5_parse_address");

    if (VAR_4.len != 1)
 FUNC_1(VAR_0, 1, VAR_6, "wrong num of addresses");

    VAR_6 = FUNC_4(VAR_0, VAR_2, &VAR_5);
    if (VAR_6)
 FUNC_1(VAR_0, 1, VAR_6, "krb5_parse_address");

    if (VAR_5.len != 1)
 FUNC_1(VAR_0, 1, VAR_6, "wrong num of addresses");

    if (FUNC_0(VAR_0, &VAR_4.val[0], &VAR_5.val[0]) == 0) {
 if (!VAR_3)
     FUNC_2(VAR_0, 1, "match when one shouldn't be");
    } else {
 if (VAR_3)
     FUNC_2(VAR_0, 1, "no match when one should be");
    }

    FUNC_3(VAR_0, &VAR_4);
    FUNC_3(VAR_0, &VAR_5);
}
