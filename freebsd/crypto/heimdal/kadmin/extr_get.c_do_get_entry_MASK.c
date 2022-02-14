
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_entry_data {int mask; int extra_mask; int (* format ) (struct get_entry_data*,int *) ;} ;
typedef int princ ;
typedef int krb5_principal ;
typedef int krb5_error_code ;
typedef int kadm5_principal_ent_rec ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct get_entry_data*,int *) ;

__attribute__((used)) static int
FUNC_4(krb5_principal VAR_1, void *VAR_2)
{
    kadm5_principal_ent_rec VAR_3;
    krb5_error_code VAR_4;
    struct get_entry_data *VAR_5 = VAR_2;

    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    VAR_4 = FUNC_1(VAR_0, VAR_1,
         &VAR_3,
         VAR_5->mask | VAR_5->extra_mask);
    if(VAR_4)
 return VAR_4;
    else {
 (VAR_5->format)(VAR_5, &VAR_3);
 FUNC_0(VAR_0, &VAR_3);
    }
    return 0;
}
