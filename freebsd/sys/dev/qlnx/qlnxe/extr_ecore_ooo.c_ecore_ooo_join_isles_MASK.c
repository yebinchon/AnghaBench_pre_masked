
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ooo_isle {int list_entry; int buffers_list; } ;
struct ecore_ooo_info {int free_isles_list; int ready_buffers_list; int cur_isles_number; } ;
struct ecore_ooo_archipelago {int isles_list; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 void* VAR_0 ;
 struct ecore_ooo_archipelago* FUNC_4 (struct ecore_ooo_info*,int ) ;
 struct ecore_ooo_isle* FUNC_5 (struct ecore_hwfn*,struct ecore_ooo_info*,int ,scalar_t__) ;

void FUNC_6(struct ecore_hwfn *VAR_1,
     struct ecore_ooo_info *VAR_2,
     u32 VAR_3, u8 VAR_4)
{
 struct ecore_ooo_archipelago *VAR_5 = VAR_0;
 struct ecore_ooo_isle *VAR_6 = VAR_0;
 struct ecore_ooo_isle *VAR_7 = VAR_0;

 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3,
       VAR_4 + 1);
 if (!VAR_6) {
  FUNC_0(VAR_1, 1,
    "Right isle %d is not found(cid %d)\n",
    VAR_4 + 1, VAR_3);
  return;
 }
 VAR_5 = FUNC_4(VAR_2, VAR_3);
 FUNC_2(&VAR_6->list_entry,
         &VAR_5->isles_list);
 VAR_2->cur_isles_number--;
 if (VAR_4) {
  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3,
       VAR_4);
  if (!VAR_7) {
   FUNC_0(VAR_1, 1,
     "Left isle %d is not found(cid %d)\n",
     VAR_4, VAR_3);
   return;
  }
  FUNC_3(&VAR_6->buffers_list,
       &VAR_7->buffers_list);
 } else {
  FUNC_3(&VAR_6->buffers_list,
       &VAR_2->ready_buffers_list);
 }
 FUNC_1(&VAR_6->list_entry,
      &VAR_2->free_isles_list);
}
