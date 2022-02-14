
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kafs_token {int dummy; } ;
typedef int krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*,char*,char*,char**) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ,struct kafs_token*,int) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_1, krb5_ccache VAR_2,
    krb5_creds *VAR_3, uid_t VAR_4,
    const char *VAR_5,
    struct kafs_token *VAR_6)
{
    krb5_error_code VAR_7;
    char *VAR_8, *VAR_9;

    VAR_8 = FUNC_4(VAR_5);
    if (VAR_8 == ((void*)0))
 return VAR_0;
    FUNC_0(VAR_8, VAR_8);
    FUNC_2 (VAR_1, "libkafs",
       VAR_8,
       "afs-use-524", "2b", &VAR_9);
    FUNC_1(VAR_8);

    if (FUNC_3(VAR_9, "local") == 0 ||
 FUNC_3(VAR_9, "2b") == 0)
 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_6, 1);
    else
 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_6, 0);

    FUNC_1(VAR_9);
    return VAR_7;
}
