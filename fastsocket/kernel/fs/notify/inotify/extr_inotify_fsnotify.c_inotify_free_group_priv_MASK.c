
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* user; int idr; } ;
struct fsnotify_group {TYPE_1__ inotify_data; } ;
struct TYPE_4__ {int inotify_devs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct fsnotify_group*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fsnotify_group *VAR_1)
{

 FUNC_3(&VAR_1->inotify_data.idr, VAR_0, VAR_1);
 FUNC_4(&VAR_1->inotify_data.idr);
 FUNC_2(&VAR_1->inotify_data.idr);
 FUNC_0(&VAR_1->inotify_data.user->inotify_devs);
 FUNC_1(VAR_1->inotify_data.user);
}
