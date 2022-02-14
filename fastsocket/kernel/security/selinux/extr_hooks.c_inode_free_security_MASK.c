
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct superblock_security_struct {int isec_lock; } ;
struct inode_security_struct {int list; } ;
struct inode {struct inode_security_struct* i_security; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct superblock_security_struct* s_security; } ;


 int FUNC_0 (int ,struct inode_security_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1)
{
 struct inode_security_struct *VAR_2 = VAR_1->i_security;
 struct superblock_security_struct *VAR_3 = VAR_1->i_sb->s_security;

 FUNC_3(&VAR_3->isec_lock);
 if (!FUNC_2(&VAR_2->list))
  FUNC_1(&VAR_2->list);
 FUNC_4(&VAR_3->isec_lock);

 VAR_1->i_security = ((void*)0);
 FUNC_0(VAR_0, VAR_2);
}
