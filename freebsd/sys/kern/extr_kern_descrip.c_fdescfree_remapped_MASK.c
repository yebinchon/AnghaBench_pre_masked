
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int * fd_jdir; int * fd_rdir; int * fd_cdir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct filedesc*,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct filedesc *VAR_1)
{

 if (VAR_1->fd_cdir != ((void*)0))
  FUNC_1(VAR_1->fd_cdir);
 if (VAR_1->fd_rdir != ((void*)0))
  FUNC_1(VAR_1->fd_rdir);
 if (VAR_1->fd_jdir != ((void*)0))
  FUNC_1(VAR_1->fd_jdir);

 FUNC_0(VAR_0, VAR_1, 0);
}
