
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct inode {int dummy; } ;
struct ext2fs_direct_tail {scalar_t__ e2dt_checksum; } ;
struct ext2fs_direct_2 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*,struct ext2fs_direct_2*,int) ;
 struct ext2fs_direct_tail* FUNC_1 (struct inode*,struct ext2fs_direct_2*) ;

int
FUNC_2(struct inode *VAR_1, struct ext2fs_direct_2 *VAR_2)
{
 uint32_t VAR_3;
 struct ext2fs_direct_tail *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
  return (0);

 VAR_3 = FUNC_0(VAR_1, VAR_2, (char *)VAR_4 - (char *)VAR_2);
 if (VAR_3 != VAR_4->e2dt_checksum)
  return (VAR_0);

 return (0);
}
