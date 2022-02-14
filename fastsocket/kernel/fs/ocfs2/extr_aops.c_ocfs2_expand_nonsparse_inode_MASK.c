
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_write_ctxt {int w_first_new_cpos; } ;
struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
typedef unsigned int loff_t ;


 struct ocfs2_super* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct inode*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, loff_t VAR_1,
     unsigned VAR_2,
     struct ocfs2_write_ctxt *VAR_3)
{
 int VAR_4;
 struct ocfs2_super *VAR_5 = FUNC_0(VAR_0->i_sb);
 loff_t VAR_6 = VAR_1 + VAR_2;

 if (FUNC_5(VAR_5))
  return 0;

 if (VAR_6 <= FUNC_1(VAR_0))
  return 0;

 VAR_4 = FUNC_4(VAR_0, VAR_6, VAR_1);
 if (VAR_4)
  FUNC_2(VAR_4);

 VAR_3->w_first_new_cpos =
  FUNC_3(VAR_0->i_sb, FUNC_1(VAR_0));

 return VAR_4;
}
