
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_entry {int flags; int symlink_parent_fd; int restore_time; } ;
struct tree {int working_dir_fd; int depth; int openCount; int flags; int tree_errno; struct tree_entry* stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct tree*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct tree*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct tree *VAR_6)
{
 struct tree_entry *VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10;

 VAR_7 = VAR_6->stack;
 VAR_10 = VAR_6->working_dir_fd;
 if (VAR_7->flags & VAR_4)
  VAR_8 = VAR_7->symlink_parent_fd;
 else {
  VAR_8 = FUNC_2(VAR_6, "..", VAR_1 | VAR_0);
  FUNC_0(VAR_8);
 }
 if (VAR_8 < 0) {
  VAR_6->tree_errno = VAR_3;
  VAR_9 = VAR_2;
 } else {

  VAR_6->working_dir_fd = VAR_8;
  VAR_6->flags &= ~VAR_5;


  FUNC_1(VAR_10, VAR_6, &VAR_7->restore_time);
  if (VAR_7->flags & VAR_4) {
   VAR_6->openCount--;
   VAR_7->symlink_parent_fd = -1;
  }
  VAR_6->depth--;
 }
 return (VAR_9);
}
