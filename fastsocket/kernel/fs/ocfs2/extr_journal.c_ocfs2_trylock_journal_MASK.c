
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 struct inode* FUNC_5 (struct ocfs2_super*,int ,int) ;
 int FUNC_6 (struct inode*,int *,int,int) ;
 int FUNC_7 (struct inode*,int) ;

__attribute__((used)) static int FUNC_8(struct ocfs2_super *VAR_6,
     int VAR_7)
{
 int VAR_8, VAR_9;
 struct inode *VAR_10 = ((void*)0);

 VAR_10 = FUNC_5(VAR_6, VAR_2,
         VAR_7);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_3, "access error\n");
  VAR_8 = -VAR_0;
  goto bail;
 }
 if (FUNC_2(VAR_10)) {
  FUNC_3(VAR_3, "access error (bad inode)\n");
  FUNC_1(VAR_10);
  VAR_10 = ((void*)0);
  VAR_8 = -VAR_0;
  goto bail;
 }
 FUNC_0(VAR_10);

 VAR_9 = VAR_5 | VAR_4;
 VAR_8 = FUNC_6(VAR_10, ((void*)0), 1, VAR_9);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_1)
   FUNC_4(VAR_8);
  goto bail;
 }

 FUNC_7(VAR_10, 1);
bail:
 if (VAR_10)
  FUNC_1(VAR_10);

 return VAR_8;
}
