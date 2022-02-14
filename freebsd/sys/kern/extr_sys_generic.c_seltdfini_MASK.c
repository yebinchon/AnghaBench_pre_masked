
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct seltd* td_sel; } ;
struct seltd {int st_mtx; int st_wait; scalar_t__ st_free2; scalar_t__ st_free1; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct seltd*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__) ;

void
FUNC_4(struct thread *VAR_2)
{
 struct seltd *VAR_3;

 VAR_3 = VAR_2->td_sel;
 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3->st_free1)
  FUNC_3(VAR_1, VAR_3->st_free1);
 if (VAR_3->st_free2)
  FUNC_3(VAR_1, VAR_3->st_free2);
 VAR_2->td_sel = ((void*)0);
 FUNC_0(&VAR_3->st_wait);
 FUNC_2(&VAR_3->st_mtx);
 FUNC_1(VAR_3, VAR_0);
}
