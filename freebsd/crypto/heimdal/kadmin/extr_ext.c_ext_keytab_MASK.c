
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext_keytab_options {int * keytab_string; } ;
struct ext_keytab_data {int keytab; } ;
typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ,char*,struct ext_keytab_data*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,scalar_t__,char*) ;

int
FUNC_5(struct ext_keytab_options *VAR_2, int VAR_3, char **VAR_4)
{
    krb5_error_code VAR_5;
    int VAR_6;
    struct ext_keytab_data VAR_7;

    if (VAR_2->keytab_string == ((void*)0))
 VAR_5 = FUNC_2(VAR_0, &VAR_7.keytab);
    else
 VAR_5 = FUNC_3(VAR_0, VAR_2->keytab_string, &VAR_7.keytab);

    if(VAR_5){
 FUNC_4(VAR_0, VAR_5, "krb5_kt_resolve");
 return 1;
    }

    for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
 VAR_5 = FUNC_0(VAR_4[VAR_6], VAR_1, "ext", &VAR_7);
 if (VAR_5)
     break;
    }

    FUNC_1(VAR_0, VAR_7.keytab);

    return VAR_5 != 0;
}
