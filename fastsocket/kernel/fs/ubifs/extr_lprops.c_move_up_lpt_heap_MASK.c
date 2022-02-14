
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int hpos; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_lprops*,int) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0, struct ubifs_lpt_heap *VAR_1,
        struct ubifs_lprops *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_2->hpos;
 if (!VAR_6)
  return;
 VAR_4 = FUNC_0(VAR_2, VAR_3);

 do {
  int VAR_7 = (VAR_6 - 1) / 2;

  VAR_5 = FUNC_0(VAR_1->arr[VAR_7], VAR_3);
  if (VAR_5 >= VAR_4)
   return;

  VAR_1->arr[VAR_7]->hpos = VAR_6;
  VAR_1->arr[VAR_6] = VAR_1->arr[VAR_7];
  VAR_1->arr[VAR_7] = VAR_2;
  VAR_2->hpos = VAR_7;
  VAR_6 = VAR_7;
 } while (VAR_6);
}
