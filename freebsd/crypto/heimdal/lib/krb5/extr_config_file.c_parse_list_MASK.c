
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileptr {int dummy; } ;
typedef int krb5_error_code ;
typedef int krb5_config_binding ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int,struct fileptr*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (struct fileptr*,unsigned int*,char*,int **,int **,char const**) ;
 size_t FUNC_3 (char*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_4(struct fileptr *VAR_2, unsigned *VAR_3, krb5_config_binding **VAR_4,
    const char **VAR_5)
{
    char VAR_6[VAR_0];
    krb5_error_code VAR_7;
    krb5_config_binding *VAR_8 = ((void*)0);
    unsigned VAR_9 = *VAR_3;

    while(FUNC_0(VAR_6, sizeof(VAR_6), VAR_2) != ((void*)0)) {
 char *VAR_10;

 ++*VAR_3;
 VAR_6[FUNC_3(VAR_6, "\r\n")] = '\0';
 VAR_10 = VAR_6;
 while(FUNC_1((unsigned char)*VAR_10))
     ++VAR_10;
 if (*VAR_10 == '#' || *VAR_10 == ';' || *VAR_10 == '\0')
     continue;
 while(FUNC_1((unsigned char)*VAR_10))
     ++VAR_10;
 if (*VAR_10 == '}')
     return 0;
 if (*VAR_10 == '\0')
     continue;
 VAR_7 = FUNC_2 (VAR_2, VAR_3, VAR_10, &VAR_8, VAR_4, VAR_5);
 if (VAR_7)
     return VAR_7;
    }
    *VAR_3 = VAR_9;
    *VAR_5 = "unclosed {";
    return VAR_1;
}
