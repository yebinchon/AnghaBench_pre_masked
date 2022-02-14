
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int pid_t ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_ccache ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int *) ;
 char* FUNC_2 (int ,int ,int ) ;

krb5_error_code
FUNC_3(krb5_context VAR_1,
     pid_t VAR_2,
     uid_t VAR_3,
     gid_t VAR_4,
     kcm_ccache *VAR_5)
{
    krb5_error_code VAR_6;
    char *VAR_7;

    VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
    if (VAR_7 == ((void*)0)) {
 return VAR_0;
    }

    VAR_6 = FUNC_1(VAR_1, VAR_7, VAR_5);

    FUNC_0(VAR_7);
    return VAR_6;
}
