
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct stat {int dummy; } ;
struct linux_newfstat_args {int buf; int fd; } ;


 int FUNC_0 (struct thread*,int ,struct stat*) ;
 int FUNC_1 (struct stat*,int ) ;
 int FUNC_2 (struct thread*,int ,struct stat*) ;

int
FUNC_3(struct thread *VAR_0, struct linux_newfstat_args *VAR_1)
{
 struct stat VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->fd, &VAR_2);
 FUNC_2(VAR_0, VAR_1->fd, &VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_1(&VAR_2, VAR_1->buf);

 return (VAR_3);
}
