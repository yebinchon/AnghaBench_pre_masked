
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ooo_info {int free_buffers_list; } ;
struct ecore_ooo_buffer {int list_entry; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ecore_ooo_info *VAR_0,
          struct ecore_ooo_buffer *VAR_1)
{
 FUNC_0(&VAR_1->list_entry,
       &VAR_0->free_buffers_list);
}
