
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {int * xh_entries; int xh_count; } ;
struct ocfs2_dinode {int i_xattr_inline_size; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct inode *VAR_0,
      struct ocfs2_dinode *VAR_1)
{
 struct ocfs2_xattr_header *VAR_2;
 int VAR_3;

 VAR_2 = (struct ocfs2_xattr_header *)
   ((void *)VAR_1 + VAR_0->i_sb->s_blocksize -
   FUNC_0(VAR_1->i_xattr_inline_size));

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->xh_count); VAR_3++)
  if (!FUNC_1(&VAR_2->xh_entries[VAR_3]))
   return 1;

 return 0;
}
