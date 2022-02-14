
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {TYPE_1__* i_mapping; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_mode; } ;
typedef int mode_t ;
struct TYPE_2__ {int * backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct inode* FUNC_2 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_3(mode_t VAR_2, struct super_block *VAR_3)
{
 struct inode *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4) {
  VAR_4->i_mode = VAR_2;
  VAR_4->i_uid = FUNC_1();
  VAR_4->i_gid = FUNC_0();
  VAR_4->i_atime = VAR_4->i_mtime = VAR_4->i_ctime = VAR_0;
  VAR_4->i_mapping->backing_dev_info = &VAR_1;
 }
 return VAR_4;
}
