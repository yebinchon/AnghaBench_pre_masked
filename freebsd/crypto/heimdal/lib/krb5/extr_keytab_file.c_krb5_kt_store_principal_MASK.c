
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_storage ;
typedef TYPE_3__* krb5_principal ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_5__ {int len; int * val; } ;
struct TYPE_6__ {int name_type; TYPE_1__ name_string; } ;
struct TYPE_7__ {TYPE_2__ name; int realm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_2,
   krb5_storage *VAR_3,
   krb5_principal VAR_4)
{
    size_t VAR_5;
    int VAR_6;

    if(FUNC_1(VAR_3, VAR_1))
 VAR_6 = FUNC_2(VAR_3, VAR_4->name.name_string.len + 1);
    else
 VAR_6 = FUNC_2(VAR_3, VAR_4->name.name_string.len);
    if(VAR_6) return VAR_6;
    VAR_6 = FUNC_0(VAR_3, VAR_4->realm);
    if(VAR_6) return VAR_6;
    for(VAR_5 = 0; VAR_5 < VAR_4->name.name_string.len; VAR_5++){
 VAR_6 = FUNC_0(VAR_3, VAR_4->name.name_string.val[VAR_5]);
 if(VAR_6)
     return VAR_6;
    }
    if(!FUNC_1(VAR_3, VAR_0)) {
 VAR_6 = FUNC_3(VAR_3, VAR_4->name.name_type);
 if(VAR_6)
     return VAR_6;
    }

    return 0;
}
