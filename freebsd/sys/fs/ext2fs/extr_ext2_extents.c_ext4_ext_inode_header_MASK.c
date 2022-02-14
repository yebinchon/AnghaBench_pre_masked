
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_db; } ;
struct ext4_extent_header {int dummy; } ;



__attribute__((used)) static inline struct ext4_extent_header *
FUNC_0(struct inode *VAR_0)
{

 return ((struct ext4_extent_header *)VAR_0->i_db);
}
