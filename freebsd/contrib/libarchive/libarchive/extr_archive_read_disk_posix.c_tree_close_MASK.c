
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int entry_fd; scalar_t__ d; int working_dir_fd; int initial_dir_fd; TYPE_1__* stack; int restore_time; } ;
struct TYPE_2__ {int flags; int symlink_parent_fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct tree*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (struct tree*) ;

__attribute__((used)) static void
FUNC_4(struct tree *VAR_2)
{

 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->entry_fd >= 0) {
  FUNC_1(VAR_2->entry_fd, VAR_2, &VAR_2->restore_time);
  VAR_2->entry_fd = -1;
 }

 if (VAR_2->d != VAR_0) {
  FUNC_2(VAR_2->d);
  VAR_2->d = VAR_0;
 }

 while (VAR_2->stack != ((void*)0)) {
  if (VAR_2->stack->flags & VAR_1)
   FUNC_0(VAR_2->stack->symlink_parent_fd);
  FUNC_3(VAR_2);
 }
 if (VAR_2->working_dir_fd >= 0) {
  FUNC_0(VAR_2->working_dir_fd);
  VAR_2->working_dir_fd = -1;
 }
 if (VAR_2->initial_dir_fd >= 0) {
  FUNC_0(VAR_2->initial_dir_fd);
  VAR_2->initial_dir_fd = -1;
 }
}
