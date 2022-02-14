
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qid; int scheduler; int local_flags; } ;
struct pf_altq_node {int qstats; TYPE_1__ altq; } ;







 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(int VAR_1, const struct pf_altq_node *VAR_2)
{
 if (VAR_2->altq.qid == 0 && VAR_2->altq.scheduler != 131)
  return;





 switch (VAR_2->altq.scheduler) {
 case 132:
  FUNC_0(VAR_2->qstats);
  break;
 case 128:
  FUNC_4(VAR_2->qstats);
  break;
 case 129:
  FUNC_3(VAR_2->qstats);
  break;
 case 130:
  FUNC_2(VAR_2->qstats);
  break;
 case 131:
  FUNC_1(VAR_2->qstats);
  break;
 }
}
