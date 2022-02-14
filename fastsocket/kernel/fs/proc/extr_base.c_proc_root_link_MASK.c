
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct path {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct path*,int) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct path *VAR_2)
{
 struct task_struct *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = -VAR_0;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_3, VAR_2, 1);
  FUNC_2(VAR_3);
 }
 return VAR_4;
}
