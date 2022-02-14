
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int max_slots; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int) ;
 struct inode* FUNC_5 (struct ocfs2_super*,int ,int) ;
 int FUNC_6 (struct inode*,struct buffer_head**,int ) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_super *VAR_3,
        int VAR_4,
        struct buffer_head **VAR_5,
        struct inode **VAR_6)
{
 int VAR_7 = -VAR_0;
 struct inode *VAR_8 = ((void*)0);

 FUNC_0(VAR_4 >= VAR_3->max_slots);

 VAR_8 = FUNC_5(VAR_3, VAR_1,
         VAR_4);
 if (!VAR_8 || FUNC_3(VAR_8)) {
  FUNC_4(VAR_7);
  goto bail;
 }
 FUNC_1(VAR_8);

 VAR_7 = FUNC_6(VAR_8, VAR_5, VAR_2);
 if (VAR_7 < 0) {
  FUNC_4(VAR_7);
  goto bail;
 }

 VAR_7 = 0;

bail:
 if (VAR_8) {
  if (VAR_7 || !VAR_6)
   FUNC_2(VAR_8);
  else
   *VAR_6 = VAR_8;
 }
 return VAR_7;
}
