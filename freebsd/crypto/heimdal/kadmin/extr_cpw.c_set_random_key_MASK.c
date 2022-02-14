
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef int krb5_keyblock ;
typedef int krb5_error_code ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int **,int*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3 (krb5_principal VAR_2)
{
    krb5_error_code VAR_3;
    int VAR_4;
    krb5_keyblock *VAR_5;
    int VAR_6;

    VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_5, &VAR_6);
    if(VAR_3)
 return VAR_3;
    for(VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
 FUNC_2(VAR_0, &VAR_5[VAR_4]);
    FUNC_0(VAR_5);
    return 0;
}
