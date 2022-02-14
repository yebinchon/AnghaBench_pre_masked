
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_udma_q {int size; int cdesc_phy_base; TYPE_2__* q_regs; int flags; int * cdesc_base_ptr; int desc_phy_base; } ;
struct TYPE_3__ {int crbp_high; int crbp_low; int drl; int drbp_high; int drbp_low; } ;
struct TYPE_4__ {TYPE_1__ rings; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct al_udma_q*) ;

__attribute__((used)) static int FUNC_5(struct al_udma_q *VAR_3)
{


 FUNC_2((FUNC_1(VAR_3->desc_phy_base) &
     ~VAR_2) == 0);
 FUNC_3(&VAR_3->q_regs->rings.drbp_low,
         FUNC_1(VAR_3->desc_phy_base));
 FUNC_3(&VAR_3->q_regs->rings.drbp_high,
         FUNC_0(VAR_3->desc_phy_base));

 FUNC_3(&VAR_3->q_regs->rings.drl, VAR_3->size);


 if (VAR_3->cdesc_base_ptr == ((void*)0)) {
  VAR_3->flags |= VAR_0;
 } else {


  FUNC_2((FUNC_1(VAR_3->cdesc_phy_base) &
      ~VAR_1) == 0);
  FUNC_3(&VAR_3->q_regs->rings.crbp_low,
          FUNC_1(VAR_3->cdesc_phy_base));
  FUNC_3(&VAR_3->q_regs->rings.crbp_high,
          FUNC_0(VAR_3->cdesc_phy_base));
 }
 FUNC_4(VAR_3);
 return 0;
}
