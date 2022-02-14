
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * krb5_realm ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ,int ,int ) ;
 int ** FUNC_3 (int) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_5 (krb5_context VAR_1, const char *VAR_2, krb5_realm **VAR_3)
{

    *VAR_3 = FUNC_3 (2 * sizeof(**VAR_3));
    if (*VAR_3 == ((void*)0)) {
 FUNC_2(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    (*VAR_3)[0] = FUNC_4 (VAR_2);
    if ((*VAR_3)[0] == ((void*)0)) {
 FUNC_1 (*VAR_3);
 FUNC_2(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    (*VAR_3)[1] = ((void*)0);
    return 0;
}
