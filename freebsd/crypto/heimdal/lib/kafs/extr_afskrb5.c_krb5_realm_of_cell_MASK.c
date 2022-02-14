
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kafs_data {char* name; int free_error; int get_error; int get_realm; } ;
typedef int krb5_error_code ;


 int FUNC_0 (struct kafs_data*,char const*,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

krb5_error_code
FUNC_1(const char *VAR_3, char **VAR_4)
{
    struct kafs_data VAR_5;

    VAR_5.name = "krb5";
    VAR_5.get_realm = VAR_2;
    VAR_5.get_error = VAR_1;
    VAR_5.free_error = VAR_0;
    return FUNC_0(&VAR_5, VAR_3, VAR_4);
}
