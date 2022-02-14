
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct input {int cmpl_ring; int target_id; int resp_addr; int req_type; } ;
struct TYPE_2__ {int idi_paddr; } ;
struct bnxt_softc {TYPE_1__ hwrm_cmd_resp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bnxt_softc *VAR_0, void *VAR_1,
    uint16_t VAR_2)
{
 struct input *VAR_3 = VAR_1;

 VAR_3->req_type = FUNC_0(VAR_2);
 VAR_3->cmpl_ring = 0xffff;
 VAR_3->target_id = 0xffff;
 VAR_3->resp_addr = FUNC_1(VAR_0->hwrm_cmd_resp.idi_paddr);
}
