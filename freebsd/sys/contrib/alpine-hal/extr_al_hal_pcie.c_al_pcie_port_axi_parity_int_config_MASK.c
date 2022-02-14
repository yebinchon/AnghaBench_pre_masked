
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int * global; } ;
struct TYPE_5__ {int en_axi; } ;
struct TYPE_8__ {TYPE_3__* int_grp_a; TYPE_2__ ctrl; TYPE_1__ parity; } ;
struct al_pcie_regs {TYPE_4__ axi; } ;
struct al_pcie_port {scalar_t__ rev_id; struct al_pcie_regs* regs; } ;
typedef scalar_t__ al_bool ;
struct TYPE_7__ {int mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void
FUNC_2(
 struct al_pcie_port *VAR_16,
 al_bool VAR_17)
{
 struct al_pcie_regs *VAR_18 = VAR_16->regs;
 uint32_t VAR_19 = 0xffffffff;
 if (VAR_16->rev_id >= VAR_0)
  VAR_19 &= ~VAR_7;

 FUNC_0(VAR_18->axi.parity.en_axi,
         (VAR_17 == VAR_1) ? VAR_19 : 0x0);

 if (VAR_16->rev_id == VAR_0) {
  FUNC_1(VAR_18->axi.ctrl.global,
   VAR_12 |
   VAR_14 |
   VAR_13 |
   VAR_15,
   (VAR_17 == VAR_1) ?
   VAR_12 |
   VAR_14 |
   VAR_13 |
   VAR_15 :
   VAR_13);
 } else {
  FUNC_1(VAR_18->axi.ctrl.global,
   VAR_8 |
   VAR_10 |
   VAR_9 |
   VAR_11,
   (VAR_17 == VAR_1) ?
   VAR_8 |
   VAR_10 |
   VAR_9 |
   VAR_11 :
   VAR_9);
 }

 FUNC_1(&VAR_18->axi.int_grp_a->mask,
  VAR_3 |
  VAR_4 |
  VAR_5 |
  VAR_6 |
  VAR_2,
  (VAR_17 != VAR_1) ?
  (VAR_3 |
  VAR_4 |
  VAR_5 |
  VAR_6 |
  VAR_2) : 0);
}
