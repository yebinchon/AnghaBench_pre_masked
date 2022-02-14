
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct reiserfs_transaction_handle {int t_refcount; int t_blocks_allocated; int t_trans_id; int t_super; } ;
struct reiserfs_journal {scalar_t__ j_must_wait; scalar_t__ j_len_alloc; scalar_t__ j_max_batch; scalar_t__ j_trans_start_time; scalar_t__ j_max_trans_age; int j_cnode_free; int j_trans_max; int j_jlock; } ;


 int FUNC_0 (int) ;
 struct reiserfs_journal* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(struct reiserfs_transaction_handle *VAR_0,
       int VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_1(VAR_0->t_super);
 time_t VAR_3 = FUNC_3();

 FUNC_0(!VAR_0->t_trans_id);
 if (VAR_0->t_refcount > 1)
  return 0;
 if (VAR_2->j_must_wait > 0 ||
     (VAR_2->j_len_alloc + VAR_1) >= VAR_2->j_max_batch ||
     FUNC_2(&(VAR_2->j_jlock)) ||
     (VAR_3 - VAR_2->j_trans_start_time) > VAR_2->j_max_trans_age ||
     VAR_2->j_cnode_free < (VAR_2->j_trans_max * 3)) {
  return 1;
 }

 VAR_2->j_len_alloc += VAR_1;
 VAR_0->t_blocks_allocated += VAR_1 ;
 return 0;
}
