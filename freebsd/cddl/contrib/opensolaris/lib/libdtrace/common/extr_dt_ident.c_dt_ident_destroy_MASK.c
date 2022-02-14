
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* di_name; TYPE_1__* di_ops; } ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_6__ {int (* di_dtor ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(dt_ident_t *VAR_0)
{
 VAR_0->di_ops->di_dtor(VAR_0);
 FUNC_0(VAR_0->di_name);
 FUNC_0(VAR_0);
}
