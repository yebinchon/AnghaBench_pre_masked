
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_4__ {struct the_nilfs* mi_nilfs; } ;
struct TYPE_3__ {struct the_nilfs* s_nilfs; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline struct the_nilfs *FUNC_2(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;

 return VAR_1 ? FUNC_1(VAR_1)->s_nilfs : FUNC_0(VAR_0)->mi_nilfs;
}
