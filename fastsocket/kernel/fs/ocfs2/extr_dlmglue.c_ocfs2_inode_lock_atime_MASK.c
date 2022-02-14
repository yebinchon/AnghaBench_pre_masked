
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct buffer_head**,int) ;
 int FUNC_5 (struct inode*,int ) ;
 scalar_t__ FUNC_6 (struct inode*,struct vfsmount*) ;
 int FUNC_7 (struct inode*,struct buffer_head*) ;

int FUNC_8(struct inode *VAR_0,
     struct vfsmount *VAR_1,
     int *VAR_2)
{
 int VAR_3;

 FUNC_1();
 VAR_3 = FUNC_4(VAR_0, ((void*)0), 0);
 if (VAR_3 < 0) {
  FUNC_2(VAR_3);
  return VAR_3;
 }





 if (FUNC_6(VAR_0, VAR_1)) {
  struct buffer_head *VAR_4 = ((void*)0);

  FUNC_5(VAR_0, 0);
  VAR_3 = FUNC_4(VAR_0, &VAR_4, 1);
  if (VAR_3 < 0) {
   FUNC_2(VAR_3);
   return VAR_3;
  }
  *VAR_2 = 1;
  if (FUNC_6(VAR_0, VAR_1))
   FUNC_7(VAR_0, VAR_4);
  if (VAR_4)
   FUNC_0(VAR_4);
 } else
  *VAR_2 = 0;

 FUNC_3(VAR_3);
 return VAR_3;
}
