
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nblocks; } ;
struct nilfs_segment_buffer {scalar_t__ sb_rest_blocks; TYPE_1__ sb_sum; } ;
struct nilfs_sc_info {scalar_t__ sc_blk_cnt; int sc_binfo_ptr; struct nilfs_segment_buffer* sc_curseg; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct nilfs_segment_buffer*,struct buffer_head*) ;
 int FUNC_1 (struct nilfs_segment_buffer*) ;
 int FUNC_2 (struct nilfs_sc_info*,struct inode*) ;
 int FUNC_3 (struct nilfs_sc_info*,struct inode*) ;
 int FUNC_4 (struct nilfs_sc_info*) ;
 int FUNC_5 (struct nilfs_sc_info*,int *,unsigned int) ;
 int FUNC_6 (struct nilfs_sc_info*,int *,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nilfs_sc_info *VAR_0,
     struct buffer_head *VAR_1,
     struct inode *VAR_2,
     unsigned VAR_3)
{
 struct nilfs_segment_buffer *VAR_4;
 int VAR_5, VAR_6 = 0;

 retry:
 VAR_4 = VAR_0->sc_curseg;
 VAR_5 = FUNC_6(
  VAR_0, &VAR_0->sc_binfo_ptr, VAR_3);
 if (VAR_4->sb_sum.nblocks + VAR_5 + 1 > VAR_4->sb_rest_blocks) {
  FUNC_3(VAR_0, VAR_2);
  VAR_6 = FUNC_4(VAR_0);
  if (VAR_6)
   return VAR_6;
  goto retry;
 }
 if (FUNC_7(VAR_5)) {
  VAR_6 = FUNC_1(VAR_4);
  if (FUNC_7(VAR_6))
   goto failed;
 }
 if (VAR_0->sc_blk_cnt == 0)
  FUNC_2(VAR_0, VAR_2);

 FUNC_5(VAR_0, &VAR_0->sc_binfo_ptr, VAR_3);

 FUNC_0(VAR_4, VAR_1);
 VAR_0->sc_blk_cnt++;
 failed:
 return VAR_6;
}
