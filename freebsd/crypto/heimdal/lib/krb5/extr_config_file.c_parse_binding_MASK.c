
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fileptr {int dummy; } ;
typedef int krb5_error_code ;
struct TYPE_7__ {int string; int list; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ krb5_config_binding ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__**,char*,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fileptr*,unsigned int*,int *,char const**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_5(struct fileptr *VAR_3, unsigned *VAR_4, char *VAR_5,
       krb5_config_binding **VAR_6, krb5_config_binding **VAR_7,
       const char **VAR_8)
{
    krb5_config_binding *VAR_9;
    char *VAR_10, *VAR_11;
    krb5_error_code VAR_12 = 0;

    VAR_10 = VAR_5;
    while (*VAR_5 && *VAR_5 != '=' && !FUNC_1((unsigned char)*VAR_5))
 ++VAR_5;
    if (*VAR_5 == '\0') {
 *VAR_8 = "missing =";
 return VAR_0;
    }
    VAR_11 = VAR_5;
    while (FUNC_1((unsigned char)*VAR_5))
 ++VAR_5;
    if (*VAR_5 != '=') {
 *VAR_8 = "missing =";
 return VAR_0;
    }
    ++VAR_5;
    while(FUNC_1((unsigned char)*VAR_5))
 ++VAR_5;
    *VAR_11 = '\0';
    if (*VAR_5 == '{') {
 VAR_9 = FUNC_0(VAR_7, VAR_10, VAR_1);
 if (VAR_9 == ((void*)0)) {
     *VAR_8 = "out of memory";
     return VAR_0;
 }
 VAR_12 = FUNC_2 (VAR_3, VAR_4, &VAR_9->u.list, VAR_8);
    } else {
 VAR_9 = FUNC_0(VAR_7, VAR_10, VAR_2);
 if (VAR_9 == ((void*)0)) {
     *VAR_8 = "out of memory";
     return VAR_0;
 }
 VAR_10 = VAR_5;
 VAR_5 = VAR_10 + FUNC_4(VAR_10);
 while(VAR_5 > VAR_10 && FUNC_1((unsigned char)*(VAR_5-1)))
     --VAR_5;
 *VAR_5 = '\0';
 VAR_9->u.string = FUNC_3(VAR_10);
    }
    *VAR_6 = VAR_9;
    return VAR_12;
}
