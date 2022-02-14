
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_cow_context {scalar_t__ cow_start; scalar_t__ cow_len; int (* get_clusters ) (struct ocfs2_cow_context*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;int dealloc; struct inode* inode; } ;
struct inode {int i_sb; int i_ino; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct ocfs2_cow_context*,scalar_t__,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_7 (struct ocfs2_super*) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (struct ocfs2_super*,int) ;
 int FUNC_10 (struct ocfs2_cow_context*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_cow_context *VAR_2)
{
 int VAR_3 = 0;
 struct inode *VAR_4 = VAR_2->inode;
 u32 VAR_5 = VAR_2->cow_start, VAR_6 = VAR_2->cow_len;
 u32 VAR_7, VAR_8;
 unsigned int VAR_9;
 struct ocfs2_super *VAR_10 = FUNC_1(VAR_4->i_sb);

 if (!FUNC_7(FUNC_1(VAR_4->i_sb))) {
  FUNC_4(VAR_4->i_sb, "Inode %lu want to use refcount "
       "tree, but the feature bit is not set in the "
       "super block.", VAR_4->i_ino);
  return -VAR_0;
 }

 FUNC_5(&VAR_2->dealloc);

 while (VAR_6) {
  VAR_3 = VAR_2->get_clusters(VAR_2, VAR_5, &VAR_7,
         &VAR_8, &VAR_9);
  if (VAR_3) {
   FUNC_2(VAR_3);
   break;
  }

  FUNC_0(!(VAR_9 & VAR_1));

  if (VAR_6 < VAR_8)
   VAR_8 = VAR_6;

  VAR_3 = FUNC_6(VAR_4->i_sb, VAR_2,
         VAR_5, VAR_7,
         VAR_8, VAR_9);
  if (VAR_3) {
   FUNC_2(VAR_3);
   break;
  }

  VAR_6 -= VAR_8;
  VAR_5 += VAR_8;
 }

 if (FUNC_3(&VAR_2->dealloc)) {
  FUNC_9(VAR_10, 1);
  FUNC_8(VAR_10, &VAR_2->dealloc);
 }

 return VAR_3;
}
