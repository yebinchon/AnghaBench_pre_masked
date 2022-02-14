
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(int VAR_1, char **VAR_2)
{
    krb5_context VAR_3;
    krb5_error_code VAR_4;

    VAR_0;

    FUNC_6(VAR_2[0]);

    VAR_4 = FUNC_3(&VAR_3);
    if (VAR_4)
 FUNC_1 (1, "krb5_init_context failed: %d", VAR_4);

    FUNC_5(VAR_3, "RANGE:127.0.0.0/8");
    FUNC_5(VAR_3, "RANGE:127.0.0.0/24");
    FUNC_5(VAR_3, "RANGE:IPv4:127.0.0.0-IPv4:127.0.0.255");
    FUNC_5(VAR_3, "RANGE:130.237.237.4/29");







    FUNC_0(VAR_3, "IPv4:127.0.0.0");
    FUNC_0(VAR_3, "RANGE:IPv4:127.0.0.0-IPv4:127.0.0.255");
    FUNC_4(VAR_3, "RANGE:127.0.0.0/8", "inet:127.0.0.0", 1);
    FUNC_4(VAR_3, "RANGE:127.0.0.0/8", "inet:127.255.255.255", 1);
    FUNC_4(VAR_3, "RANGE:127.0.0.0/8", "inet:128.0.0.0", 0);

    FUNC_4(VAR_3, "RANGE:130.237.237.8/29", "inet:130.237.237.7", 0);
    FUNC_4(VAR_3, "RANGE:130.237.237.8/29", "inet:130.237.237.8", 1);
    FUNC_4(VAR_3, "RANGE:130.237.237.8/29", "inet:130.237.237.15", 1);
    FUNC_4(VAR_3, "RANGE:130.237.237.8/29", "inet:130.237.237.16", 0);

    FUNC_2(VAR_3);

    return 0;
}
