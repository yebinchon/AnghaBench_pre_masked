
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ pf_srn; } ;
struct octeon_device {scalar_t__ msix_on; TYPE_1__ sriov_info; struct lio_instr_queue** instr_queue; } ;
struct lio_instr_queue {int base_addr_dma; scalar_t__ reset_instr_cnt; int inst_cnt_reg; int doorbell_reg; int max_count; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct octeon_device*,char*,size_t,int ,int ) ;
 int FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (struct octeon_device*,int ,int ) ;
 int FUNC_7 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct octeon_device *VAR_1, uint32_t VAR_2)
{
 struct lio_instr_queue *VAR_3 = VAR_1->instr_queue[VAR_2];
 uint64_t VAR_4;

 VAR_2 += VAR_1->sriov_info.pf_srn;


 FUNC_7(VAR_1, FUNC_0(VAR_2),
   VAR_3->base_addr_dma);
 FUNC_6(VAR_1, FUNC_3(VAR_2), VAR_3->max_count);





 VAR_3->doorbell_reg = FUNC_1(VAR_2);
 VAR_3->inst_cnt_reg = FUNC_2(VAR_2);
 FUNC_4(VAR_1, "InstQ[%d]:dbell reg @ 0x%x instcnt_reg @ 0x%x\n",
      VAR_2, VAR_3->doorbell_reg, VAR_3->inst_cnt_reg);





 VAR_4 = FUNC_5(VAR_1, VAR_3->inst_cnt_reg);

 if (VAR_1->msix_on) {

  FUNC_7(VAR_1, VAR_3->inst_cnt_reg,
    (VAR_4 | VAR_0));
 } else {




  FUNC_7(VAR_1, VAR_3->inst_cnt_reg, VAR_4);
 }

 VAR_3->reset_instr_cnt = 0;
}
