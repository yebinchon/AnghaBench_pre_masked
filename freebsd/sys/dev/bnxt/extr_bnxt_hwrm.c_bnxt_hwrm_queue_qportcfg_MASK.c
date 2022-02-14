
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct hwrm_queue_qportcfg_output {scalar_t__ max_configurable_queues; int queue_id0; } ;
struct hwrm_queue_qportcfg_input {int member_0; } ;
struct TYPE_3__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {scalar_t__ max_tc; TYPE_2__* q_info; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;
struct TYPE_4__ {int profile; int id; } ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_queue_qportcfg_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_queue_qportcfg_input*,int ) ;

int
FUNC_4(struct bnxt_softc *VAR_3)
{
 struct hwrm_queue_qportcfg_input VAR_4 = {0};
 struct hwrm_queue_qportcfg_output *VAR_5 =
     (void *)VAR_3->hwrm_cmd_resp.idi_vaddr;

 int VAR_6 = 0;
 uint8_t *VAR_7;

 FUNC_3(VAR_3, &VAR_4, VAR_2);

 FUNC_0(VAR_3);
 VAR_6 = FUNC_2(VAR_3, &VAR_4, sizeof(VAR_4));
 if (VAR_6)
  goto qportcfg_exit;

 if (!VAR_5->max_configurable_queues) {
  VAR_6 = -VAR_1;
  goto qportcfg_exit;
 }
 VAR_3->max_tc = VAR_5->max_configurable_queues;
 if (VAR_3->max_tc > VAR_0)
  VAR_3->max_tc = VAR_0;

 VAR_7 = &VAR_5->queue_id0;
 for (int VAR_8 = 0; VAR_8 < VAR_3->max_tc; VAR_8++) {
  VAR_3->q_info[VAR_8].id = *VAR_7++;
  VAR_3->q_info[VAR_8].profile = *VAR_7++;
 }

qportcfg_exit:
 FUNC_1(VAR_3);
 return (VAR_6);
}
