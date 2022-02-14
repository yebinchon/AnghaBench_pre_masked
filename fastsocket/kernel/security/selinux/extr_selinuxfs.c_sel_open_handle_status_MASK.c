
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct page* private_data; } ;


 int VAR_0 ;
 struct page* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct page *VAR_3 = FUNC_0();

 if (!VAR_3)
  return -VAR_0;

 VAR_2->private_data = VAR_3;

 return 0;
}
