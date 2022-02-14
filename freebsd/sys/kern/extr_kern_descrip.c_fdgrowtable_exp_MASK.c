
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int fd_nfiles; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*,int) ;

__attribute__((used)) static void
FUNC_2(struct filedesc *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = VAR_0->fd_nfiles * 2;
 if (VAR_2 < VAR_1)
  VAR_2 = VAR_1;
 FUNC_1(VAR_0, VAR_2);
}
