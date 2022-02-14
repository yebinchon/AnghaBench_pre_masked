
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;
typedef int buf2 ;
typedef int buf ;


 int FUNC_0 (int ,int,scalar_t__,char*,...) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,char const*,TYPE_1__*) ;
 int FUNC_3 (int *,char*,int,size_t*) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(krb5_context VAR_0, const char *VAR_1)
{
    krb5_addresses VAR_2;
    krb5_error_code VAR_3;
    char VAR_4[38];
    char VAR_5[1000];
    size_t VAR_6;
    int VAR_7;

    VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_2);
    if (VAR_3)
 FUNC_0(VAR_0, 1, VAR_3, "krb5_parse_address");

    if (VAR_2.len < 1)
 FUNC_0(VAR_0, 1, VAR_3, "too few addresses");

    for (VAR_7 = 0; VAR_7 < VAR_2.len; VAR_7++) {
 FUNC_3(&VAR_2.val[VAR_7], VAR_4, sizeof(VAR_4), &VAR_6);



 if (FUNC_5(VAR_4) > sizeof(VAR_4))
     FUNC_0(VAR_0, 1, VAR_3, "len %d larger then buf %d",
       (int)FUNC_5(VAR_4), (int)sizeof(VAR_4));
 FUNC_3(&VAR_2.val[VAR_7], VAR_5, sizeof(VAR_5), &VAR_6);



 if (FUNC_5(VAR_5) > sizeof(VAR_5))
     FUNC_0(VAR_0, 1, VAR_3, "len %d larger then buf %d",
       (int)FUNC_5(VAR_5), (int)sizeof(VAR_5));

    }
    FUNC_1(VAR_0, &VAR_2);

}
