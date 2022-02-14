
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_addresses ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int,scalar_t__,char*,char const*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,char const*,int *) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_2, int VAR_3)
{
    krb5_error_code VAR_4;
    krb5_addresses VAR_5;

    VAR_4 = FUNC_4 (VAR_0, VAR_2, &VAR_5);
    if (VAR_4)
 FUNC_2 (VAR_0, 1, VAR_4, "parse_address `%s'", VAR_2);
    if (VAR_3)
 FUNC_1(VAR_0, &VAR_5, &VAR_1);
    else
 FUNC_0(VAR_0, &VAR_1, &VAR_5);
    FUNC_3 (VAR_0, &VAR_5);
}
