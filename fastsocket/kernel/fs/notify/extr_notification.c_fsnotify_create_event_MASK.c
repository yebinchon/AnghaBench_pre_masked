
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int * mnt; int * dentry; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int * mnt; int * dentry; } ;
struct fsnotify_event {int data_type; int mask; TYPE_1__ path; int * inode; struct inode* to_tell; int sync_cookie; int file_name; int name_len; } ;
struct file {struct path f_path; } ;
typedef int gfp_t ;
typedef int __u32 ;


 int FUNC_0 () ;




 int VAR_0 ;
 int FUNC_1 (struct fsnotify_event*) ;
 struct fsnotify_event* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct fsnotify_event*) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

struct fsnotify_event *FUNC_7(struct inode *VAR_1, __u32 VAR_2, void *VAR_3,
          int VAR_4, const char *VAR_5, u32 VAR_6,
          gfp_t VAR_7)
{
 struct fsnotify_event *VAR_8;

 VAR_8 = FUNC_2(VAR_0, VAR_7);
 if (!VAR_8)
  return ((void*)0);

 FUNC_1(VAR_8);

 if (VAR_5) {
  VAR_8->file_name = FUNC_4(VAR_5, VAR_7);
  if (!VAR_8->file_name) {
   FUNC_3(VAR_0, VAR_8);
   return ((void*)0);
  }
  VAR_8->name_len = FUNC_6(VAR_8->file_name);
 }

 VAR_8->sync_cookie = VAR_6;
 VAR_8->to_tell = VAR_1;

 switch (VAR_4) {
 case 131: {
  struct file *VAR_9 = VAR_3;
  struct path *VAR_10 = &VAR_9->f_path;
  VAR_8->path.dentry = VAR_10->dentry;
  VAR_8->path.mnt = VAR_10->mnt;
  FUNC_5(&VAR_8->path);
  VAR_8->data_type = 128;
  break;
 }
 case 128: {
  struct path *VAR_11 = VAR_3;
  VAR_8->path.dentry = VAR_11->dentry;
  VAR_8->path.mnt = VAR_11->mnt;
  FUNC_5(&VAR_8->path);
  VAR_8->data_type = 128;
  break;
 }
 case 130:
  VAR_8->inode = VAR_3;
  VAR_8->data_type = 130;
  break;
 case 129:
  VAR_8->inode = ((void*)0);
  VAR_8->path.dentry = ((void*)0);
  VAR_8->path.mnt = ((void*)0);
  break;
 default:
  FUNC_0();
 }

 VAR_8->mask = VAR_2;

 return VAR_8;
}
