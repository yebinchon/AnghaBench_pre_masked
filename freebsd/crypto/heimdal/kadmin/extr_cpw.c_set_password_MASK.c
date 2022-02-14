
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pwbuf ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;


 scalar_t__ FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char**,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,char**) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_6 (krb5_principal VAR_2, char *VAR_3)
{
    krb5_error_code VAR_4 = 0;
    char VAR_5[128];

    if(VAR_3 == ((void*)0)) {
 char *VAR_6;
 char *VAR_7;

 FUNC_4(VAR_0, VAR_2, &VAR_6);
 FUNC_1(&VAR_7, "%s's Password: ", VAR_6);
 FUNC_2 (VAR_6);
 VAR_4 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_7, 1);
 FUNC_2 (VAR_7);
 if(VAR_4){
     return 0;
 }
 VAR_3 = VAR_5;
    }
    if(VAR_4 == 0)
 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
    FUNC_5(VAR_5, 0, sizeof(VAR_5));
    return VAR_4;
}
