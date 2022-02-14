
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * mnt; int * dentry; } ;
struct TYPE_3__ {int event_list; int * event; } ;
struct fsnotify_event {scalar_t__ sync_cookie; scalar_t__ name_len; int * file_name; int * to_tell; int private_data_list; int data_type; int * inode; TYPE_2__ path; int lock; int refcnt; TYPE_1__ holder; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fsnotify_event *VAR_1)
{
 VAR_1->holder.event = ((void*)0);
 FUNC_0(&VAR_1->holder.event_list);
 FUNC_1(&VAR_1->refcnt, 1);

 FUNC_2(&VAR_1->lock);

 VAR_1->path.dentry = ((void*)0);
 VAR_1->path.mnt = ((void*)0);
 VAR_1->inode = ((void*)0);
 VAR_1->data_type = VAR_0;

 FUNC_0(&VAR_1->private_data_list);

 VAR_1->to_tell = ((void*)0);

 VAR_1->file_name = ((void*)0);
 VAR_1->name_len = 0;

 VAR_1->sync_cookie = 0;
}
