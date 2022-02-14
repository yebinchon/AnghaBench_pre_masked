
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct m_ext2fs {int e2fs_csum_seed; } ;
struct inode {int i_gen; int i_number; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_htree_tail {int ht_checksum; } ;
struct ext2fs_htree_entry {int dummy; } ;
struct ext2fs_direct_2 {int dummy; } ;
typedef int inum ;
typedef int gen ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct inode *VAR_0, struct ext2fs_direct_2 *VAR_1, int VAR_2,
    int VAR_3, struct ext2fs_htree_tail *VAR_4)
{
 struct m_ext2fs *VAR_5;
 char *VAR_6;
 int VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_5 = VAR_0->i_e2fs;

 VAR_6 = (char *)VAR_1;

 VAR_7 = VAR_2 + (VAR_3 * sizeof(struct ext2fs_htree_entry));
 VAR_9 = VAR_4->ht_checksum;
 VAR_4->ht_checksum = 0;

 VAR_8 = VAR_0->i_number;
 VAR_10 = VAR_0->i_gen;
 VAR_11 = FUNC_0(VAR_5->e2fs_csum_seed, (uint8_t *)&VAR_8, sizeof(VAR_8));
 VAR_11 = FUNC_0(VAR_11, (uint8_t *)&VAR_10, sizeof(VAR_10));
 VAR_11 = FUNC_0(VAR_11, (uint8_t *)VAR_6, VAR_7);
 VAR_11 = FUNC_0(VAR_11, (uint8_t *)VAR_4, sizeof(struct ext2fs_htree_tail));
 VAR_4->ht_checksum = VAR_9;

 return (VAR_11);
}
