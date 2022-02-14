
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int deleted; int id; } ;
struct ipc_ids {int in_use; int ipcs_idr; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ipc_ids *VAR_0, struct kern_ipc_perm *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->id);

 FUNC_0(&VAR_0->ipcs_idr, VAR_2);

 VAR_0->in_use--;

 VAR_1->deleted = 1;

 return;
}
