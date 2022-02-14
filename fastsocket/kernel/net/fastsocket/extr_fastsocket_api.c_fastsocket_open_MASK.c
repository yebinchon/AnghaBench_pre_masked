
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_6, struct file *VAR_7)
{
 if (!FUNC_3(VAR_3)) {
  FUNC_1(VAR_1, "Add reference to fastsocket module failed\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2, "Hold module reference\n");

 FUNC_2(VAR_5);
 VAR_4 = 0;

 return 0;
}
