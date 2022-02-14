
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linkat_args {int flag; int path2; int path1; int fd2; int fd1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ,int) ;

int
FUNC_1(struct thread *VAR_7, struct linkat_args *VAR_8)
{
 int VAR_9;

 VAR_9 = VAR_8->flag;
 if ((VAR_9 & ~(VAR_1 | VAR_0)) != 0)
  return (VAR_3);

 return (FUNC_0(VAR_7, VAR_8->fd1, VAR_8->fd2, VAR_8->path1, VAR_8->path2,
     VAR_6, ((VAR_9 & VAR_1) != 0 ? VAR_4 :
     VAR_5) | ((VAR_9 & VAR_0) != 0 ? VAR_2 : 0)));
}
