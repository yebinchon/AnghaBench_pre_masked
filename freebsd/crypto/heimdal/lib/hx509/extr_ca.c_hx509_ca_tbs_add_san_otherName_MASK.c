
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_3__* hx509_ca_tbs ;
typedef int heim_oid ;
typedef int heim_octet_string ;
typedef int gn ;
struct TYPE_8__ {int value; int type_id; } ;
struct TYPE_9__ {TYPE_1__ otherName; } ;
struct TYPE_11__ {TYPE_2__ u; int element; } ;
struct TYPE_10__ {int san; } ;
typedef TYPE_4__ GeneralName ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

int
FUNC_2(hx509_context VAR_1,
          hx509_ca_tbs VAR_2,
          const heim_oid *VAR_3,
          const heim_octet_string *VAR_4)
{
    GeneralName VAR_5;

    FUNC_1(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.element = VAR_0;
    VAR_5.u.otherName.type_id = *VAR_3;
    VAR_5.u.otherName.value = *VAR_4;

    return FUNC_0(&VAR_2->san, &VAR_5);
}
