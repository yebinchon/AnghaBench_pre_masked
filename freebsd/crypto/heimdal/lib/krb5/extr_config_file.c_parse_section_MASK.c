
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_config_section ;


 int VAR_0 ;
 int * FUNC_0 (int **,char*,int ) ;
 int VAR_1 ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static krb5_error_code
FUNC_2(char *VAR_2, krb5_config_section **VAR_3, krb5_config_section **VAR_4,
       const char **VAR_5)
{
    char *VAR_6;
    krb5_config_section *VAR_7;

    VAR_6 = FUNC_1 (VAR_2 + 1, ']');
    if (VAR_6 == ((void*)0)) {
 *VAR_5 = "missing ]";
 return VAR_0;
    }
    *VAR_6 = '\0';
    VAR_7 = FUNC_0(VAR_4, VAR_2 + 1, VAR_1);
    if(VAR_7 == ((void*)0)) {
 *VAR_5 = "out of memory";
 return VAR_0;
    }
    *VAR_3 = VAR_7;
    return 0;
}
