
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_operations {int dummy; } ;
struct inotify_handle {int count; struct inotify_operations const* in_ops; scalar_t__ last_wd; int mutex; int watches; int idr; } ;


 int VAR_0 ;
 struct inotify_handle* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct inotify_handle*) ;
 int FUNC_4 (int *) ;
 struct inotify_handle* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

struct inotify_handle *FUNC_8(const struct inotify_operations *VAR_2)
{
 struct inotify_handle *VAR_3;

 VAR_3 = FUNC_5(sizeof(struct inotify_handle), VAR_1);
 if (FUNC_7(!VAR_3))
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_3->idr);
 FUNC_1(&VAR_3->watches);
 FUNC_6(&VAR_3->mutex);
 VAR_3->last_wd = 0;
 VAR_3->in_ops = VAR_2;
 FUNC_2(&VAR_3->count, 0);
 FUNC_3(VAR_3);

 return VAR_3;
}
