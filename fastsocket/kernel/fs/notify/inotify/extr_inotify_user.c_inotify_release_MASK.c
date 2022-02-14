
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fsnotify_group {int dummy; } ;
struct file {struct fsnotify_group* private_data; } ;


 int FUNC_0 (struct fsnotify_group*) ;
 int FUNC_1 (struct fsnotify_group*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct fsnotify_group *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);


 FUNC_1(VAR_2);

 return 0;
}
