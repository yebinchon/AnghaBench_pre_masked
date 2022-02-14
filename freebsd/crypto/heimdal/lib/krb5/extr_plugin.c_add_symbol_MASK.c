
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_plugin {struct krb5_plugin* next; void* symbol; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 struct krb5_plugin* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_1, struct krb5_plugin **VAR_2, void *VAR_3)
{
    struct krb5_plugin *VAR_4;

    VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0, "malloc: out of memory");
 return VAR_0;
    }
    VAR_4->symbol = VAR_3;
    VAR_4->next = *VAR_2;
    *VAR_2 = VAR_4;
    return 0;
}
