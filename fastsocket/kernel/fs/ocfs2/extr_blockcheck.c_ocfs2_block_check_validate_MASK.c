
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_blockcheck_stats {int dummy; } ;
struct ocfs2_block_check {scalar_t__ bc_crc32e; scalar_t__ bc_ecc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,void*,size_t) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ocfs2_block_check*,int ,int) ;
 int FUNC_6 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_7 (struct ocfs2_blockcheck_stats*) ;
 int FUNC_8 (struct ocfs2_blockcheck_stats*) ;
 int FUNC_9 (struct ocfs2_blockcheck_stats*) ;
 scalar_t__ FUNC_10 (void*,size_t) ;
 int FUNC_11 (void*,size_t,scalar_t__) ;

int FUNC_12(void *VAR_2, size_t VAR_3,
          struct ocfs2_block_check *VAR_4,
          struct ocfs2_blockcheck_stats *VAR_5)
{
 int VAR_6 = 0;
 struct ocfs2_block_check VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_7(VAR_5);

 VAR_7.bc_crc32e = FUNC_4(VAR_4->bc_crc32e);
 VAR_7.bc_ecc = FUNC_3(VAR_4->bc_ecc);

 FUNC_5(VAR_4, 0, sizeof(struct ocfs2_block_check));


 VAR_8 = FUNC_2(~0, VAR_2, VAR_3);
 if (VAR_8 == VAR_7.bc_crc32e)
  goto out;

 FUNC_8(VAR_5);
 FUNC_6(VAR_1,
      "CRC32 failed: stored: %u, computed %u.  Applying ECC.\n",
      (unsigned int)VAR_7.bc_crc32e, (unsigned int)VAR_8);


 VAR_9 = FUNC_10(VAR_2, VAR_3);
 FUNC_11(VAR_2, VAR_3, VAR_9 ^ VAR_7.bc_ecc);


 VAR_8 = FUNC_2(~0, VAR_2, VAR_3);
 if (VAR_8 == VAR_7.bc_crc32e) {
  FUNC_9(VAR_5);
  goto out;
 }

 FUNC_6(VAR_1, "Fixed CRC32 failed: stored: %u, computed %u\n",
      (unsigned int)VAR_7.bc_crc32e, (unsigned int)VAR_8);

 VAR_6 = -VAR_0;

out:
 VAR_4->bc_crc32e = FUNC_1(VAR_7.bc_crc32e);
 VAR_4->bc_ecc = FUNC_0(VAR_7.bc_ecc);

 return VAR_6;
}
