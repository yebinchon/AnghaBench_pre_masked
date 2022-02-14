
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef int loff_t ;
struct TYPE_2__ {int s_clustersize_bits; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*,int,int,struct page**,int*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, loff_t VAR_1, loff_t VAR_2,
    struct page **VAR_3, int *VAR_4)
{
 struct super_block *VAR_5 = VAR_0->i_sb;

 FUNC_0(VAR_1 >> FUNC_1(VAR_5)->s_clustersize_bits !=
        (VAR_2 - 1) >> FUNC_1(VAR_5)->s_clustersize_bits);

 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
