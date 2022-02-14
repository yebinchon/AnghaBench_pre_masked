
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kern_ipc_perm {int dummy; } ;
struct TYPE_2__ {int (* ipc_getsecid ) (struct kern_ipc_perm*,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kern_ipc_perm*,int *) ;

void FUNC_1(struct kern_ipc_perm *VAR_1, u32 *VAR_2)
{
 VAR_0->ipc_getsecid(VAR_1, VAR_2);
}
