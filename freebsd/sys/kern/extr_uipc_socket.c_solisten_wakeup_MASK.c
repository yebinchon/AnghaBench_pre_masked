
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct socket {int so_state; int * so_sigio; int sol_comp; TYPE_1__ so_rdsel; int sol_upcallarg; int (* sol_upcall ) (struct socket*,int ,int ) ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct socket*) ;
 int VAR_3 ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct socket*,int ,int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct socket *VAR_4)
{

 if (VAR_4->sol_upcall != ((void*)0))
  (void )VAR_4->sol_upcall(VAR_4, VAR_4->sol_upcallarg, VAR_0);
 else {
  FUNC_3(&VAR_4->so_rdsel, VAR_1);
  FUNC_0(&VAR_4->so_rdsel.si_note, 0);
 }
 FUNC_1(VAR_4);
 FUNC_5(&VAR_4->sol_comp);
 if ((VAR_4->so_state & VAR_3) && VAR_4->so_sigio != ((void*)0))
  FUNC_2(&VAR_4->so_sigio, VAR_2, 0);
}
