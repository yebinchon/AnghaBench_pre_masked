
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_bucket {int bu_blocks; struct inode* bu_inode; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_xattr_bucket* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct ocfs2_xattr_bucket *FUNC_3(struct inode *VAR_2)
{
 struct ocfs2_xattr_bucket *VAR_3;
 int VAR_4 = FUNC_2(VAR_2->i_sb);

 FUNC_0(VAR_4 > VAR_1);

 VAR_3 = FUNC_1(sizeof(struct ocfs2_xattr_bucket), VAR_0);
 if (VAR_3) {
  VAR_3->bu_inode = VAR_2;
  VAR_3->bu_blocks = VAR_4;
 }

 return VAR_3;
}
