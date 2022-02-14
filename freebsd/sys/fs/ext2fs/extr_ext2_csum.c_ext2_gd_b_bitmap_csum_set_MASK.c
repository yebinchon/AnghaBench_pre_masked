
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct m_ext2fs {int e2fs_fpg; TYPE_2__* e2fs_gd; TYPE_1__* e2fs; int e2fs_csum_seed; } ;
struct buf {int b_data; } ;
struct TYPE_4__ {int ext4bgd_b_bmap_csum; int ext4bgd_b_bmap_csum_hi; } ;
struct TYPE_3__ {scalar_t__ e3fs_desc_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct m_ext2fs *VAR_2, int VAR_3, struct buf *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 if (!FUNC_0(VAR_2, VAR_0))
  return;

 VAR_6 = VAR_2->e2fs_fpg / 8;
 VAR_5 = FUNC_1(VAR_2->e2fs_csum_seed, VAR_4->b_data, VAR_6);
 VAR_2->e2fs_gd[VAR_3].ext4bgd_b_bmap_csum = VAR_5 & 0xFFFF;
 if (VAR_2->e2fs->e3fs_desc_size >= VAR_1)
  VAR_2->e2fs_gd[VAR_3].ext4bgd_b_bmap_csum_hi = VAR_5 >> 16;
}
