
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_9__ {TYPE_1__* p_sigacts; } ;
struct TYPE_8__ {int td_sigmask; } ;
struct TYPE_7__ {int ps_mtx; int ps_sigignore; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (TYPE_2__*,int ,int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(sigset_t *VAR_5)
{
 sigset_t VAR_6;
 int VAR_7;

 FUNC_3(VAR_6);

 FUNC_0(VAR_3);
 FUNC_6(&VAR_3->p_sigacts->ps_mtx);
 for (VAR_7 = 0 ; VAR_7 < FUNC_8(VAR_2); VAR_7++) {






  if (!FUNC_4(VAR_4->td_sigmask, VAR_2[VAR_7]) &&
      !FUNC_4(VAR_3->p_sigacts->ps_sigignore,
      VAR_2[VAR_7])) {
   FUNC_2(VAR_6, VAR_2[VAR_7]);
  }
 }
 FUNC_7(&VAR_3->p_sigacts->ps_mtx);
 FUNC_5(VAR_4, VAR_1, &VAR_6, VAR_5,
     VAR_0);
 FUNC_1(VAR_3);
}
