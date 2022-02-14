
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {scalar_t__ cnt; scalar_t__ max_cnt; struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int hpos; int list; int flags; } ;
struct ubifs_info {int uncat_list; struct ubifs_lpt_heap* lpt_heap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubifs_info*,struct ubifs_lpt_heap*,int,int) ;
 int FUNC_1 (struct ubifs_lprops*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_lpt_heap*,struct ubifs_lprops*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_3, struct ubifs_lprops *VAR_4,
      int VAR_5)
{
 struct ubifs_lpt_heap *VAR_6 = &VAR_3->lpt_heap[VAR_5 - 1];

 if (VAR_6->cnt >= VAR_6->max_cnt) {
  const int VAR_7 = VAR_2 / 2 - 1;
  int VAR_8, VAR_9, VAR_10;



  VAR_8 = (((size_t)VAR_4 >> 4) & VAR_7) + VAR_7;
  FUNC_4(VAR_8 >= VAR_7);
  FUNC_4(VAR_8 < VAR_2);
  FUNC_4(VAR_8 < VAR_6->cnt);

  VAR_9 = FUNC_1(VAR_4, VAR_5);
  VAR_10 = FUNC_1(VAR_6->arr[VAR_8], VAR_5);
  if (VAR_9 > VAR_10) {
   struct ubifs_lprops *VAR_11;

   VAR_11 = VAR_6->arr[VAR_8];
   VAR_11->flags &= ~VAR_0;
   VAR_11->flags |= VAR_1;
   FUNC_2(&VAR_11->list, &VAR_3->uncat_list);
   VAR_4->hpos = VAR_8;
   VAR_6->arr[VAR_8] = VAR_4;
   FUNC_3(VAR_3, VAR_6, VAR_4, VAR_5);
   FUNC_0(VAR_3, VAR_6, VAR_5, VAR_4->hpos);
   return 1;
  }
  FUNC_0(VAR_3, VAR_6, VAR_5, -1);
  return 0;
 } else {
  VAR_4->hpos = VAR_6->cnt++;
  VAR_6->arr[VAR_4->hpos] = VAR_4;
  FUNC_3(VAR_3, VAR_6, VAR_4, VAR_5);
  FUNC_0(VAR_3, VAR_6, VAR_5, VAR_4->hpos);
  return 1;
 }
}
