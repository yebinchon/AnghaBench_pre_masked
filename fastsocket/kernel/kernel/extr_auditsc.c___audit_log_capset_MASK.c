
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cred {int cap_permitted; int cap_effective; } ;
struct TYPE_4__ {int permitted; int inheritable; int effective; } ;
struct TYPE_5__ {TYPE_1__ cap; int pid; } ;
struct audit_context {int type; TYPE_2__ capset; } ;
typedef int pid_t ;
struct TYPE_6__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

void FUNC_0(pid_t VAR_2,
         const struct cred *VAR_3, const struct cred *VAR_4)
{
 struct audit_context *VAR_5 = VAR_1->audit_context;
 VAR_5->capset.pid = VAR_2;
 VAR_5->capset.cap.effective = VAR_3->cap_effective;
 VAR_5->capset.cap.inheritable = VAR_3->cap_effective;
 VAR_5->capset.cap.permitted = VAR_3->cap_permitted;
 VAR_5->type = VAR_0;
}
