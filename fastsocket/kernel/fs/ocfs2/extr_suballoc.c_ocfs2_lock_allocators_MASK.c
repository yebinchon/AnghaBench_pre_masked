
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_extent_tree {int et_root_el; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_alloc_context*) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_extent_tree*) ;
 int FUNC_5 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_6 (struct ocfs2_super*,int ,struct ocfs2_alloc_context**) ;
 scalar_t__ FUNC_7 (struct ocfs2_super*) ;

int FUNC_8(struct inode *VAR_1,
     struct ocfs2_extent_tree *VAR_2,
     u32 VAR_3, u32 VAR_4,
     struct ocfs2_alloc_context **VAR_5,
     struct ocfs2_alloc_context **VAR_6)
{
 int VAR_7 = 0, VAR_8;
 unsigned int VAR_9 = VAR_3 + 2 * VAR_4;
 struct ocfs2_super *VAR_10 = FUNC_1(VAR_1->i_sb);

 *VAR_6 = ((void*)0);
 if (VAR_5)
  *VAR_5 = ((void*)0);

 FUNC_0(VAR_3 != 0 && VAR_5 == ((void*)0));

 VAR_8 = FUNC_4(VAR_10, VAR_2);
 if (VAR_8 < 0) {
  VAR_7 = VAR_8;
  FUNC_2(VAR_7);
  goto out;
 }
 if (!VAR_8 ||
     (FUNC_7(VAR_10) && VAR_8 < VAR_9)) {
  VAR_7 = FUNC_6(VAR_10, VAR_2->et_root_el, VAR_6);
  if (VAR_7 < 0) {
   if (VAR_7 != -VAR_0)
    FUNC_2(VAR_7);
   goto out;
  }
 }

 if (VAR_3 == 0)
  goto out;

 VAR_7 = FUNC_5(VAR_10, VAR_3, VAR_5);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_0)
   FUNC_2(VAR_7);
  goto out;
 }

out:
 if (VAR_7) {
  if (*VAR_6) {
   FUNC_3(*VAR_6);
   *VAR_6 = ((void*)0);
  }




 }

 return VAR_7;
}
