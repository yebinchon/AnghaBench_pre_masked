
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space_operations {int (* write_begin ) (struct file*,struct address_space*,int ,unsigned int,unsigned int,struct page**,void**) ;} ;
struct address_space {struct address_space_operations* a_ops; } ;
typedef int loff_t ;


 int FUNC_0 (struct file*,struct address_space*,int ,unsigned int,unsigned int,struct page**,void**) ;

int FUNC_1(struct file *VAR_0, struct address_space *VAR_1,
    loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
    struct page **VAR_5, void **VAR_6)
{
 const struct address_space_operations *VAR_7 = VAR_1->a_ops;

 return VAR_7->write_begin(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6);
}
