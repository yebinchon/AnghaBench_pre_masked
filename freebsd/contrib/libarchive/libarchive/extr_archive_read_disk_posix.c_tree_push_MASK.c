
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int noatime; int filetype; int atime_nsec; int atime; int mtime_nsec; int mtime; int name; } ;
struct TYPE_7__ {int s; } ;
struct tree_entry {int symlink_parent_fd; int flags; int filesystem_id; TYPE_2__ restore_time; TYPE_3__ name; int dirname_length; void* ino; void* dev; TYPE_1__* parent; scalar_t__ depth; struct tree_entry* next; } ;
struct tree {int dirname_length; struct tree_entry* stack; TYPE_1__* current; } ;
struct restore_time {int noatime; int filetype; int atime_nsec; int atime; int mtime_nsec; int mtime; } ;
typedef void* int64_t ;
struct TYPE_5__ {scalar_t__ depth; } ;


 int FUNC_0 (TYPE_3__*,char const*) ;
 int FUNC_1 (TYPE_3__*) ;
 struct tree_entry* FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct tree *VAR_3, const char *VAR_4, int VAR_5,
    int64_t VAR_6, int64_t VAR_7, struct restore_time *VAR_8)
{
 struct tree_entry *VAR_9;

 VAR_9 = FUNC_2(1, sizeof(*VAR_9));
 VAR_9->next = VAR_3->stack;
 VAR_9->parent = VAR_3->current;
 if (VAR_9->parent)
  VAR_9->depth = VAR_9->parent->depth + 1;
 VAR_3->stack = VAR_9;
 FUNC_1(&VAR_9->name);
 VAR_9->symlink_parent_fd = -1;
 FUNC_0(&VAR_9->name, VAR_4);
 VAR_9->flags = VAR_1 | VAR_2 | VAR_0;
 VAR_9->filesystem_id = VAR_5;
 VAR_9->dev = VAR_6;
 VAR_9->ino = VAR_7;
 VAR_9->dirname_length = VAR_3->dirname_length;
 VAR_9->restore_time.name = VAR_9->name.s;
 if (VAR_8 != ((void*)0)) {
  VAR_9->restore_time.mtime = VAR_8->mtime;
  VAR_9->restore_time.mtime_nsec = VAR_8->mtime_nsec;
  VAR_9->restore_time.atime = VAR_8->atime;
  VAR_9->restore_time.atime_nsec = VAR_8->atime_nsec;
  VAR_9->restore_time.filetype = VAR_8->filetype;
  VAR_9->restore_time.noatime = VAR_8->noatime;
 }
}
