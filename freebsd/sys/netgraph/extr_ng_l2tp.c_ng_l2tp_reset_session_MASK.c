
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ng_l2tp_session_stats {int dummy; } ;
typedef TYPE_2__* hookpriv_p ;
typedef int hook_p ;
struct TYPE_4__ {scalar_t__ enable_dseq; scalar_t__ control_dseq; } ;
struct TYPE_5__ {scalar_t__ ns; scalar_t__ nr; int stats; TYPE_1__ conf; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(hook_p VAR_0, void *VAR_1)
{
 const hookpriv_p VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 != ((void*)0)) {
  VAR_2->conf.control_dseq = 0;
  VAR_2->conf.enable_dseq = 0;
  FUNC_1(&VAR_2->stats, sizeof(struct ng_l2tp_session_stats));
  VAR_2->nr = 0;
  VAR_2->ns = 0;
 }
 return (-1);
}
