
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct symlink_args {int link; int path; } ;


 int FUNC_0 (struct thread*,int ,int ) ;
 int FUNC_1 (struct thread*,struct symlink_args*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0, struct symlink_args *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_1)) == 0)
  FUNC_0(VAR_0, VAR_1->path, VAR_1->link);

 return (VAR_2);
}
