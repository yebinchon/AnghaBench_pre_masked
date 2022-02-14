
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int tids_in_use; int hftid_lock; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct filter_entry {TYPE_1__ fs; } ;
struct adapter {struct tid_info tids; } ;


 int FUNC_0 (struct filter_entry*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_2, struct filter_entry *VAR_3)
{
 struct tid_info *VAR_4 = &VAR_2->tids;

 FUNC_2(&VAR_4->hftid_lock, VAR_0);

 FUNC_0(VAR_3, VAR_1);
 FUNC_1(&VAR_4->tids_in_use, VAR_3->fs.type ? 2 : 1);
}
