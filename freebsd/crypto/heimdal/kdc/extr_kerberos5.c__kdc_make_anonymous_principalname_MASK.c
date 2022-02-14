
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
struct TYPE_4__ {int len; int ** val; } ;
struct TYPE_5__ {TYPE_1__ name_string; int name_type; } ;
typedef TYPE_2__ PrincipalName ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int ** FUNC_1 (int) ;
 int * FUNC_2 (char*) ;

krb5_error_code
FUNC_3 (PrincipalName *VAR_2)
{
    VAR_2->name_type = VAR_1;
    VAR_2->name_string.len = 1;
    VAR_2->name_string.val = FUNC_1(sizeof(*VAR_2->name_string.val));
    if (VAR_2->name_string.val == ((void*)0))
 return VAR_0;
    VAR_2->name_string.val[0] = FUNC_2("anonymous");
    if (VAR_2->name_string.val[0] == ((void*)0)) {
 FUNC_0(VAR_2->name_string.val);
 VAR_2->name_string.val = ((void*)0);
 return VAR_0;
    }
    return 0;
}
