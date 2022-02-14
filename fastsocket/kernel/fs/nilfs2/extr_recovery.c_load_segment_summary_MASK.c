
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nilfs_segsum_info {scalar_t__ seg_seq; unsigned long nblocks; scalar_t__ sumbytes; unsigned long nsumblk; } ;
struct nilfs_segment_summary {int ss_sumsum; int ss_datasum; int ss_magic; } ;
struct nilfs_sb_info {TYPE_1__* s_nilfs; TYPE_2__* s_super; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_4__ {scalar_t__ s_blocksize_bits; int s_blocksize; } ;
struct TYPE_3__ {unsigned long ns_blocks_per_segment; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct nilfs_sb_info*,struct buffer_head*,scalar_t__*,unsigned long,scalar_t__,int ,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 struct buffer_head* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct nilfs_segsum_info*,struct nilfs_segment_summary*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct nilfs_sb_info *VAR_7, sector_t VAR_8,
       u64 VAR_9, struct nilfs_segsum_info *VAR_10,
       int VAR_11)
{
 struct buffer_head *VAR_12;
 struct nilfs_segment_summary *VAR_13;
 unsigned long VAR_14, VAR_15;
 u64 VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19 = VAR_4;

 VAR_12 = FUNC_3(VAR_7->s_super, VAR_8);
 if (!VAR_12)
  goto out;

 VAR_13 = (struct nilfs_segment_summary *)VAR_12->b_data;


 if (FUNC_2(VAR_13->ss_magic) != VAR_0) {
  VAR_19 = VAR_5;
  goto failed;
 }
 FUNC_4(VAR_10, VAR_13, VAR_7->s_super->s_blocksize);
 if (VAR_9 != VAR_10->seg_seq) {
  VAR_19 = VAR_6;
  goto failed;
 }
 if (VAR_11) {
  VAR_14 = sizeof(VAR_13->ss_datasum);
  VAR_16 =
   ((u64)VAR_10->nblocks << VAR_7->s_super->s_blocksize_bits);
  VAR_15 = VAR_10->nblocks;
  VAR_18 = FUNC_2(VAR_13->ss_datasum);
  VAR_19 = VAR_1;
 } else {
  VAR_14 = sizeof(VAR_13->ss_datasum) + sizeof(VAR_13->ss_sumsum);
  VAR_16 = VAR_10->sumbytes;
  VAR_15 = VAR_10->nsumblk;
  VAR_18 = FUNC_2(VAR_13->ss_sumsum);
  VAR_19 = VAR_2;
 }

 if (FUNC_5(VAR_15 == 0 ||
       VAR_15 > VAR_7->s_nilfs->ns_blocks_per_segment)) {

  VAR_19 = VAR_3;
  goto failed;
 }
 if (FUNC_1(VAR_7, VAR_12, &VAR_17, VAR_14, VAR_16,
     VAR_8, VAR_15)) {
  VAR_19 = VAR_4;
  goto failed;
 }
 if (VAR_17 == VAR_18)
  VAR_19 = 0;
 failed:
 FUNC_0(VAR_12);
 out:
 return VAR_19;
}
