
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 char* VAR_3 ;
 char* FUNC_4 (char const*) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_4,
     const char *VAR_5,
     const char **VAR_6)
{
    krb5_context VAR_7;
    krb5_error_code VAR_8;

    *VAR_4 = 0;

    FUNC_0(&VAR_7);

    if (VAR_6) {
 const char *VAR_9;

 if (VAR_3) {
     FUNC_1(VAR_3);
     VAR_3 = ((void*)0);
 }

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 == ((void*)0)) {
     *VAR_4 = VAR_0;
     return VAR_2;
 }
 VAR_3 = FUNC_4(VAR_9);
 if (VAR_3 == ((void*)0)) {
     *VAR_4 = VAR_0;
     return VAR_2;
 }
 *VAR_6 = VAR_3;
    }

    VAR_8 = FUNC_3(VAR_7, VAR_5);
    if (VAR_8) {
 *VAR_4 = VAR_8;
 return VAR_2;
    }
    return VAR_1;
}
