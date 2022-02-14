
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_journal {int j_dirty_buffers_lock; TYPE_1__* j_current_jl; } ;
struct reiserfs_jh {TYPE_1__* jl; int list; struct buffer_head* bh; } ;
struct buffer_head {struct reiserfs_jh* b_private; } ;
struct TYPE_2__ {int j_bh_list; int j_tail_bh_list; } ;


 int FUNC_0 (struct reiserfs_jh*) ;
 struct reiserfs_jh* FUNC_1 () ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline int FUNC_7(struct reiserfs_journal *VAR_0, struct buffer_head *VAR_1,
      int VAR_2)
{
 struct reiserfs_jh *VAR_3;

 if (VAR_1->b_private) {
  FUNC_5(&VAR_0->j_dirty_buffers_lock);
  if (!VAR_1->b_private) {
   FUNC_6(&VAR_0->j_dirty_buffers_lock);
   goto no_jh;
  }
  VAR_3 = VAR_1->b_private;
  FUNC_4(&VAR_3->list);
 } else {
       no_jh:
  FUNC_2(VAR_1);
  VAR_3 = FUNC_1();
  FUNC_5(&VAR_0->j_dirty_buffers_lock);



  FUNC_0(VAR_1->b_private);
  VAR_3->bh = VAR_1;
  VAR_1->b_private = VAR_3;
 }
 VAR_3->jl = VAR_0->j_current_jl;
 if (VAR_2)
  FUNC_3(&VAR_3->list, &VAR_3->jl->j_tail_bh_list);
 else {
  FUNC_3(&VAR_3->list, &VAR_3->jl->j_bh_list);
 }
 FUNC_6(&VAR_0->j_dirty_buffers_lock);
 return 0;
}
