
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct krb5_kafs_data {int * context; int * id; int realm; } ;
struct kafs_data {char* name; struct krb5_kafs_data* data; int free_error; int get_error; int get_realm; int get_cred; scalar_t__ (* afslog_uid ) (struct kafs_data*,char const*,int ,int ,char const*) ;} ;
typedef scalar_t__ krb5_error_code ;
typedef int * krb5_context ;
typedef int krb5_const_realm ;
typedef int * krb5_ccache ;


 scalar_t__ FUNC_0 (struct kafs_data*,char const*,int ,int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **) ;

krb5_error_code
FUNC_5(krb5_context VAR_4,
       krb5_ccache VAR_5,
       const char *VAR_6,
       krb5_const_realm VAR_7,
       uid_t VAR_8,
       const char *VAR_9)
{
    struct kafs_data VAR_10;
    struct krb5_kafs_data VAR_11;
    krb5_error_code VAR_12;

    VAR_10.name = "krb5";
    VAR_10.afslog_uid = FUNC_0;
    VAR_10.get_cred = VAR_1;
    VAR_10.get_realm = VAR_3;
    VAR_10.get_error = VAR_2;
    VAR_10.free_error = VAR_0;
    VAR_10.data = &VAR_11;
    if (VAR_4 == ((void*)0)) {
 VAR_12 = FUNC_4(&VAR_11.context);
 if (VAR_12)
     return VAR_12;
    } else
 VAR_11.context = VAR_4;
    if (VAR_5 == ((void*)0)) {
 VAR_12 = FUNC_2(VAR_11.context, &VAR_11.id);
 if (VAR_12)
     goto out;
    } else
 VAR_11.id = VAR_5;
    VAR_11.realm = VAR_7;
    VAR_12 = FUNC_0(&VAR_10, VAR_6, 0, VAR_8, VAR_9);
    if (VAR_5 == ((void*)0))
 FUNC_1(VAR_4, VAR_11.id);
 out:
    if (VAR_4 == ((void*)0))
 FUNC_3(VAR_11.context);
    return VAR_12;
}
