
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rv ;
typedef int au_etype ;
struct TYPE_5__ {int au_signal; int au_errno; int au_etype; } ;
typedef TYPE_1__ amq_sync_umnt ;
struct TYPE_6__ {int* am_fd; } ;
typedef TYPE_2__ am_node ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int,TYPE_1__*,int) ;

void
FUNC_3(am_node *VAR_1, au_etype VAR_2, int VAR_3, int VAR_4)
{
  amq_sync_umnt VAR_5;
  int VAR_6;

  if (VAR_1->am_fd[1] >= 0) {
    VAR_5.au_etype = VAR_2;
    VAR_5.au_signal = VAR_4;
    VAR_5.au_errno = VAR_3;

    VAR_6 = FUNC_2(VAR_1->am_fd[1], &VAR_5, sizeof(VAR_5));

    if (VAR_6 < sizeof(VAR_5))
      FUNC_1(VAR_0, "notify_child: write returned %d instead of %d.",
    VAR_6, (int) sizeof(VAR_5));
    FUNC_0(VAR_1->am_fd[1]);
    VAR_1->am_fd[1] = -1;
  }
}
