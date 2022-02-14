
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* krb5_principal ;
typedef int krb5_context ;
typedef int krb5_boolean ;
struct TYPE_5__ {int len; int * val; } ;
struct TYPE_6__ {scalar_t__ name_type; TYPE_1__ name_string; } ;
struct TYPE_7__ {TYPE_2__ name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

krb5_boolean
FUNC_1(krb5_context VAR_3, krb5_principal VAR_4)
{
    if (VAR_4->name.name_type != VAR_1 ||
 VAR_4->name.name_string.len != 2 ||
 FUNC_0(VAR_4->name.name_string.val[0], VAR_2) != 0 ||
 FUNC_0(VAR_4->name.name_string.val[1], VAR_0) != 0)
 return 0;
    return 1;
}
