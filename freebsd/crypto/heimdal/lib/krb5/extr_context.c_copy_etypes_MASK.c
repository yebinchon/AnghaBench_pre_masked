
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ret_enctypes ;
typedef int krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static krb5_error_code
FUNC_4 (krb5_context VAR_1,
      krb5_enctype *VAR_2,
      krb5_enctype **VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
 ;
    VAR_4++;

    *VAR_3 = FUNC_2(sizeof(VAR_3[0]) * VAR_4);
    if (*VAR_3 == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_3(*VAR_3, VAR_2, sizeof(VAR_3[0]) * VAR_4);
    return 0;
}
