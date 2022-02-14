
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int mask; } ;
struct inotify_inode_mark_entry {int wd; TYPE_3__ fsn_entry; } ;
struct inode {int dummy; } ;
struct TYPE_9__ {int last_wd; TYPE_1__* user; int idr_lock; int idr; } ;
struct fsnotify_group {int mask; TYPE_2__ inotify_data; } ;
typedef int __u32 ;
struct TYPE_8__ {int inotify_watches; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,struct fsnotify_group*,struct inode*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct fsnotify_group*) ;
 int FUNC_7 (int *,TYPE_3__*,int,int*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (struct fsnotify_group*,struct inotify_inode_mark_entry*) ;
 struct inotify_inode_mark_entry* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct inotify_inode_mark_entry*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct fsnotify_group *VAR_8,
        struct inode *VAR_9,
        u32 VAR_10)
{
 struct inotify_inode_mark_entry *VAR_11;
 __u32 VAR_12;
 int VAR_13;


 VAR_12 = FUNC_9(VAR_10);
 if (FUNC_15(!VAR_12))
  return -VAR_1;

 VAR_11 = FUNC_11(VAR_6, VAR_4);
 if (FUNC_15(!VAR_11))
  return -VAR_2;

 FUNC_4(&VAR_11->fsn_entry, VAR_5);
 VAR_11->fsn_entry.mask = VAR_12;
 VAR_11->wd = -1;

 VAR_13 = -VAR_3;
 if (FUNC_1(&VAR_8->inotify_data.user->inotify_watches) >= VAR_7)
  goto out_err;
retry:
 VAR_13 = -VAR_2;
 if (FUNC_15(!FUNC_8(&VAR_8->inotify_data.idr, VAR_4)))
  goto out_err;


 FUNC_3(&VAR_11->fsn_entry);

 FUNC_13(&VAR_8->inotify_data.idr_lock);
 VAR_13 = FUNC_7(&VAR_8->inotify_data.idr, &VAR_11->fsn_entry,
    VAR_8->inotify_data.last_wd + 1,
    &VAR_11->wd);
 FUNC_14(&VAR_8->inotify_data.idr_lock);
 if (VAR_13) {

  FUNC_5(&VAR_11->fsn_entry);


  if (VAR_13 == -VAR_0)
   goto retry;
  goto out_err;
 }


 VAR_13 = FUNC_2(&VAR_11->fsn_entry, VAR_8, VAR_9);
 if (VAR_13) {

  FUNC_10(VAR_8, VAR_11);
  goto out_err;
 }


 VAR_8->inotify_data.last_wd = VAR_11->wd;


 FUNC_0(&VAR_8->inotify_data.user->inotify_watches);


 VAR_13 = VAR_11->wd;


 FUNC_5(&VAR_11->fsn_entry);


 if (VAR_12 & ~VAR_8->mask)
  FUNC_6(VAR_8);

out_err:
 if (VAR_13 < 0)
  FUNC_12(VAR_6, VAR_11);

 return VAR_13;
}
