
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct inode* FUNC_4 (struct ocfs2_super*,int ,int) ;
 int FUNC_5 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_3,
           int VAR_4,
           struct inode **VAR_5,
           struct buffer_head **VAR_6)
{
 int VAR_7;
 struct inode *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = ((void*)0);

 VAR_8 = FUNC_4(VAR_3,
        VAR_2,
        VAR_4);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  FUNC_1(VAR_1, "Could not get load truncate log inode!\n");
  goto bail;
 }

 VAR_7 = FUNC_5(VAR_8, &VAR_9);
 if (VAR_7 < 0) {
  FUNC_0(VAR_8);
  FUNC_2(VAR_7);
  goto bail;
 }

 *VAR_5 = VAR_8;
 *VAR_6 = VAR_9;
bail:
 FUNC_3(VAR_7);
 return VAR_7;
}
