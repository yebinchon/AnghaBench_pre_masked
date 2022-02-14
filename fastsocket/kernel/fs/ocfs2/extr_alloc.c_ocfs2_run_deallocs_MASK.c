
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_per_slot_free_list {struct ocfs2_per_slot_free_list* f_next_suballocator; scalar_t__ f_first; int f_slot; int f_inode_type; } ;
struct ocfs2_cached_dealloc_ctxt {int * c_global_allocator; struct ocfs2_per_slot_free_list* c_first_suballocator; } ;


 int FUNC_0 (struct ocfs2_per_slot_free_list*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,int ,int ,scalar_t__) ;
 int FUNC_4 (struct ocfs2_super*,int *) ;

int FUNC_5(struct ocfs2_super *VAR_0,
         struct ocfs2_cached_dealloc_ctxt *VAR_1)
{
 int VAR_2 = 0, VAR_3;
 struct ocfs2_per_slot_free_list *VAR_4;

 if (!VAR_1)
  return 0;

 while (VAR_1->c_first_suballocator) {
  VAR_4 = VAR_1->c_first_suballocator;

  if (VAR_4->f_first) {
   FUNC_1(0, "Free items: (type %u, slot %d)\n",
        VAR_4->f_inode_type, VAR_4->f_slot);
   VAR_3 = FUNC_3(VAR_0,
       VAR_4->f_inode_type,
       VAR_4->f_slot,
       VAR_4->f_first);
   if (VAR_3)
    FUNC_2(VAR_3);
   if (!VAR_2)
    VAR_2 = VAR_3;
  }

  VAR_1->c_first_suballocator = VAR_4->f_next_suballocator;
  FUNC_0(VAR_4);
 }

 if (VAR_1->c_global_allocator) {
  VAR_3 = FUNC_4(VAR_0,
        VAR_1->c_global_allocator);
  if (VAR_3)
   FUNC_2(VAR_3);
  if (!VAR_2)
   VAR_2 = VAR_3;

  VAR_1->c_global_allocator = ((void*)0);
 }

 return VAR_2;
}
