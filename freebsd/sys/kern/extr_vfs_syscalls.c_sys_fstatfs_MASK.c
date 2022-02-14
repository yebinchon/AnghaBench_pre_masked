
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct statfs {int dummy; } ;
struct fstatfs_args {int buf; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct statfs*,int ,int) ;
 int FUNC_1 (struct statfs*,int ) ;
 int FUNC_2 (struct thread*,int ,struct statfs*) ;
 struct statfs* FUNC_3 (int,int ,int ) ;

int
FUNC_4(struct thread *VAR_2, struct fstatfs_args *VAR_3)
{
 struct statfs *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(struct statfs), VAR_0, VAR_1);
 VAR_5 = FUNC_2(VAR_2, VAR_3->fd, VAR_4);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_4, VAR_3->buf, sizeof(struct statfs));
 FUNC_1(VAR_4, VAR_0);
 return (VAR_5);
}
