
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kern_ipc_perm {int mode; int gid; int uid; } ;
struct TYPE_3__ {int osid; scalar_t__ has_perm; int mode; int gid; int uid; } ;
struct audit_context {int type; TYPE_1__ ipc; } ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct kern_ipc_perm*,int *) ;

void FUNC_1(struct kern_ipc_perm *VAR_2)
{
 struct audit_context *VAR_3 = VAR_1->audit_context;
 VAR_3->ipc.uid = VAR_2->uid;
 VAR_3->ipc.gid = VAR_2->gid;
 VAR_3->ipc.mode = VAR_2->mode;
 VAR_3->ipc.has_perm = 0;
 FUNC_0(VAR_2, &VAR_3->ipc.osid);
 VAR_3->type = VAR_0;
}
