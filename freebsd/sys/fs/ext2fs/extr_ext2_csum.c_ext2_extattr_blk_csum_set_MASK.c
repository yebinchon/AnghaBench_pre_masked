
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_facl; int i_e2fs; } ;
struct ext2fs_extattr_header {int h_checksum; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct inode*,int ,struct ext2fs_extattr_header*) ;

void
FUNC_2(struct inode *VAR_1, struct buf *VAR_2)
{
 struct ext2fs_extattr_header *VAR_3;

 if (!FUNC_0(VAR_1->i_e2fs, VAR_0))
  return;

 VAR_3 = (struct ext2fs_extattr_header *)VAR_2->b_data;
 VAR_3->h_checksum = FUNC_1(VAR_1, VAR_1->i_facl, VAR_3);
}
