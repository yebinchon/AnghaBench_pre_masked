
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedescent {int fde_seqc; int * fde_file; } ;
struct filedesc {struct filedescent* fd_ofiles; } ;


 int FUNC_0 (struct filedescent*) ;
 int FUNC_1 (struct filedesc*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct filedesc *VAR_0, int VAR_1)
{
 struct filedescent *VAR_2;

 VAR_2 = &VAR_0->fd_ofiles[VAR_1];



 VAR_2->fde_file = ((void*)0);



 FUNC_0(VAR_2);
 FUNC_1(VAR_0, VAR_1);
}
