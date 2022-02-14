
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_9__ {TYPE_2__* extensions; } ;
typedef TYPE_4__ hdb_entry ;
struct TYPE_6__ {scalar_t__ element; } ;
struct TYPE_8__ {scalar_t__ mandatory; TYPE_1__ data; } ;
struct TYPE_7__ {size_t len; TYPE_3__* val; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

krb5_error_code
FUNC_1(krb5_context VAR_2, const hdb_entry *VAR_3)
{
    size_t VAR_4;

    if (VAR_3->extensions == ((void*)0))
 return 0;





    for (VAR_4 = 0; VAR_4 < VAR_3->extensions->len; VAR_4++) {
 if (VAR_3->extensions->val[VAR_4].data.element !=
     VAR_1)
     continue;
 if (VAR_3->extensions->val[VAR_4].mandatory) {
     FUNC_0(VAR_2, VAR_0,
       "Principal have unknown "
       "mandatory extension");
     return VAR_0;
 }
    }
    return 0;
}
