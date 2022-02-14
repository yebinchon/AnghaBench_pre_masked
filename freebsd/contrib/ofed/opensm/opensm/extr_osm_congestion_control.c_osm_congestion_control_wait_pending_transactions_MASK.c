
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int congestion_control; } ;
struct TYPE_5__ {TYPE_1__ opt; } ;
struct TYPE_6__ {unsigned int outstanding_mads; int outstanding_mads_done_event; } ;
struct osm_opensm {TYPE_2__ subn; TYPE_3__ cc; } ;
typedef TYPE_3__ osm_congestion_control_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;

int FUNC_1(struct osm_opensm *VAR_3)
{
 osm_congestion_control_t *VAR_4 = &VAR_3->cc;

 if (!VAR_3->subn.opt.congestion_control)
  return 0;

 while (1) {
  unsigned VAR_5 = VAR_4->outstanding_mads;
  if (!VAR_5 || VAR_2)
   break;
  FUNC_0(&VAR_4->outstanding_mads_done_event,
     VAR_0,
     VAR_1);
 }

 return VAR_2;
}
