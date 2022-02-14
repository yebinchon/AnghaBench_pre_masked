
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_event {int dummy; } ;
struct fsnotify_group {int dummy; } ;
struct fsnotify_event {scalar_t__ name_len; } ;


 int VAR_0 ;
 struct fsnotify_event* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fsnotify_group*) ;
 struct fsnotify_event* FUNC_2 (struct fsnotify_group*) ;
 int FUNC_3 (struct fsnotify_group*) ;
 scalar_t__ FUNC_4 (scalar_t__,size_t) ;

__attribute__((used)) static struct fsnotify_event *FUNC_5(struct fsnotify_group *VAR_1,
         size_t VAR_2)
{
 size_t VAR_3 = sizeof(struct inotify_event);
 struct fsnotify_event *VAR_4;

 if (FUNC_1(VAR_1))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_1);

 if (VAR_4->name_len)
  VAR_3 += FUNC_4(VAR_4->name_len + 1, VAR_3);

 if (VAR_3 > VAR_2)
  return FUNC_0(-VAR_0);



 FUNC_3(VAR_1);

 return VAR_4;
}
