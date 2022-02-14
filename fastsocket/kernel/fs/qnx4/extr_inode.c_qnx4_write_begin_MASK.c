
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qnx4_inode_info {int mmu_private; } ;
struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int host; } ;
typedef int loff_t ;


 int FUNC_0 (struct file*,struct address_space*,int ,unsigned int,unsigned int,struct page**,void**,int ,int *) ;
 int VAR_0 ;
 struct qnx4_inode_info* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct address_space *VAR_2,
   loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
   struct page **VAR_6, void **VAR_7)
{
 struct qnx4_inode_info *VAR_8 = FUNC_1(VAR_2->host);
 *VAR_6 = ((void*)0);
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_0,
    &VAR_8->mmu_private);
}
