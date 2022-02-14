
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ooo_isle {int buffers_list; } ;
struct ecore_ooo_info {int dummy; } ;
struct ecore_ooo_buffer {int list_entry; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 struct ecore_ooo_isle* VAR_1 ;
 struct ecore_ooo_isle* FUNC_3 (struct ecore_hwfn*,struct ecore_ooo_info*,int ,scalar_t__) ;

void FUNC_4(struct ecore_hwfn *VAR_2,
        struct ecore_ooo_info *VAR_3,
        u32 VAR_4,
        u8 VAR_5,
        struct ecore_ooo_buffer *VAR_6,
               u8 VAR_7)
{
 struct ecore_ooo_isle * VAR_8 = VAR_1;
 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_8) {
  FUNC_0(VAR_2, 1,
    "Isle %d is not found(cid %d)\n",
    VAR_5, VAR_4);
  return;
 }
 if (VAR_7 == VAR_0) {
  FUNC_1(&VAR_6->list_entry,
       &VAR_8->buffers_list);
 } else {
  FUNC_2(&VAR_6->list_entry,
       &VAR_8->buffers_list);
 }
}
