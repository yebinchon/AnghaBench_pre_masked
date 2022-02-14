
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_3__ {char* data; size_t length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;


 int FUNC_0 (int ,int *,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,size_t,char**) ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_0, krb5_storage *VAR_1, krb5_data *VAR_2)
{
    int VAR_3 = 1;
    size_t VAR_4;
    char *VAR_5;

    VAR_5 = VAR_2->data;
    for(VAR_4 = 0; VAR_4 < VAR_2->length; VAR_4++)
 if(!FUNC_3((unsigned char)VAR_5[VAR_4]) && VAR_5[VAR_4] != '.'){
     VAR_3 = 0;
     break;
 }
    if(VAR_3)
 return FUNC_0(VAR_0, VAR_1, "\"%.*s\"",
        VAR_2->length, VAR_2->data);
    FUNC_2(VAR_2->data, VAR_2->length, &VAR_5);
    FUNC_0(VAR_0, VAR_1, "%s", VAR_5);
    FUNC_1(VAR_5);
    return 0;
}
