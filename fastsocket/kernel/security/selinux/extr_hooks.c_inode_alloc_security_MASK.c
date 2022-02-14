
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode_security_struct {int task_sid; int sclass; int sid; struct inode* inode; int list; int lock; } ;
struct inode {struct inode_security_struct* i_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 struct inode_security_struct* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_5)
{
 struct inode_security_struct *VAR_6;
 u32 VAR_7 = FUNC_1();

 VAR_6 = FUNC_2(VAR_4, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_6->lock);
 FUNC_0(&VAR_6->list);
 VAR_6->inode = VAR_5;
 VAR_6->sid = VAR_3;
 VAR_6->sclass = VAR_2;
 VAR_6->task_sid = VAR_7;
 VAR_5->i_security = VAR_6;

 return 0;
}
