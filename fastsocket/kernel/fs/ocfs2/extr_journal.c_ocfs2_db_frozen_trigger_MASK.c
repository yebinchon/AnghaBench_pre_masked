
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_block_trailer {int db_check; } ;
struct jbd2_buffer_trigger_type {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (void*,size_t,int *) ;
 struct ocfs2_dir_block_trailer* FUNC_1 (size_t,void*) ;

__attribute__((used)) static void FUNC_2(struct jbd2_buffer_trigger_type *VAR_0,
     struct buffer_head *VAR_1,
     void *VAR_2, size_t VAR_3)
{
 struct ocfs2_dir_block_trailer *VAR_4 =
  FUNC_1(VAR_3, VAR_2);







 FUNC_0(VAR_2, VAR_3, &VAR_4->db_check);
}
