
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_3__ {unsigned long qbytes; int has_perm; int perm_mode; int perm_gid; int perm_uid; } ;
struct audit_context {TYPE_1__ ipc; } ;
typedef int mode_t ;
typedef int gid_t ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(unsigned long VAR_1, uid_t VAR_2, gid_t VAR_3, mode_t VAR_4)
{
 struct audit_context *VAR_5 = VAR_0->audit_context;

 VAR_5->ipc.qbytes = VAR_1;
 VAR_5->ipc.perm_uid = VAR_2;
 VAR_5->ipc.perm_gid = VAR_3;
 VAR_5->ipc.perm_mode = VAR_4;
 VAR_5->ipc.has_perm = 1;
}
