
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct statfs {int dummy; } ;
struct linux_fstatfs_args {int buf; int fd; } ;
struct l_statfs {int dummy; } ;
typedef int linux_statfs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct statfs*,struct l_statfs*) ;
 int FUNC_1 (struct l_statfs*,int ,int) ;
 int FUNC_2 (struct statfs*,int ) ;
 int FUNC_3 (struct thread*,int ,struct statfs*) ;
 struct statfs* FUNC_4 (int,int ,int ) ;

int
FUNC_5(struct thread *VAR_2, struct linux_fstatfs_args *VAR_3)
{
 struct l_statfs VAR_4;
 struct statfs *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(struct statfs), VAR_0, VAR_1);
 VAR_6 = FUNC_3(VAR_2, VAR_3->fd, VAR_5);
 if (VAR_6 == 0)
  VAR_6 = FUNC_0(VAR_5, &VAR_4);
 FUNC_2(VAR_5, VAR_0);
 if (VAR_6 != 0)
  return (VAR_6);
 return (FUNC_1(&VAR_4, VAR_3->buf, sizeof(VAR_4)));
}
