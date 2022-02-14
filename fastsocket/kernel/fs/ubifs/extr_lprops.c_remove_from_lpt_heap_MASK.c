
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {int cnt; struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int hpos; } ;
struct ubifs_info {struct ubifs_lpt_heap* lpt_heap; } ;


 int FUNC_0 (struct ubifs_info*,struct ubifs_lpt_heap*,struct ubifs_lprops*,int,int) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_lpt_heap*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_0,
     struct ubifs_lprops *VAR_1, int VAR_2)
{
 struct ubifs_lpt_heap *VAR_3;
 int VAR_4 = VAR_1->hpos;

 VAR_3 = &VAR_0->lpt_heap[VAR_2 - 1];
 FUNC_2(VAR_4 >= 0 && VAR_4 < VAR_3->cnt);
 FUNC_2(VAR_3->arr[VAR_4] == VAR_1);
 VAR_3->cnt -= 1;
 if (VAR_4 < VAR_3->cnt) {
  VAR_3->arr[VAR_4] = VAR_3->arr[VAR_3->cnt];
  VAR_3->arr[VAR_4]->hpos = VAR_4;
  FUNC_0(VAR_0, VAR_3, VAR_3->arr[VAR_4], VAR_4, VAR_2);
 }
 FUNC_1(VAR_0, VAR_3, VAR_2, -1);
}
