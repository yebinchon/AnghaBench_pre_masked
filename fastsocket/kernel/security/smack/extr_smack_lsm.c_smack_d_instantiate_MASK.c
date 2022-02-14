
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct superblock_smack {char* smk_default; char* smk_root; } ;
struct super_block {int s_magic; struct superblock_smack* s_security; } ;
struct inode_smack {int smk_flags; char* smk_inode; int smk_lock; } ;
struct inode {TYPE_1__* i_op; struct super_block* i_sb; struct inode_smack* i_security; } ;
struct dentry {struct dentry* d_parent; } ;
struct TYPE_4__ {char* smk_known; } ;
struct TYPE_3__ {int * getxattr; } ;






 int VAR_0 ;


 char* FUNC_0 () ;
 struct dentry* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__ VAR_1 ;
 char* FUNC_6 (struct inode*,struct dentry*) ;

__attribute__((used)) static void FUNC_7(struct dentry *VAR_2, struct inode *VAR_3)
{
 struct super_block *VAR_4;
 struct superblock_smack *VAR_5;
 struct inode_smack *VAR_6;
 char *VAR_7 = FUNC_0();
 char *VAR_8;
 char *VAR_9;
 struct dentry *VAR_10;

 if (VAR_3 == ((void*)0))
  return;

 VAR_6 = VAR_3->i_security;

 FUNC_4(&VAR_6->smk_lock);




 if (VAR_6->smk_flags & VAR_0)
  goto unlockandout;

 VAR_4 = VAR_3->i_sb;
 VAR_5 = VAR_4->s_security;




 VAR_9 = VAR_5->smk_default;







 if (VAR_2->d_parent == VAR_2) {
  VAR_6->smk_inode = VAR_5->smk_root;
  VAR_6->smk_flags |= VAR_0;
  goto unlockandout;
 }







 switch (VAR_4->s_magic) {
 case 130:





  VAR_9 = VAR_1.smk_known;
  break;
 case 132:



  VAR_9 = VAR_1.smk_known;
  break;
 case 133:





  VAR_9 = VAR_7;
  break;
 case 129:



  VAR_9 = VAR_7;
  break;
 case 131:




  break;
 case 128:





  VAR_9 = VAR_1.smk_known;
 default:
  if (VAR_3->i_op->getxattr == ((void*)0))
   break;



  if (VAR_2 == ((void*)0)) {
   VAR_10 = FUNC_1(VAR_3);
   if (VAR_10 == ((void*)0))
    break;
  } else {
   VAR_10 = FUNC_2(VAR_2);
   if (VAR_10 == ((void*)0))
    break;
  }

  VAR_8 = FUNC_6(VAR_3, VAR_10);
  if (VAR_8 != ((void*)0))
   VAR_9 = VAR_8;

  FUNC_3(VAR_10);
  break;
 }

 if (VAR_9 == ((void*)0))
  VAR_6->smk_inode = VAR_7;
 else
  VAR_6->smk_inode = VAR_9;

 VAR_6->smk_flags |= VAR_0;

unlockandout:
 FUNC_5(&VAR_6->smk_lock);
 return;
}
