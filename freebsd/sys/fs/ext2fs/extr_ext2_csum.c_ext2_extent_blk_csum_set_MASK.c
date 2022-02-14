
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {int dummy; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext4_extent_tail {int et_checksum; } ;
struct ext4_extent_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;
 int FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (struct inode*,struct ext4_extent_header*) ;

void
FUNC_3(struct inode *VAR_1, void *VAR_2)
{
 struct m_ext2fs *VAR_3;
 struct ext4_extent_header *VAR_4;
 struct ext4_extent_tail *VAR_5;

 VAR_3 = VAR_1->i_e2fs;

 if (!FUNC_0(VAR_3, VAR_0))
  return;

 VAR_4 = (struct ext4_extent_header *)VAR_2;
 VAR_5 = (struct ext4_extent_tail *)(((char *)VAR_2) +
     FUNC_1(VAR_4));

 VAR_5->et_checksum = FUNC_2(VAR_1,
     (struct ext4_extent_header *)VAR_2);
}
