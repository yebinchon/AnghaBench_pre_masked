
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfg_tgtid_0; } ;
struct TYPE_4__ {TYPE_1__ tgtid; } ;
struct unit_regs {TYPE_2__ gen; } ;
struct al_udma_gen_tgtid_msix_conf {scalar_t__ sel; scalar_t__ access_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;

void FUNC_1(
 struct unit_regs *VAR_2,
 struct al_udma_gen_tgtid_msix_conf *VAR_3)
{
 FUNC_0(
  &VAR_2->gen.tgtid.cfg_tgtid_0,
  VAR_0 |
  VAR_1,
  (VAR_3->access_en ? VAR_0 : 0) |
  (VAR_3->sel ? VAR_1 : 0));
}
