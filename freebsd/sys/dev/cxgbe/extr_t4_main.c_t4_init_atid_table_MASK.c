
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int natids; TYPE_1__* atid_tab; scalar_t__ atids_in_use; TYPE_1__* afree; int atid_lock; } ;
struct adapter {struct tid_info tids; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_4)
{
 struct tid_info *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_4->tids;
 if (VAR_5->natids == 0)
  return;

 FUNC_0(VAR_5->atid_tab == ((void*)0));

 VAR_5->atid_tab = FUNC_1(VAR_5->natids * sizeof(*VAR_5->atid_tab), VAR_1,
     VAR_3 | VAR_2);
 FUNC_2(&VAR_5->atid_lock, "atid lock", ((void*)0), VAR_0);
 VAR_5->afree = VAR_5->atid_tab;
 VAR_5->atids_in_use = 0;
 for (VAR_6 = 1; VAR_6 < VAR_5->natids; VAR_6++)
  VAR_5->atid_tab[VAR_6 - 1].next = &VAR_5->atid_tab[VAR_6];
 VAR_5->atid_tab[VAR_5->natids - 1].next = ((void*)0);
}
