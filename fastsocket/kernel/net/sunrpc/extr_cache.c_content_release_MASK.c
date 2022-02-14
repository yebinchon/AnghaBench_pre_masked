
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct cache_detail {int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1,
  struct cache_detail *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2->owner);
 return VAR_3;
}
