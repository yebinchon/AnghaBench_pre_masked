
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_group_desc {int bg_signature; int bg_size; int bg_bits; int bg_free_bits_count; int bg_generation; int bg_blkno; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {int fs_generation; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_group_desc*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*,unsigned long long,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1,
      struct buffer_head *VAR_2,
      int VAR_3)
{
 struct ocfs2_group_desc *VAR_4 = (struct ocfs2_group_desc *)VAR_2->b_data;

 if (!FUNC_0(VAR_4)) {
  FUNC_2("Group descriptor #%llu has bad signature %.*s",
    (unsigned long long)VAR_2->b_blocknr, 7,
    VAR_4->bg_signature);
  return -VAR_0;
 }

 if (FUNC_5(VAR_4->bg_blkno) != VAR_2->b_blocknr) {
  FUNC_2("Group descriptor #%llu has an invalid bg_blkno "
    "of %llu",
    (unsigned long long)VAR_2->b_blocknr,
    (unsigned long long)FUNC_5(VAR_4->bg_blkno));
  return -VAR_0;
 }

 if (FUNC_4(VAR_4->bg_generation) != FUNC_1(VAR_1)->fs_generation) {
  FUNC_2("Group descriptor #%llu has an invalid "
    "fs_generation of #%u",
    (unsigned long long)VAR_2->b_blocknr,
    FUNC_4(VAR_4->bg_generation));
  return -VAR_0;
 }

 if (FUNC_3(VAR_4->bg_free_bits_count) > FUNC_3(VAR_4->bg_bits)) {
  FUNC_2("Group descriptor #%llu has bit count %u but "
    "claims that %u are free",
    (unsigned long long)VAR_2->b_blocknr,
    FUNC_3(VAR_4->bg_bits),
    FUNC_3(VAR_4->bg_free_bits_count));
  return -VAR_0;
 }

 if (FUNC_3(VAR_4->bg_bits) > (8 * FUNC_3(VAR_4->bg_size))) {
  FUNC_2("Group descriptor #%llu has bit count %u but "
    "max bitmap bits of %u",
    (unsigned long long)VAR_2->b_blocknr,
    FUNC_3(VAR_4->bg_bits),
    8 * FUNC_3(VAR_4->bg_size));
  return -VAR_0;
 }

 return 0;
}
