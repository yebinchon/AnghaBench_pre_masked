
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_event {scalar_t__ data_type; int file_name; int private_data_list; int path; int refcnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct fsnotify_event*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct fsnotify_event *VAR_2)
{
 if (!VAR_2)
  return;

 if (FUNC_1(&VAR_2->refcnt)) {
  if (VAR_2->data_type == VAR_0)
   FUNC_5(&VAR_2->path);

  FUNC_0(!FUNC_4(&VAR_2->private_data_list));

  FUNC_2(VAR_2->file_name);
  FUNC_3(VAR_1, VAR_2);
 }
}
