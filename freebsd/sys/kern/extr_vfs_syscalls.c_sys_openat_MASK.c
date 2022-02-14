
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct openat_args {int mode; int flag; int path; int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_2(struct thread *VAR_1, struct openat_args *VAR_2)
{

 FUNC_0(VAR_2->fd);
 return (FUNC_1(VAR_1, VAR_2->fd, VAR_2->path, VAR_0, VAR_2->flag,
     VAR_2->mode));
}
