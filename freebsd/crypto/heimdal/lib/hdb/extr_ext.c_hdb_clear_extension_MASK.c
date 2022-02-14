
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_9__ {TYPE_3__* extensions; } ;
typedef TYPE_2__ hdb_entry ;
struct TYPE_8__ {unsigned int element; } ;
struct TYPE_10__ {size_t len; struct TYPE_10__* val; TYPE_1__ data; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

krb5_error_code
FUNC_3(krb5_context VAR_0,
      hdb_entry *VAR_1,
      int VAR_2)
{
    size_t VAR_3;

    if (VAR_1->extensions == ((void*)0))
 return 0;

    for (VAR_3 = 0; VAR_3 < VAR_1->extensions->len; VAR_3++) {
 if (VAR_1->extensions->val[VAR_3].data.element == (unsigned)VAR_2) {
     FUNC_1(&VAR_1->extensions->val[VAR_3]);
     FUNC_2(&VAR_1->extensions->val[VAR_3],
      &VAR_1->extensions->val[VAR_3 + 1],
      sizeof(VAR_1->extensions->val[VAR_3]) * (VAR_1->extensions->len - VAR_3 - 1));
     VAR_1->extensions->len--;
 }
    }
    if (VAR_1->extensions->len == 0) {
 FUNC_0(VAR_1->extensions->val);
 FUNC_0(VAR_1->extensions);
 VAR_1->extensions = ((void*)0);
    }

    return 0;
}
