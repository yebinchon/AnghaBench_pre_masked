
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_data {int realm; int port; } ;
typedef int krb5_krbhst_info ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int ,int,char*,int ,char const*,char const*,scalar_t__) ;
 int FUNC_1 (struct krb5_krbhst_data*,int *) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int ,int ***,int*,int ,char*,char const*,char const*,int ) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_0, struct krb5_krbhst_data *VAR_1,
       const char *VAR_2, const char *VAR_3)
{
    krb5_error_code VAR_4;
    krb5_krbhst_info **VAR_5;
    int VAR_6, VAR_7;

    VAR_4 = FUNC_3(VAR_0, &VAR_5, &VAR_6, VAR_1->realm, "SRV", VAR_2, VAR_3,
    VAR_1->port);
    FUNC_0(VAR_0, 2, "searching DNS for realm %s %s.%s -> %d",
  VAR_1->realm, VAR_2, VAR_3, VAR_4);
    if (VAR_4)
 return;
    for(VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 FUNC_1(VAR_1, VAR_5[VAR_7]);
    FUNC_2(VAR_5);
}
