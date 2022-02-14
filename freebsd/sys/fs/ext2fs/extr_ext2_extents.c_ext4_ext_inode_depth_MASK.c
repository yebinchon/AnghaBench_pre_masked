
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_data; } ;
struct ext4_extent_header {unsigned short eh_depth; } ;



__attribute__((used)) static inline unsigned short
FUNC_0(struct inode *VAR_0)
{
 struct ext4_extent_header *VAR_1;

 VAR_1 = (struct ext4_extent_header *)VAR_0->i_data;
 return (VAR_1->eh_depth);
}
