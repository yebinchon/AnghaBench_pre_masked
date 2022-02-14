
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; } ;
struct inode {unsigned int i_size; int * i_op; TYPE_2__* i_mapping; struct super_block* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {int i_symlink; } ;
struct TYPE_10__ {TYPE_3__ i_u1; } ;
struct TYPE_9__ {TYPE_1__* s_uspi; } ;
struct TYPE_7__ {int * a_ops; } ;
struct TYPE_6__ {unsigned int s_maxsymlinklen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 TYPE_4__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,char const*,unsigned int) ;
 int FUNC_9 (struct inode*,char const*,unsigned int) ;
 int VAR_3 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct dentry*,struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_12 (struct inode*,int) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14 (struct inode * VAR_6, struct dentry * VAR_7,
 const char * VAR_8)
{
 struct super_block * VAR_9 = VAR_6->i_sb;
 int VAR_10 = -VAR_0;
 unsigned VAR_11 = FUNC_10(VAR_8)+1;
 struct inode * VAR_12;

 if (VAR_11 > VAR_9->s_blocksize)
  goto out_notlocked;

 FUNC_6();
 VAR_12 = FUNC_12(VAR_6, VAR_1 | VAR_2);
 VAR_10 = FUNC_1(VAR_12);
 if (FUNC_0(VAR_12))
  goto out;

 if (VAR_11 > FUNC_3(VAR_9)->s_uspi->s_maxsymlinklen) {

  VAR_12->i_op = &VAR_3;
  VAR_12->i_mapping->a_ops = &VAR_4;
  VAR_10 = FUNC_9(VAR_12, VAR_8, VAR_11);
  if (VAR_10)
   goto out_fail;
 } else {

  VAR_12->i_op = &VAR_5;
  FUNC_8(FUNC_2(VAR_12)->i_u1.i_symlink, VAR_8, VAR_11);
  VAR_12->i_size = VAR_11-1;
 }
 FUNC_7(VAR_12);

 VAR_10 = FUNC_11(VAR_7, VAR_12);
out:
 FUNC_13();
out_notlocked:
 return VAR_10;

out_fail:
 FUNC_4(VAR_12);
 FUNC_5(VAR_12);
 goto out;
}
