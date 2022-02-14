
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct inode*,struct file*) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 FUNC_0(VAR_0, "Enter fsock_close, inode(%p) file(%p)\n", VAR_1, VAR_2);

 return FUNC_1(VAR_2);
}
