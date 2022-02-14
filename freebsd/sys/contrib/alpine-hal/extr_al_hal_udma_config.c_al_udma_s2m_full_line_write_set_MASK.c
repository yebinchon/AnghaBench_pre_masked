
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma {TYPE_3__* udma_regs; int name; } ;
typedef scalar_t__ al_bool ;
struct TYPE_4__ {int data_cfg_2; } ;
struct TYPE_5__ {TYPE_1__ s2m_wr; } ;
struct TYPE_6__ {TYPE_2__ s2m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(struct al_udma *VAR_2, al_bool VAR_3)
{
 uint32_t VAR_4 = 0;

 if (VAR_3 == VAR_0) {
  VAR_4 = VAR_1;
  FUNC_0("udma [%s]: full line write enabled\n", VAR_2->name);
 }

 FUNC_1(&VAR_2->udma_regs->s2m.s2m_wr.data_cfg_2,
   VAR_1,
   VAR_4);
 return 0;
}
