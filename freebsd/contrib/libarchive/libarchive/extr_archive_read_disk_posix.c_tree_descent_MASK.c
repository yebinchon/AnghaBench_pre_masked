
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int working_dir_fd; scalar_t__ openCount; scalar_t__ maxOpenCount; int flags; TYPE_2__* stack; int depth; int tree_errno; int path; int dirname_length; } ;
struct TYPE_3__ {int s; } ;
struct TYPE_4__ {int flags; int symlink_parent_fd; TYPE_1__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct tree*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct tree *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;

 VAR_7->dirname_length = FUNC_1(&VAR_7->path);
 VAR_8 = VAR_2 | VAR_0;



 VAR_9 = FUNC_3(VAR_7, VAR_7->stack->name.s, VAR_8);
 FUNC_0(VAR_9);
 if (VAR_9 < 0) {
  VAR_7->tree_errno = VAR_4;
  VAR_10 = VAR_3;
 } else {
  VAR_7->depth++;

  if (VAR_7->stack->flags & VAR_5) {
   VAR_7->stack->symlink_parent_fd = VAR_7->working_dir_fd;
   VAR_7->openCount++;
   if (VAR_7->openCount > VAR_7->maxOpenCount)
    VAR_7->maxOpenCount = VAR_7->openCount;
  } else
   FUNC_2(VAR_7->working_dir_fd);

  VAR_7->working_dir_fd = VAR_9;
  VAR_7->flags &= ~VAR_6;
 }
 return (VAR_10);
}
