
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct stat {int dummy; } ;
struct fstatat_args {int buf; int path; int fd; int flag; } ;
typedef int sb ;


 int VAR_0 ;
 int FUNC_0 (struct stat*,int ,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,struct stat*,int *) ;

int
FUNC_2(struct thread *VAR_1, struct fstatat_args *VAR_2)
{
 struct stat VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2->flag, VAR_2->fd, VAR_2->path,
     VAR_0, &VAR_3, ((void*)0));
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(&VAR_3, VAR_2->buf, sizeof (VAR_3));
 return (VAR_4);
}
