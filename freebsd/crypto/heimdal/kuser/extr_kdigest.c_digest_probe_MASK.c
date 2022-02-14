
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digest_probe_options {int * realm_string; } ;
typedef int * krb5_realm ;
typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int ,unsigned int*) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (char*,unsigned int) ;

int
FUNC_4(struct digest_probe_options *VAR_2,
      int VAR_3, char ** VAR_4)
{
    krb5_error_code VAR_5;
    krb5_realm VAR_6;
    unsigned VAR_7;

    VAR_6 = VAR_2->realm_string;

    if (VAR_6 == ((void*)0))
 FUNC_0(1, "realm missing");

    VAR_5 = FUNC_1(VAR_0, VAR_6, VAR_1, &VAR_7);
    if (VAR_5)
 FUNC_2(VAR_0, 1, VAR_5, "digest_probe");

    FUNC_3("flags: %u\n", VAR_7);

    return 0;
}
