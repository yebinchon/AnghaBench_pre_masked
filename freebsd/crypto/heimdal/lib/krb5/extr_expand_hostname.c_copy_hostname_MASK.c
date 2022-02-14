
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1,
       const char *VAR_2,
       char **VAR_3)
{
    *VAR_3 = FUNC_2 (VAR_2);
    if (*VAR_3 == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_3 (*VAR_3);
    return 0;
}
