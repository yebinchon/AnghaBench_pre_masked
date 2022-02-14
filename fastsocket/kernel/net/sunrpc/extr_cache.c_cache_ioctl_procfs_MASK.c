
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct cache_detail {int dummy; } ;
struct TYPE_2__ {struct cache_detail* data; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct file*,unsigned int,unsigned long,struct cache_detail*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1,
         unsigned int VAR_2, unsigned long VAR_3)
{
 struct cache_detail *VAR_4 = FUNC_0(VAR_0)->data;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
