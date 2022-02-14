
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {scalar_t__ cnt; struct ubifs_lprops const** arr; } ;
typedef struct ubifs_lprops {int flags; } const ubifs_lprops ;
struct ubifs_info {struct ubifs_lpt_heap* lpt_heap; int lp_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

const struct ubifs_lprops *FUNC_2(struct ubifs_info *VAR_3)
{
 struct ubifs_lprops *VAR_4;
 struct ubifs_lpt_heap *VAR_5;

 FUNC_1(FUNC_0(&VAR_3->lp_mutex));

 VAR_5 = &VAR_3->lpt_heap[VAR_0 - 1];
 if (VAR_5->cnt == 0)
  return ((void*)0);

 VAR_4 = VAR_5->arr[0];
 FUNC_1(!(VAR_4->flags & VAR_2));
 FUNC_1(!(VAR_4->flags & VAR_1));
 return VAR_4;
}
