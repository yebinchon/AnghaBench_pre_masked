
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char* pw_name; } ;
typedef int * krb5_principal ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 struct passwd* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int **,int *,char const*,char*,...) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

krb5_error_code
FUNC_8 (krb5_context VAR_1,
       krb5_principal *VAR_2)
{
    krb5_error_code VAR_3;
    const char *VAR_4;
    uid_t VAR_5;

    *VAR_2 = ((void*)0);

    VAR_5 = FUNC_4();
    if(VAR_5 == 0) {
 VAR_4 = FUNC_2();
 if(VAR_4 == ((void*)0))
     VAR_4 = FUNC_1();
 if(VAR_4 != ((void*)0) && FUNC_7(VAR_4, "root") != 0)
     VAR_3 = FUNC_5(VAR_1, VAR_2, ((void*)0), VAR_4, "root", ((void*)0));
 else
     VAR_3 = FUNC_5(VAR_1, VAR_2, ((void*)0), "root", ((void*)0));
    } else {
 struct passwd *VAR_6 = FUNC_3(VAR_5);
 if(VAR_6 != ((void*)0))
     VAR_4 = VAR_6->pw_name;
 else {
     VAR_4 = FUNC_1();
     if(VAR_4 == ((void*)0))
  VAR_4 = FUNC_2();
 }
 if(VAR_4 == ((void*)0)) {
     FUNC_6(VAR_1, VAR_0,
       FUNC_0("unable to figure out current "
          "principal", ""));
     return VAR_0;
 }
 VAR_3 = FUNC_5(VAR_1, VAR_2, ((void*)0), VAR_4, ((void*)0));
    }
    return VAR_3;
}
