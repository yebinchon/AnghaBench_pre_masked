
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aopen_entry {void* data; union aopen_entry* next; } ;
struct tid_info {int atid_lock; int atids_in_use; union aopen_entry* afree; union aopen_entry* atid_tab; } ;
struct adapter {struct tid_info tids; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct adapter *VAR_1, void *VAR_2)
{
 struct tid_info *VAR_3 = &VAR_1->tids;
 int VAR_4 = -1;

 FUNC_1(&VAR_3->atid_lock);
 if (VAR_3->afree) {
  union aopen_entry *VAR_5 = VAR_3->afree;

  VAR_4 = VAR_5 - VAR_3->atid_tab;
  FUNC_0(VAR_4 <= VAR_0);
  VAR_3->afree = VAR_5->next;
  VAR_5->data = VAR_2;
  VAR_3->atids_in_use++;
 }
 FUNC_2(&VAR_3->atid_lock);
 return (VAR_4);
}
