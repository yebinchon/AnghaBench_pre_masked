
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {int dummy; } ;
struct TYPE_2__ {struct ocfs2_xattr_header xb_header; } ;
struct ocfs2_xattr_block {TYPE_1__ xb_attrs; int xb_flags; } ;
struct ocfs2_dinode {int i_xattr_loc; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int ,struct buffer_head**) ;
 int FUNC_5 (struct inode*,struct ocfs2_xattr_header*,char*,size_t) ;
 int FUNC_6 (struct inode*,struct buffer_head*,char*,size_t) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
      struct ocfs2_dinode *VAR_2,
      char *VAR_3,
      size_t VAR_4)
{
 struct buffer_head *VAR_5 = ((void*)0);
 struct ocfs2_xattr_block *VAR_6;
 int VAR_7 = 0;

 if (!VAR_2->i_xattr_loc)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_1, FUNC_2(VAR_2->i_xattr_loc),
         &VAR_5);
 if (VAR_7 < 0) {
  FUNC_3(VAR_7);
  return VAR_7;
 }

 VAR_6 = (struct ocfs2_xattr_block *)VAR_5->b_data;
 if (!(FUNC_1(VAR_6->xb_flags) & VAR_0)) {
  struct ocfs2_xattr_header *VAR_8 = &VAR_6->xb_attrs.xb_header;
  VAR_7 = FUNC_5(VAR_1, VAR_8,
            VAR_3, VAR_4);
 } else
  VAR_7 = FUNC_6(VAR_1, VAR_5,
         VAR_3, VAR_4);

 FUNC_0(VAR_5);

 return VAR_7;
}
