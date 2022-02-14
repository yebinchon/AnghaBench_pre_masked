
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_field {struct acl_field* next; } ;
typedef int krb5_context ;
typedef int krb5_boolean ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct acl_field*) ;
 int FUNC_1 (char const**,char*,char*,int) ;

__attribute__((used)) static krb5_boolean
FUNC_2(krb5_context VAR_2,
       struct acl_field *VAR_3,
       const char *VAR_4)
{
    char VAR_5[256];
    while(FUNC_1(&VAR_4, " \t", VAR_5, sizeof(VAR_5)) != -1) {
 if(VAR_5[0] == '\0')
     continue;
 if (VAR_3 == ((void*)0))
     return VAR_0;
 if(!FUNC_0(VAR_2, VAR_5, VAR_3)) {
     return VAR_0;
 }
 VAR_3 = VAR_3->next;
    }
    if (VAR_3)
 return VAR_0;
    return VAR_1;
}
