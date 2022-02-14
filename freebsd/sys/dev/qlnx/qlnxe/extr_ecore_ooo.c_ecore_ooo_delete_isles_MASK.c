
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ooo_isle {int list_entry; int buffers_list; } ;
struct ecore_ooo_info {int free_isles_list; int cur_isles_number; int free_buffers_list; } ;
struct ecore_ooo_archipelago {int isles_list; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 void* VAR_0 ;
 struct ecore_ooo_archipelago* FUNC_5 (struct ecore_ooo_info*,int ) ;
 struct ecore_ooo_isle* FUNC_6 (struct ecore_hwfn*,struct ecore_ooo_info*,int ,scalar_t__) ;

void FUNC_7(struct ecore_hwfn *VAR_1,
      struct ecore_ooo_info *VAR_2,
      u32 VAR_3,
      u8 VAR_4,
      u8 VAR_5)
{
 struct ecore_ooo_archipelago *VAR_6 = VAR_0;
 struct ecore_ooo_isle *VAR_7 = VAR_0;
 u8 VAR_8;

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_6(VAR_1, VAR_2,
         VAR_3, VAR_4);
  if (!VAR_7) {
   FUNC_0(VAR_1, 1,
     "Isle %d is not found(cid %d)\n",
     VAR_4, VAR_3);
   return;
  }
  if (FUNC_1(&VAR_7->buffers_list)) {
   FUNC_0(VAR_1, 1,
     "Isle %d is empty(cid %d)\n",
     VAR_4, VAR_3);
  } else {
   FUNC_4(&VAR_7->buffers_list,
     &VAR_2->free_buffers_list);
  }



  FUNC_3(&VAR_7->list_entry,
          &VAR_6->isles_list);
  VAR_2->cur_isles_number--;
  FUNC_2(&VAR_7->list_entry,
       &VAR_2->free_isles_list);
 }
}
