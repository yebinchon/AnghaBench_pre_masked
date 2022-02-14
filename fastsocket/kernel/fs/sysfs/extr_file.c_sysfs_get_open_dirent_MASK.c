
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_open_dirent {int buffers; int poll; int event; int refcnt; } ;
struct TYPE_2__ {struct sysfs_open_dirent* open; } ;
struct sysfs_dirent {TYPE_1__ s_attr; } ;
struct sysfs_buffer {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sysfs_open_dirent*) ;
 struct sysfs_open_dirent* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct sysfs_dirent *VAR_3,
     struct sysfs_buffer *VAR_4)
{
 struct sysfs_open_dirent *VAR_5, *VAR_6 = ((void*)0);

 retry:
 FUNC_7(&VAR_2);

 if (!VAR_3->s_attr.open && VAR_6) {
  VAR_3->s_attr.open = VAR_6;
  VAR_6 = ((void*)0);
 }

 VAR_5 = VAR_3->s_attr.open;
 if (VAR_5) {
  FUNC_1(&VAR_5->refcnt);
  FUNC_6(&VAR_4->list, &VAR_5->buffers);
 }

 FUNC_8(&VAR_2);

 if (VAR_5) {
  FUNC_4(VAR_6);
  return 0;
 }


 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_6->refcnt, 0);
 FUNC_2(&VAR_6->event, 1);
 FUNC_3(&VAR_6->poll);
 FUNC_0(&VAR_6->buffers);
 goto retry;
}
