
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ k_dir_id; scalar_t__ k_objectid; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;


 int FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct cpu_key*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct super_block *VAR_0,
 u32 VAR_1, u32 VAR_2, u32 VAR_3)

{
 struct cpu_key VAR_4;
 struct inode *VAR_5;

 VAR_4.on_disk_key.k_objectid = VAR_1;
 VAR_4.on_disk_key.k_dir_id = VAR_2;
 FUNC_4(VAR_0);
 VAR_5 = FUNC_3(VAR_0, &VAR_4);
 if (VAR_5 && !FUNC_0(VAR_5) && VAR_3 != 0 &&
     VAR_3 != VAR_5->i_generation) {
  FUNC_2(VAR_5);
  VAR_5 = ((void*)0);
 }
 FUNC_5(VAR_0);

 return FUNC_1(VAR_5);
}
