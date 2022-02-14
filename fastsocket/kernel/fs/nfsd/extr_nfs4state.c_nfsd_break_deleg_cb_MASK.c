
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_delegation {TYPE_1__* dl_file; int dl_time; int dl_recall_lru; int dl_count; } ;
struct file_lock {scalar_t__ fl_break_time; scalar_t__ fl_owner; } ;
struct TYPE_2__ {int fi_had_conflict; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct nfs4_delegation*,struct file_lock*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nfs4_delegation*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static
void FUNC_7(struct file_lock *VAR_2)
{
 struct nfs4_delegation *VAR_3 = (struct nfs4_delegation *)VAR_2->fl_owner;

 FUNC_1("NFSD nfsd_break_deleg_cb: dp %p fl %p\n",VAR_3,VAR_2);
 if (!VAR_3)
  return;






 FUNC_0(&VAR_3->dl_count);

 FUNC_5(&VAR_1);
 FUNC_3(&VAR_3->dl_recall_lru, &VAR_0);
 FUNC_6(&VAR_1);


 VAR_3->dl_time = FUNC_2();






 VAR_2->fl_break_time = 0;

 VAR_3->dl_file->fi_had_conflict = 1;
 FUNC_4(VAR_3);
}
