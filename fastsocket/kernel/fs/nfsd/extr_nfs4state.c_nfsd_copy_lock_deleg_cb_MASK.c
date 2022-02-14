
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_delegation {struct file_lock* dl_flock; } ;
struct file_lock {scalar_t__ fl_owner; } ;


 int FUNC_0 (char*,struct file_lock*,struct nfs4_delegation*) ;

__attribute__((used)) static
void FUNC_1(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 struct nfs4_delegation *VAR_2 = (struct nfs4_delegation *)VAR_0->fl_owner;

 FUNC_0("NFSD: nfsd_copy_lock_deleg_cb: new fl %p dp %p\n", VAR_0, VAR_2);
 if (!VAR_2)
  return;
 VAR_2->dl_flock = VAR_0;
}
