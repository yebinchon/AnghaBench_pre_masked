
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_entry {int dummy; } ;
struct ocfs2_dir_block_trailer {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0,
      struct ocfs2_dir_entry *VAR_1,
      unsigned long VAR_2,
      unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_3 - sizeof(struct ocfs2_dir_block_trailer);

 if (!FUNC_0(VAR_0))
  return 0;

 if (VAR_2 != VAR_4)
  return 0;

 return 1;
}
