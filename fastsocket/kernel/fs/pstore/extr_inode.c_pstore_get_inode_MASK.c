
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; scalar_t__ i_gid; scalar_t__ i_uid; } ;
typedef int dev_t ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_5,
     const struct inode *VAR_6, int VAR_7, dev_t VAR_8)
{
 struct inode *VAR_9 = FUNC_1(VAR_5);

 if (VAR_9) {
  VAR_9->i_uid = VAR_9->i_gid = 0;
  VAR_9->i_mode = VAR_7;
  VAR_9->i_atime = VAR_9->i_mtime = VAR_9->i_ctime = VAR_0;
  switch (VAR_7 & VAR_1) {
  case 128:
   VAR_9->i_fop = &VAR_3;
   break;
  case 129:
   VAR_9->i_op = &VAR_2;
   VAR_9->i_fop = &VAR_4;
   FUNC_0(VAR_9);
   break;
  }
 }
 return VAR_9;
}
