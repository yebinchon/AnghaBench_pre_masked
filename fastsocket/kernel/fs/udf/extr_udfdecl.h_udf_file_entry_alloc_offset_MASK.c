
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unallocSpaceEntry {int dummy; } ;
struct udf_inode_info {size_t i_lenEAttr; scalar_t__ i_efe; scalar_t__ i_use; } ;
struct inode {int dummy; } ;
struct fileEntry {int dummy; } ;
struct extendedFileEntry {int dummy; } ;


 struct udf_inode_info* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline size_t FUNC_1(struct inode *VAR_0)
{
 struct udf_inode_info *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->i_use)
  return sizeof(struct unallocSpaceEntry);
 else if (VAR_1->i_efe)
  return sizeof(struct extendedFileEntry) + VAR_1->i_lenEAttr;
 else
  return sizeof(struct fileEntry) + VAR_1->i_lenEAttr;
}
