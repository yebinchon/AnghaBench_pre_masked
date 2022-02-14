
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext2fs_extattr_header {int dummy; } ;
struct buf {scalar_t__ b_bufsize; scalar_t__ b_data; } ;


 int FUNC_0 (struct ext2fs_extattr_header*) ;
 int FUNC_1 (struct inode*,struct buf*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_0, struct buf *VAR_1)
{
 struct ext2fs_extattr_header *VAR_2;
 int VAR_3;

 VAR_2 = (struct ext2fs_extattr_header *)VAR_1->b_data;

 VAR_3 = FUNC_2(FUNC_0(VAR_2),
     VAR_1->b_data + VAR_1->b_bufsize);
 if (VAR_3)
  return (VAR_3);

 return (FUNC_1(VAR_0, VAR_1));
}
