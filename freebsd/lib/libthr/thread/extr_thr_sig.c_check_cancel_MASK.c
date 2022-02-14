
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uc_sigmask; } ;
typedef TYPE_1__ ucontext_t ;
struct pthread {int unblock_sigcancel; scalar_t__ cancel_async; int tid; scalar_t__ in_sigsuspend; scalar_t__ cancel_point; scalar_t__ no_cancel; int cancel_enable; int cancel_pending; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct pthread*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct pthread *VAR_2, ucontext_t *VAR_3)
{

 if (FUNC_1(!VAR_2->cancel_pending ||
     !VAR_2->cancel_enable || VAR_2->no_cancel))
  return;
 if (VAR_2->cancel_point) {
  if (VAR_2->in_sigsuspend && VAR_3) {
   FUNC_0(VAR_3->uc_sigmask, VAR_1);
   VAR_2->unblock_sigcancel = 1;
   FUNC_3(VAR_2, VAR_1);
  } else
   FUNC_4(VAR_2->tid);
 } else if (VAR_2->cancel_async) {




  FUNC_2(VAR_0,
      VAR_3? &VAR_3->uc_sigmask : ((void*)0));
 }
}
