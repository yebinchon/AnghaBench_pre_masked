
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct cache_detail {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2,
   struct cache_detail *VAR_3)
{
 if (!VAR_3 || !FUNC_1(VAR_3->owner))
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
