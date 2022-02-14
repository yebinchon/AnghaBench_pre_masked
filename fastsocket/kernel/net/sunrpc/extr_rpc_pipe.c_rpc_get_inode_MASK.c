
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_op; int * i_fop; int i_ctime; int i_mtime; int i_atime; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct inode *
FUNC_2(struct super_block *VAR_4, umode_t VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->i_mode = VAR_5;
 VAR_6->i_atime = VAR_6->i_mtime = VAR_6->i_ctime = VAR_0;
 switch(VAR_5 & VAR_1) {
  case 128:
   VAR_6->i_fop = &VAR_3;
   VAR_6->i_op = &VAR_2;
   FUNC_0(VAR_6);
  default:
   break;
 }
 return VAR_6;
}
