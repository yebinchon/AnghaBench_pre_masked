
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_krbhst_info ;
typedef int krb5_krbhst_handle ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int host ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 char** FUNC_1 (int,int) ;
 int FUNC_2 (int ,char**) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,char const*,unsigned int,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int **) ;
 scalar_t__ FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,char const*) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_3, const char *VAR_4,
     unsigned int VAR_5, char ***VAR_6)
{
    krb5_error_code VAR_7;
    int VAR_8 = 0;
    krb5_krbhst_handle VAR_9;
    char VAR_10[VAR_2];
    krb5_krbhst_info *VAR_11;

    VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_9);
    if (VAR_7)
 return VAR_7;

    while(FUNC_5(VAR_3, VAR_9, &VAR_11) == 0)
 VAR_8++;
    if(VAR_8 == 0) {
 FUNC_8(VAR_3, VAR_1,
          FUNC_0("No KDC found for realm %s", ""), VAR_4);
 return VAR_1;
    }
    *VAR_6 = FUNC_1(VAR_8 + 1, sizeof(**VAR_6));
    if(*VAR_6 == ((void*)0)) {
 FUNC_3(VAR_3, VAR_9);
 return VAR_0;
    }

    FUNC_7(VAR_3, VAR_9);
    VAR_8 = 0;
    while(FUNC_6(VAR_3, VAR_9,
         VAR_10, sizeof(VAR_10)) == 0) {
 if(((*VAR_6)[VAR_8++] = FUNC_9(VAR_10)) == ((void*)0)) {
     FUNC_2(VAR_3, *VAR_6);
     FUNC_3(VAR_3, VAR_9);
     return VAR_0;
 }
    }
    (*VAR_6)[VAR_8] = ((void*)0);
    FUNC_3(VAR_3, VAR_9);
    return 0;
}
