
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_smack {char* smk_inode; int smk_lock; scalar_t__ smk_flags; } ;


 int VAR_0 ;
 struct inode_smack* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

struct inode_smack *FUNC_2(char *VAR_1)
{
 struct inode_smack *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct inode_smack), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->smk_inode = VAR_1;
 VAR_2->smk_flags = 0;
 FUNC_1(&VAR_2->smk_lock);

 return VAR_2;
}
