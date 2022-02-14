
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
typedef int ino_t ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (struct the_nilfs*,struct super_block*,int ,int ) ;

struct inode *FUNC_1(struct the_nilfs *VAR_4, struct super_block *VAR_5,
       ino_t VAR_6)
{
 struct inode *VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6,
         VAR_0);

 if (!VAR_7)
  return ((void*)0);

 VAR_7->i_op = &VAR_3;
 VAR_7->i_fop = &VAR_2;
 VAR_7->i_mapping->a_ops = &VAR_1;
 return VAR_7;
}
