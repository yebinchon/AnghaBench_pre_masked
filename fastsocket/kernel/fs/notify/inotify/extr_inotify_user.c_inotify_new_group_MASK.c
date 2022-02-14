
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* user; int * fa; scalar_t__ last_wd; int idr; int idr_lock; } ;
struct fsnotify_group {unsigned int max_events; TYPE_1__ inotify_data; } ;
struct TYPE_4__ {int inotify_devs; } ;


 int VAR_0 ;
 struct fsnotify_group* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct fsnotify_group*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct fsnotify_group* FUNC_3 (unsigned int,int ,int *) ;
 int FUNC_4 (struct fsnotify_group*) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct fsnotify_group *FUNC_8(unsigned int VAR_5)
{
 struct fsnotify_group *VAR_6;
 unsigned int VAR_7;


 VAR_7 = (VAR_1 - FUNC_2(&VAR_3));
 VAR_6 = FUNC_3(VAR_7, 0, &VAR_2);
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_6->max_events = VAR_5;

 FUNC_7(&VAR_6->inotify_data.idr_lock);
 FUNC_6(&VAR_6->inotify_data.idr);
 VAR_6->inotify_data.last_wd = 0;
 VAR_6->inotify_data.fa = ((void*)0);
 VAR_6->inotify_data.user = FUNC_5();

 if (FUNC_2(&VAR_6->inotify_data.user->inotify_devs) >
     VAR_4) {
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_0);
 }

 return VAR_6;
}
