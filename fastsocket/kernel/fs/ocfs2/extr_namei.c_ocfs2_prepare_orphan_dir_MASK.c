
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int slot_num; } ;
struct ocfs2_dir_lookup_result {int dummy; } ;
struct inode {int i_mutex; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 struct inode* FUNC_7 (struct ocfs2_super*,int ,int ) ;
 int FUNC_8 (struct inode*,struct buffer_head**,int) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct ocfs2_super*,struct inode*,struct buffer_head*,char*,int ,struct ocfs2_dir_lookup_result*) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_super *VAR_3,
        struct inode **VAR_4,
        u64 VAR_5,
        char *VAR_6,
        struct ocfs2_dir_lookup_result *VAR_7)
{
 struct inode *VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 VAR_10 = FUNC_6(VAR_5, VAR_6);
 if (VAR_10 < 0) {
  FUNC_2(VAR_10);
  return VAR_10;
 }

 VAR_8 = FUNC_7(VAR_3,
             VAR_2,
             VAR_3->slot_num);
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  FUNC_2(VAR_10);
  return VAR_10;
 }

 FUNC_4(&VAR_8->i_mutex);

 VAR_10 = FUNC_8(VAR_8, &VAR_9, 1);
 if (VAR_10 < 0) {
  FUNC_2(VAR_10);
  goto leave;
 }

 VAR_10 = FUNC_10(VAR_3, VAR_8,
           VAR_9, VAR_6,
           VAR_1, VAR_7);
 if (VAR_10 < 0) {
  FUNC_9(VAR_8, 1);

  FUNC_2(VAR_10);
  goto leave;
 }

 *VAR_4 = VAR_8;

leave:
 if (VAR_10) {
  FUNC_5(&VAR_8->i_mutex);
  FUNC_1(VAR_8);
 }

 FUNC_0(VAR_9);

 FUNC_3(VAR_10);
 return VAR_10;
}
