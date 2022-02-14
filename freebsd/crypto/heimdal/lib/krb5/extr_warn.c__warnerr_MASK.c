
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfmt ;
typedef int va_list ;
typedef scalar_t__ krb5_error_code ;
typedef TYPE_1__* krb5_context ;
struct TYPE_6__ {scalar_t__ warn_dest; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 char* FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int,char*,char const*,char const*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char**,char const*,int ) ;
 int FUNC_6 (char*,char const*,char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_1, int VAR_2,
  krb5_error_code VAR_3, int VAR_4, const char *VAR_5, va_list VAR_6)
{
    char VAR_7[7] = "";
    const char *VAR_8[2], **VAR_9;
    char *VAR_10 = ((void*)0);
    const char *VAR_11 = ((void*)0);
    krb5_error_code VAR_12;

    VAR_8[0] = VAR_8[1] = ((void*)0);
    VAR_9 = VAR_8;
    if(VAR_5){
 FUNC_4(VAR_7, "%s", sizeof(VAR_7));
 if(VAR_2)
     FUNC_4(VAR_7, ": ", sizeof(VAR_7));
 VAR_12 = FUNC_5(&VAR_10, VAR_5, VAR_6);
 if(VAR_12 < 0 || VAR_10 == ((void*)0))
     return VAR_0;
 *VAR_9++ = VAR_10;
    }
    if(VAR_1 && VAR_2){
 FUNC_4(VAR_7, "%s", sizeof(VAR_7));

 VAR_11 = FUNC_2(VAR_1, VAR_3);
 if (VAR_11 != ((void*)0)) {
     *VAR_9 = VAR_11;
 } else {
     *VAR_9= "<unknown error>";
 }
    }

    if(VAR_1 && VAR_1->warn_dest)
 FUNC_3(VAR_1, VAR_1->warn_dest, VAR_4, VAR_7, VAR_8[0], VAR_8[1]);
    else
 FUNC_6(VAR_7, VAR_8[0], VAR_8[1]);
    FUNC_0(VAR_10);
    FUNC_1(VAR_1, VAR_11);
    return 0;
}
