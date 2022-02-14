
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct getdirentries_args {int * basep; int count; int buf; int fd; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int *,int *,int ) ;

int
FUNC_2(struct thread *VAR_1, struct getdirentries_args *VAR_2)
{
 off_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2->fd, VAR_2->buf, VAR_2->count, &VAR_3,
     ((void*)0), VAR_0);
 if (VAR_4 != 0)
  return (VAR_4);
 if (VAR_2->basep != ((void*)0))
  VAR_4 = FUNC_0(&VAR_3, VAR_2->basep, sizeof(off_t));
 return (VAR_4);
}
