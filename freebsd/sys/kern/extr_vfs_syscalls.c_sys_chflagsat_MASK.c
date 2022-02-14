
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct chflagsat_args {int atflag; int flags; int path; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int) ;

int
FUNC_1(struct thread *VAR_4, struct chflagsat_args *VAR_5)
{

 if ((VAR_5->atflag & ~(VAR_1 | VAR_0)) != 0)
  return (VAR_2);

 return (FUNC_0(VAR_4, VAR_5->fd, VAR_5->path, VAR_3,
     VAR_5->flags, VAR_5->atflag));
}
