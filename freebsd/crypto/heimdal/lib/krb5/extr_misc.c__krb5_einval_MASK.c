
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int,char*,char const*,unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,char const*,unsigned long) ;

krb5_error_code
FUNC_5(krb5_context VAR_1, const char *VAR_2, unsigned long VAR_3)
{

    FUNC_4(VAR_1, VAR_0,
      FUNC_0("programmer error: invalid argument to %s argument %lu",
         "function:line"),
      VAR_2, VAR_3);
    if (FUNC_3(VAR_1, 10)) {
 FUNC_1(VAR_1, 10, "invalid argument to function %s argument %lu",
      VAR_2, VAR_3);
 FUNC_2(VAR_1);
    }

    return VAR_0;
}
