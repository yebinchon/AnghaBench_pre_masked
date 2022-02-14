
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * idi_vaddr; } ;
struct bnxt_softc {TYPE_1__ hwrm_cmd_resp; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(struct bnxt_softc *VAR_0)
{
 if (VAR_0->hwrm_cmd_resp.idi_vaddr)
  FUNC_0(&VAR_0->hwrm_cmd_resp);
 VAR_0->hwrm_cmd_resp.idi_vaddr = ((void*)0);
 return;
}
