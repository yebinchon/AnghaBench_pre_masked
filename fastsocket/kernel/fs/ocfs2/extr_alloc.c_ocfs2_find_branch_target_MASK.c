
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_extent_tree {struct ocfs2_extent_list* et_root_el; int et_ci; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; scalar_t__ l_next_free_rec; scalar_t__ l_count; TYPE_1__* l_recs; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int e_blkno; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,unsigned long long,...) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_extent_tree *VAR_1,
        struct buffer_head **VAR_2)
{
 int VAR_3 = 0, VAR_4;
 u64 VAR_5;
 struct ocfs2_extent_block *VAR_6;
 struct ocfs2_extent_list *VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = ((void*)0);

 FUNC_4();

 *VAR_2 = ((void*)0);

 VAR_7 = VAR_1->et_root_el;

 while(FUNC_2(VAR_7->l_tree_depth) > 1) {
  if (FUNC_2(VAR_7->l_next_free_rec) == 0) {
   FUNC_7(FUNC_8(VAR_1->et_ci),
        "Owner %llu has empty "
        "extent list (next_free_rec == 0)",
        (unsigned long long)FUNC_9(VAR_1->et_ci));
   VAR_3 = -VAR_0;
   goto bail;
  }
  VAR_4 = FUNC_2(VAR_7->l_next_free_rec) - 1;
  VAR_5 = FUNC_3(VAR_7->l_recs[VAR_4].e_blkno);
  if (!VAR_5) {
   FUNC_7(FUNC_8(VAR_1->et_ci),
        "Owner %llu has extent "
        "list where extent # %d has no physical "
        "block start",
        (unsigned long long)FUNC_9(VAR_1->et_ci), VAR_4);
   VAR_3 = -VAR_0;
   goto bail;
  }

  FUNC_0(VAR_8);
  VAR_8 = ((void*)0);

  VAR_3 = FUNC_10(VAR_1->et_ci, VAR_5, &VAR_8);
  if (VAR_3 < 0) {
   FUNC_5(VAR_3);
   goto bail;
  }

  VAR_6 = (struct ocfs2_extent_block *) VAR_8->b_data;
  VAR_7 = &VAR_6->h_list;

  if (FUNC_2(VAR_7->l_next_free_rec) <
      FUNC_2(VAR_7->l_count)) {
   FUNC_0(VAR_9);
   VAR_9 = VAR_8;
   FUNC_1(VAR_9);
  }
 }



 VAR_7 = VAR_1->et_root_el;
 if (!VAR_9 && (VAR_7->l_next_free_rec == VAR_7->l_count))
  VAR_3 = 1;

 *VAR_2 = VAR_9;
bail:
 FUNC_0(VAR_8);

 FUNC_6(VAR_3);
 return VAR_3;
}
