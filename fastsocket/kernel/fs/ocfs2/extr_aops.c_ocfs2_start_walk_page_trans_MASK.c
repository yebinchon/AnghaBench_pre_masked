
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,int *) ;
 int FUNC_5 (int *,struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int * FUNC_7 (struct ocfs2_super*,int ) ;

handle_t *FUNC_8(struct inode *VAR_2,
        struct page *VAR_3,
        unsigned VAR_4,
        unsigned VAR_5)
{
 struct ocfs2_super *VAR_6 = FUNC_2(VAR_2->i_sb);
 handle_t *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_7(VAR_6, VAR_1);
 if (FUNC_1(VAR_7)) {
  VAR_8 = -VAR_0;
  FUNC_3(VAR_8);
  goto out;
 }

 if (FUNC_6(VAR_2)) {
  VAR_8 = FUNC_5(VAR_7, VAR_2);
  if (VAR_8 < 0)
   FUNC_3(VAR_8);
 }
out:
 if (VAR_8) {
  if (!FUNC_1(VAR_7))
   FUNC_4(VAR_6, VAR_7);
  VAR_7 = FUNC_0(VAR_8);
 }
 return VAR_7;
}
