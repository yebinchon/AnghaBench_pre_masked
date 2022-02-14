
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;


 int FUNC_0 (scalar_t__*,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__ const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_2,
       const krb5_enctype *VAR_3,
       krb5_enctype **VAR_4)
{
    krb5_enctype *VAR_5 = ((void*)0);
    size_t VAR_6, VAR_7;

    for (VAR_7 = 0; VAR_3[VAR_7]; VAR_7++)
 ;
    VAR_7++;
    FUNC_0(VAR_5, VAR_7);
    if(VAR_5 == ((void*)0))
 return FUNC_4(VAR_2);
    for (VAR_7 = 0, VAR_6 = 0; VAR_3[VAR_7]; VAR_7++) {
 if (FUNC_3(VAR_2, VAR_3[VAR_7]) != 0)
     continue;
 VAR_5[VAR_6++] = VAR_3[VAR_7];
    }
    VAR_5[VAR_6] = VAR_0;
    if (VAR_6 == 0) {
 FUNC_2(VAR_5);
 FUNC_5 (VAR_2, VAR_1,
    FUNC_1("no valid enctype set", ""));
 return VAR_1;
    }
    *VAR_4 = VAR_5;
    return 0;
}
