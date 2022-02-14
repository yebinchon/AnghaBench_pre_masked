
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nsumblk; scalar_t__ sumbytes; } ;
struct nilfs_segment_buffer {TYPE_2__ sb_sum; } ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct nilfs_sc_info {scalar_t__ sc_blk_cnt; scalar_t__ sc_datablk_cnt; TYPE_3__ sc_binfo_ptr; TYPE_3__ sc_finfo_ptr; TYPE_1__* sc_super; struct nilfs_segment_buffer* sc_curseg; } ;
struct nilfs_inode_info {int i_cno; } ;
struct nilfs_finfo {void* fi_cno; void* fi_ndatablk; void* fi_nblocks; void* fi_ino; } ;
struct inode {int i_ino; } ;
struct TYPE_4__ {int s_blocksize; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 struct nilfs_finfo* FUNC_3 (struct nilfs_sc_info*,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_4(struct nilfs_sc_info *VAR_0,
        struct inode *VAR_1)
{
 struct nilfs_finfo *VAR_2;
 struct nilfs_inode_info *VAR_3;
 struct nilfs_segment_buffer *VAR_4;

 if (VAR_0->sc_blk_cnt == 0)
  return;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = FUNC_3(VAR_0, &VAR_0->sc_finfo_ptr,
       sizeof(*VAR_2));
 VAR_2->fi_ino = FUNC_2(VAR_1->i_ino);
 VAR_2->fi_nblocks = FUNC_1(VAR_0->sc_blk_cnt);
 VAR_2->fi_ndatablk = FUNC_1(VAR_0->sc_datablk_cnt);
 VAR_2->fi_cno = FUNC_2(VAR_3->i_cno);

 VAR_4 = VAR_0->sc_curseg;
 VAR_4->sb_sum.sumbytes = VAR_0->sc_binfo_ptr.offset +
  VAR_0->sc_super->s_blocksize * (VAR_4->sb_sum.nsumblk - 1);
 VAR_0->sc_finfo_ptr = VAR_0->sc_binfo_ptr;
 VAR_0->sc_blk_cnt = VAR_0->sc_datablk_cnt = 0;
}
