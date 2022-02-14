
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ushort_t ;
struct TYPE_6__ {int (* di_dtor ) (TYPE_2__*) ;} ;
typedef TYPE_1__ dt_idops_t ;
struct TYPE_7__ {int * di_data; void* di_iarg; TYPE_1__ const* di_ops; int di_kind; } ;
typedef TYPE_2__ dt_ident_t ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(dt_ident_t *VAR_0, ushort_t VAR_1,
    const dt_idops_t *VAR_2, void *VAR_3)
{
 VAR_0->di_ops->di_dtor(VAR_0);
 VAR_0->di_kind = VAR_1;
 VAR_0->di_ops = VAR_2;
 VAR_0->di_iarg = VAR_3;
 VAR_0->di_data = ((void*)0);
}
