
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aopen_entry {union aopen_entry* next; } ;
struct tid_info {int atid_lock; int atids_in_use; union aopen_entry* afree; union aopen_entry* atid_tab; } ;
struct adapter {struct tid_info tids; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct adapter *VAR_0, int VAR_1)
{
 struct tid_info *VAR_2 = &VAR_0->tids;
 union aopen_entry *VAR_3 = &VAR_2->atid_tab[VAR_1];

 FUNC_0(&VAR_2->atid_lock);
 VAR_3->next = VAR_2->afree;
 VAR_2->afree = VAR_3;
 VAR_2->atids_in_use--;
 FUNC_1(&VAR_2->atid_lock);
}
