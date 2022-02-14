
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* heim_ipc ;
typedef int heim_idata ;
typedef int * heim_icred ;
struct TYPE_5__ {int ctx; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* ipc ) (int ,int const*,int *,int **) ;} ;


 int FUNC_0 (int ,int const*,int *,int **) ;

int
FUNC_1(heim_ipc VAR_0, const heim_idata *VAR_1, heim_idata *VAR_2,
       heim_icred *VAR_3)
{
    if (VAR_3)
 *VAR_3 = ((void*)0);
    return (VAR_0->ops->ipc)(VAR_0->ctx, VAR_1, VAR_2, VAR_3);
}
