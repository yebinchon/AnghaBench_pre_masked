
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filedesc {int * fd_rdir; int * fd_cdir; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 TYPE_1__* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (void*) ;

void
FUNC_3(void)
{
 struct filedesc *VAR_2;

 VAR_2 = VAR_0->p_fd;
 FUNC_0(VAR_2);
 if (VAR_2->fd_cdir == ((void*)0)) {
  VAR_2->fd_cdir = VAR_1;
  FUNC_2(VAR_1);
 }
 if (VAR_2->fd_rdir == ((void*)0)) {
  VAR_2->fd_rdir = VAR_1;
  FUNC_2(VAR_1);
 }
 FUNC_1(VAR_2);
}
