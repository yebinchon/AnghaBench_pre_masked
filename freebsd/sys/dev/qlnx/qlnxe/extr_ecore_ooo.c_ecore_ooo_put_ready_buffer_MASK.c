
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ecore_ooo_info {int ready_buffers_list; } ;
struct ecore_ooo_buffer {int list_entry; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct ecore_ooo_info *VAR_0,
    struct ecore_ooo_buffer *VAR_1, u8 VAR_2)
{
 if (VAR_2) {
  FUNC_1(&VAR_1->list_entry,
       &VAR_0->ready_buffers_list);
 } else {
  FUNC_0(&VAR_1->list_entry,
       &VAR_0->ready_buffers_list);
 }
}
