
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ub32 ;
struct thread {int dummy; } ;
struct stat32 {int dummy; } ;
struct stat {int dummy; } ;
struct freebsd32_fstat_args {int ub; int fd; } ;


 int FUNC_0 (struct stat*,struct stat32*) ;
 int FUNC_1 (struct stat32*,int ,int) ;
 int FUNC_2 (struct thread*,int ,struct stat*) ;

int
FUNC_3(struct thread *VAR_0, struct freebsd32_fstat_args *VAR_1)
{
 struct stat VAR_2;
 struct stat32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1->fd, &VAR_2);
 if (VAR_4)
  return (VAR_4);
 FUNC_0(&VAR_2, &VAR_3);
 VAR_4 = FUNC_1(&VAR_3, VAR_1->ub, sizeof(VAR_3));
 return (VAR_4);
}
