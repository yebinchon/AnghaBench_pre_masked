
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {unsigned long long max_slots; TYPE_1__* sb; } ;
struct ocfs2_slot_info {unsigned long long si_blocks; int si_slots_per_block; struct buffer_head** si_bh; TYPE_2__* si_inode; scalar_t__ si_extended; } ;
struct ocfs2_extended_slot {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __le16 ;
struct TYPE_6__ {int i_sb; } ;
struct TYPE_5__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 struct buffer_head** FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned long long) ;
 int FUNC_4 (int) ;
 unsigned long long FUNC_5 (int ,unsigned long long) ;
 int FUNC_6 (TYPE_2__*,unsigned int,scalar_t__*,int *,int *) ;
 int FUNC_7 (int ,scalar_t__,int,struct buffer_head**,int ,int *) ;
 int FUNC_8 (struct ocfs2_super*,TYPE_2__*,unsigned long long*) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_4,
      struct ocfs2_slot_info *VAR_5)
{
 int VAR_6 = 0;
 u64 VAR_7;
 unsigned long long VAR_8, VAR_9;
 unsigned int VAR_10;
 struct buffer_head *VAR_11;

 VAR_6 = FUNC_8(VAR_4, VAR_5->si_inode, &VAR_9);
 if (VAR_6)
  goto bail;

 VAR_8 = FUNC_5(VAR_5->si_inode->i_sb, VAR_9);
 FUNC_0(VAR_8 > VAR_3);
 VAR_5->si_blocks = VAR_8;
 if (!VAR_5->si_blocks)
  goto bail;

 if (VAR_5->si_extended)
  VAR_5->si_slots_per_block =
   (VAR_4->sb->s_blocksize /
    sizeof(struct ocfs2_extended_slot));
 else
  VAR_5->si_slots_per_block = VAR_4->sb->s_blocksize / sizeof(__le16);


 FUNC_0((VAR_4->max_slots / VAR_5->si_slots_per_block) > VAR_8);

 FUNC_3(0, "Slot map needs %u buffers for %llu bytes\n",
      VAR_5->si_blocks, VAR_9);

 VAR_5->si_bh = FUNC_2(sizeof(struct buffer_head *) * VAR_5->si_blocks,
       VAR_1);
 if (!VAR_5->si_bh) {
  VAR_6 = -VAR_0;
  FUNC_4(VAR_6);
  goto bail;
 }

 for (VAR_10 = 0; VAR_10 < VAR_5->si_blocks; VAR_10++) {
  VAR_6 = FUNC_6(VAR_5->si_inode, VAR_10,
           &VAR_7, ((void*)0), ((void*)0));
  if (VAR_6 < 0) {
   FUNC_4(VAR_6);
   goto bail;
  }

  FUNC_3(0, "Reading slot map block %u at %llu\n", VAR_10,
       (unsigned long long)VAR_7);

  VAR_11 = ((void*)0);
  VAR_6 = FUNC_7(FUNC_1(VAR_5->si_inode), VAR_7,
        1, &VAR_11, VAR_2, ((void*)0));
  if (VAR_6 < 0) {
   FUNC_4(VAR_6);
   goto bail;
  }

  VAR_5->si_bh[VAR_10] = VAR_11;
 }

bail:
 return VAR_6;
}
