
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct funlinkat_args {int flag; int fd; int path; int dfd; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1, struct funlinkat_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->dfd, VAR_2->path, VAR_2->fd, VAR_2->flag,
     VAR_0, 0));
}
