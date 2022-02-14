
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int hpos; } ;
struct ubifs_info {struct ubifs_lpt_heap* lpt_heap; } ;



__attribute__((used)) static void FUNC_0(struct ubifs_info *VAR_0,
        struct ubifs_lprops *VAR_1,
        struct ubifs_lprops *VAR_2, int VAR_3)
{
 struct ubifs_lpt_heap *VAR_4;
 int VAR_5 = VAR_2->hpos;

 VAR_4 = &VAR_0->lpt_heap[VAR_3 - 1];
 VAR_4->arr[VAR_5] = VAR_2;
}
