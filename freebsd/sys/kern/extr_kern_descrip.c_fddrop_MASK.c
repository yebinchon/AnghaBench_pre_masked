
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int fd_holdcnt; } ;


 int FUNC_0 (struct filedesc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int ,struct filedesc*) ;

__attribute__((used)) static void
FUNC_3(struct filedesc *VAR_1)
{

 if (VAR_1->fd_holdcnt > 1) {
  if (FUNC_1(&VAR_1->fd_holdcnt) == 0)
   return;
 }

 FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_1);
}
