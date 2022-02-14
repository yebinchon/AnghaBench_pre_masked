
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segsum_info {unsigned long nfinfo; scalar_t__ nsumblk; } ;
struct nilfs_segment_summary {int ss_bytes; } ;
struct nilfs_sb_info {int s_super; } ;
struct nilfs_recovery_block {int list; void* blkoff; void* vblocknr; scalar_t__ blocknr; void* ino; } ;
struct nilfs_finfo {int fi_ndatablk; int fi_nblocks; int fi_ino; } ;
struct nilfs_binfo_v {int bi_blkoff; int bi_vblocknr; } ;
struct list_head {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ sector_t ;
typedef void* ino_t ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 struct nilfs_recovery_block* FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 struct buffer_head* FUNC_6 (int ,scalar_t__) ;
 void* FUNC_7 (int ,struct buffer_head**,unsigned int*,int) ;
 int FUNC_8 (int ,struct buffer_head**,unsigned int*,int,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct nilfs_sb_info *VAR_3, sector_t VAR_4,
      struct nilfs_segsum_info *VAR_5,
      struct list_head *VAR_6)
{
 struct buffer_head *VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9 = VAR_5->nfinfo;
 sector_t VAR_10 = VAR_4 + VAR_5->nsumblk;
 ino_t VAR_11;
 int VAR_12 = -VAR_0;

 if (!VAR_9)
  return 0;

 VAR_7 = FUNC_6(VAR_3->s_super, VAR_4);
 if (FUNC_9(!VAR_7))
  goto out;

 VAR_8 = FUNC_2(
  ((struct nilfs_segment_summary *)VAR_7->b_data)->ss_bytes);
 for (;;) {
  unsigned long VAR_13, VAR_14, VAR_15;
  struct nilfs_finfo *VAR_16;

  VAR_16 = FUNC_7(VAR_3->s_super, &VAR_7, &VAR_8, sizeof(*VAR_16));
  if (FUNC_9(!VAR_16))
   goto out;

  VAR_11 = FUNC_4(VAR_16->fi_ino);
  VAR_13 = FUNC_3(VAR_16->fi_nblocks);
  VAR_14 = FUNC_3(VAR_16->fi_ndatablk);
  VAR_15 = VAR_13 - VAR_14;

  while (VAR_14-- > 0) {
   struct nilfs_recovery_block *VAR_17;
   struct nilfs_binfo_v *VAR_18;

   VAR_18 = FUNC_7(VAR_3->s_super, &VAR_7, &VAR_8,
        sizeof(*VAR_18));
   if (FUNC_9(!VAR_18))
    goto out;

   VAR_17 = FUNC_1(sizeof(*VAR_17), VAR_2);
   if (FUNC_9(!VAR_17)) {
    VAR_12 = -VAR_1;
    goto out;
   }
   VAR_17->ino = VAR_11;
   VAR_17->blocknr = VAR_10++;
   VAR_17->vblocknr = FUNC_4(VAR_18->bi_vblocknr);
   VAR_17->blkoff = FUNC_4(VAR_18->bi_blkoff);

   FUNC_5(&VAR_17->list, VAR_6);
  }
  if (--VAR_9 == 0)
   break;
  VAR_10 += VAR_15;
  FUNC_8(VAR_3->s_super, &VAR_7, &VAR_8, sizeof(__le64),
       VAR_15);
  if (FUNC_9(!VAR_7))
   goto out;
 }
 VAR_12 = 0;
 out:
 FUNC_0(VAR_7);
 return VAR_12;
}
