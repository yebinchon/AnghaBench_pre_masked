
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int * fd_map; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (struct filedesc*,int) ;

__attribute__((used)) static void
FUNC_4(struct filedesc *VAR_0, int VAR_1)
{

 FUNC_0(!FUNC_3(VAR_0, VAR_1), ("fd=%d is already used", VAR_1));

 VAR_0->fd_map[FUNC_2(VAR_1)] |= FUNC_1(VAR_1);
}
