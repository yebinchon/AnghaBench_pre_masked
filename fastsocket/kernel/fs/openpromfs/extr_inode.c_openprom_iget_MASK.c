
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; scalar_t__ i_ino; int i_mode; int * i_fop; int * i_op; int i_ctime; int i_atime; int i_mtime; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_1 (struct super_block*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_9, ino_t VAR_10)
{
 struct inode *VAR_11;

 VAR_11 = FUNC_1(VAR_9, VAR_10);
 if (!VAR_11)
  return FUNC_0(-VAR_1);
 if (VAR_11->i_state & VAR_2) {
  VAR_11->i_mtime = VAR_11->i_atime = VAR_11->i_ctime = VAR_0;
  if (VAR_11->i_ino == VAR_3) {
   VAR_11->i_op = &VAR_7;
   VAR_11->i_fop = &VAR_8;
   VAR_11->i_mode = VAR_4 | VAR_5 | VAR_6;
  }
  FUNC_2(VAR_11);
 }
 return VAR_11;
}
