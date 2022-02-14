
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_mknodat_args {int dev; int mode; int path; int fd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_2(struct thread *VAR_2, struct freebsd32_mknodat_args *VAR_3)
{

 return (FUNC_1(VAR_2, VAR_3->fd, VAR_3->path, VAR_0,
     VAR_3->mode, FUNC_0(VAR_1, VAR_3->dev)));
}
