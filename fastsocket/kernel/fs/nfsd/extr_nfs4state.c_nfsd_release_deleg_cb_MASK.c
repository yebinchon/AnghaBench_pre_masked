
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_delegation {int * dl_flock; int dl_count; } ;
struct file_lock {int fl_flags; scalar_t__ fl_owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct file_lock*,struct nfs4_delegation*,int ) ;

__attribute__((used)) static
void FUNC_2(struct file_lock *VAR_1)
{
 struct nfs4_delegation *VAR_2 = (struct nfs4_delegation *)VAR_1->fl_owner;

 FUNC_1("NFSD nfsd_release_deleg_cb: fl %p dp %p dl_count %d\n", VAR_1,VAR_2, FUNC_0(&VAR_2->dl_count));

 if (!(VAR_1->fl_flags & VAR_0) || !VAR_2)
  return;
 VAR_2->dl_flock = ((void*)0);
}
