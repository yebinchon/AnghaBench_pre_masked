
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {struct seltd* td_sel; } ;
struct seltd {TYPE_1__* st_free2; TYPE_2__* st_free1; } ;
struct TYPE_4__ {void* sf_cookie; struct seltd* sf_td; } ;
struct TYPE_3__ {void* sf_cookie; struct seltd* sf_td; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_3, void *VAR_4)
{
 struct seltd *VAR_5;

 VAR_5 = VAR_3->td_sel;
 if (VAR_5->st_free1 == ((void*)0))
  VAR_5->st_free1 = FUNC_0(VAR_2, VAR_0|VAR_1);
 VAR_5->st_free1->sf_td = VAR_5;
 VAR_5->st_free1->sf_cookie = VAR_4;
 if (VAR_5->st_free2 == ((void*)0))
  VAR_5->st_free2 = FUNC_0(VAR_2, VAR_0|VAR_1);
 VAR_5->st_free2->sf_td = VAR_5;
 VAR_5->st_free2->sf_cookie = VAR_4;
}
