
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int mode; int gid; int uid; } ;
struct ipc64_perm {int mode; int gid; int uid; } ;


 int VAR_0 ;

void FUNC_0(struct ipc64_perm *VAR_1, struct kern_ipc_perm *VAR_2)
{
 VAR_2->uid = VAR_1->uid;
 VAR_2->gid = VAR_1->gid;
 VAR_2->mode = (VAR_2->mode & ~VAR_0)
  | (VAR_1->mode & VAR_0);
}
