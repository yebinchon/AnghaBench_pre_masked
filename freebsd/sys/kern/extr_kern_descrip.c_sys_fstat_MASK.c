
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ub ;
struct thread {int dummy; } ;
struct stat {int dummy; } ;
struct fstat_args {int sb; int fd; } ;


 int FUNC_0 (struct stat*,int ,int) ;
 int FUNC_1 (struct thread*,int ,struct stat*) ;

int
FUNC_2(struct thread *VAR_0, struct fstat_args *VAR_1)
{
 struct stat VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->fd, &VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(&VAR_2, VAR_1->sb, sizeof(VAR_2));
 return (VAR_3);
}
