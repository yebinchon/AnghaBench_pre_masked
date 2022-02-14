
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ccb_hdr {size_t target_id; scalar_t__ target_lun; } ;
union ccb {struct ccb_hdr ccb_h; } ;
typedef TYPE_1__* tcb_p ;
typedef TYPE_2__* hcb_p ;
struct TYPE_6__ {size_t myaddr; int istat_sem; TYPE_1__* target; } ;
struct TYPE_5__ {int to_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,union ccb*,int ) ;

__attribute__((used)) static void FUNC_3(hcb_p VAR_8, union ccb *VAR_9)
{
 tcb_p VAR_10;
 struct ccb_hdr *VAR_11 = &VAR_9->ccb_h;

 FUNC_1(VAR_2);

 if (VAR_11->target_id == VAR_8->myaddr ||
     VAR_11->target_id >= VAR_6 ||
     VAR_11->target_lun >= VAR_5) {
  FUNC_2(VAR_8, VAR_9, VAR_0);
  return;
 }

 VAR_10 = &VAR_8->target[VAR_11->target_id];

 VAR_10->to_reset = 1;
 FUNC_2(VAR_8, VAR_9, VAR_1);

 VAR_8->istat_sem = VAR_3;
 FUNC_0 (VAR_7, VAR_4|VAR_3);
}
