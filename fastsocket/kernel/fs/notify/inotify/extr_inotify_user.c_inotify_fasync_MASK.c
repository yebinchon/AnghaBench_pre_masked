
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fa; } ;
struct fsnotify_group {TYPE_1__ inotify_data; } ;
struct file {struct fsnotify_group* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct fsnotify_group *VAR_4 = VAR_2->private_data;

 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->inotify_data.fa) >= 0 ? 0 : -VAR_0;
}
