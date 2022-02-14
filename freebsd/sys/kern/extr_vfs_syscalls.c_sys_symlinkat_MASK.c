
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct symlinkat_args {int path2; int fd; int path1; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1, struct symlinkat_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->path1, VAR_2->fd, VAR_2->path2,
     VAR_0));
}
