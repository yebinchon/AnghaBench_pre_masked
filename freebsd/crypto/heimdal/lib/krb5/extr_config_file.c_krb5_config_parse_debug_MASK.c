
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fileptr {int dummy; } ;
typedef int krb5_error_code ;
struct TYPE_6__ {int list; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ krb5_config_section ;
typedef int krb5_config_binding ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int,struct fileptr*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (struct fileptr*,unsigned int*,char*,int **,int *,char const**) ;
 int FUNC_3 (char*,TYPE_2__**,TYPE_2__**,char const**) ;
 size_t FUNC_4 (char*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_5 (struct fileptr *VAR_2,
    krb5_config_section **VAR_3,
    unsigned *VAR_4,
    const char **VAR_5)
{
    krb5_config_section *VAR_6 = ((void*)0);
    krb5_config_binding *VAR_7 = ((void*)0);
    char VAR_8[VAR_1];
    krb5_error_code VAR_9;

    while (FUNC_0(VAR_8, sizeof(VAR_8), VAR_2) != ((void*)0)) {
 char *VAR_10;

 ++*VAR_4;
 VAR_8[FUNC_4(VAR_8, "\r\n")] = '\0';
 VAR_10 = VAR_8;
 while(FUNC_1((unsigned char)*VAR_10))
     ++VAR_10;
 if (*VAR_10 == '#' || *VAR_10 == ';')
     continue;
 if (*VAR_10 == '[') {
     VAR_9 = FUNC_3(VAR_10, &VAR_6, VAR_3, VAR_5);
     if (VAR_9)
  return VAR_9;
     VAR_7 = ((void*)0);
 } else if (*VAR_10 == '}') {
     *VAR_5 = "unmatched }";
     return VAR_0;
 } else if(*VAR_10 != '\0') {
     if (VAR_6 == ((void*)0)) {
  *VAR_5 = "binding before section";
  return VAR_0;
     }
     VAR_9 = FUNC_2(VAR_2, VAR_4, VAR_10, &VAR_7, &VAR_6->u.list, VAR_5);
     if (VAR_9)
  return VAR_9;
 }
    }
    return 0;
}
