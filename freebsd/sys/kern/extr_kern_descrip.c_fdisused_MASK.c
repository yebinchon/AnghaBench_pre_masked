
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int fd_nfiles; int* fd_map; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct filedesc *VAR_0, int VAR_1)
{

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->fd_nfiles,
     ("file descriptor %d out of range (0, %d)", VAR_1, VAR_0->fd_nfiles));

 return ((VAR_0->fd_map[FUNC_2(VAR_1)] & FUNC_1(VAR_1)) != 0);
}
