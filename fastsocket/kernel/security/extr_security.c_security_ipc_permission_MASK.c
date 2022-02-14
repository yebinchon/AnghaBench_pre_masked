
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kern_ipc_perm {int dummy; } ;
struct TYPE_2__ {int (* ipc_permission ) (struct kern_ipc_perm*,short) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kern_ipc_perm*,short) ;

int FUNC_1(struct kern_ipc_perm *VAR_1, short VAR_2)
{
 return VAR_0->ipc_permission(VAR_1, VAR_2);
}
