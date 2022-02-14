
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int entry_fd; int initial_filesystem_id; int maxOpenCount; int openCount; scalar_t__ initial_dir_fd; int working_dir_fd; TYPE_1__* stack; scalar_t__ entry_remaining_bytes; scalar_t__ entry_eof; int path; int initial_symlink_mode; int symlink_mode; int d; int * current; scalar_t__ descend; scalar_t__ depth; scalar_t__ dirname_length; scalar_t__ tree_errno; scalar_t__ visit_type; int flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (char*,int const) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct tree*,char const*,int ,int ,int ,int *) ;

__attribute__((used)) static struct tree *
FUNC_5(struct tree *VAR_9, const char *VAR_10, int VAR_11)
{
 VAR_9->flags = (VAR_11 != 0)?VAR_7:0;
 VAR_9->flags |= VAR_8;
 VAR_9->visit_type = 0;
 VAR_9->tree_errno = 0;
 VAR_9->dirname_length = 0;
 VAR_9->depth = 0;
 VAR_9->descend = 0;
 VAR_9->current = ((void*)0);
 VAR_9->d = VAR_0;
 VAR_9->symlink_mode = VAR_9->initial_symlink_mode;
 FUNC_1(&VAR_9->path);
 VAR_9->entry_fd = -1;
 VAR_9->entry_eof = 0;
 VAR_9->entry_remaining_bytes = 0;
 VAR_9->initial_filesystem_id = -1;


 FUNC_4(VAR_9, VAR_10, 0, 0, 0, ((void*)0));
 VAR_9->stack->flags = VAR_6;
 VAR_9->maxOpenCount = VAR_9->openCount = 1;
 VAR_9->initial_dir_fd = FUNC_2(".", VAR_4 | VAR_1);
 FUNC_0(VAR_9->initial_dir_fd);
 VAR_9->working_dir_fd = FUNC_3(VAR_9->initial_dir_fd);
 return (VAR_9);
}
