
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ub32 ;
struct thread {int dummy; } ;
struct stat32 {int dummy; } ;
struct stat {int dummy; } ;
struct freebsd32_fstatat_args {int buf; int path; int fd; int flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct stat*,struct stat32*) ;
 int FUNC_1 (struct stat32*,int ,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,int ,struct stat*,int *) ;

int
FUNC_3(struct thread *VAR_1, struct freebsd32_fstatat_args *VAR_2)
{
 struct stat VAR_3;
 struct stat32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2->flag, VAR_2->fd, VAR_2->path, VAR_0,
     &VAR_3, ((void*)0));
 if (VAR_5)
  return (VAR_5);
 FUNC_0(&VAR_3, &VAR_4);
 VAR_5 = FUNC_1(&VAR_4, VAR_2->buf, sizeof(VAR_4));
 return (VAR_5);
}
