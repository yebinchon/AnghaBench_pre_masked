
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ depth; int flags; int working_dir_fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct tree *VAR_2)
{
 int VAR_3 = 0;






 if (VAR_2->depth > 0 && (VAR_2->flags & VAR_1) == 0) {
  VAR_3 = FUNC_0(VAR_2->working_dir_fd);
  if (VAR_3 == 0) {
   VAR_2->flags &= ~VAR_0;
   VAR_2->flags |= VAR_1;
  }
 }
 return (VAR_3);
}
