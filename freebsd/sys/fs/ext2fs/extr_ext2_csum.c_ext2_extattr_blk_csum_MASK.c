
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct m_ext2fs {int e2fs_bsize; int e2fs_csum_seed; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext2fs_extattr_header {int h_checksum; } ;
typedef int facl ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct inode *VAR_0, uint64_t VAR_1,
    struct ext2fs_extattr_header *VAR_2)
{
 struct m_ext2fs *VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_3 = VAR_0->i_e2fs;

 VAR_5 = VAR_2->h_checksum;

 VAR_2->h_checksum = 0;
 VAR_4 = FUNC_0(VAR_3->e2fs_csum_seed, (uint8_t *)&VAR_1, sizeof(VAR_1));
 VAR_4 = FUNC_0(VAR_4, (uint8_t *)VAR_2, VAR_3->e2fs_bsize);
 VAR_2->h_checksum = VAR_5;

 return (VAR_4);
}
