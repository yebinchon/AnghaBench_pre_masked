
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct filedesc* p_fd; } ;
struct filedesc {int fd_holdcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct filedesc *
FUNC_2(struct proc *VAR_1)
{
 struct filedesc *VAR_2;

 FUNC_0(VAR_1, VAR_0);
 VAR_2 = VAR_1->p_fd;
 if (VAR_2 != ((void*)0))
  FUNC_1(&VAR_2->fd_holdcnt);
 return (VAR_2);
}
