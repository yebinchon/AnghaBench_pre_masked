
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct fsnotify_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsnotify_group*,struct inode*,int ) ;
 int FUNC_1 (struct fsnotify_group*,struct inode*,int ) ;

__attribute__((used)) static int FUNC_2(struct fsnotify_group *VAR_2, struct inode *VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;

retry:

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 if (VAR_5 == -VAR_1)
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);





 if (VAR_5 == -VAR_0)
  goto retry;

 return VAR_5;
}
