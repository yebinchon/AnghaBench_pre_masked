
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;


 struct ocfs2_super* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_super*) ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0)
{
 struct ocfs2_super *VAR_1 = FUNC_0(VAR_0->i_sb);

 return FUNC_1(VAR_1) ||
  FUNC_2(VAR_1);
}
