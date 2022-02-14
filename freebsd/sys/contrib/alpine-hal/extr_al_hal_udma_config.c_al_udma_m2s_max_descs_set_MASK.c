
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int desc_pref_cfg_3; int desc_pref_cfg_2; } ;
struct TYPE_5__ {TYPE_1__ m2s_rd; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

int FUNC_2(struct al_udma *VAR_7, uint8_t VAR_8)
{
 uint32_t VAR_9 = VAR_8;
 uint32_t VAR_10 = 4;
 FUNC_0(VAR_8 <= VAR_0);
 FUNC_0(VAR_8 > 0);



 if (VAR_9 >= 8)
  VAR_10 = 8;
 else {


  VAR_9 = 4;
 }

 FUNC_1(&VAR_7->udma_regs->m2s.m2s_rd.desc_pref_cfg_2,
         VAR_1,
         VAR_8 << VAR_2);

 FUNC_1(&VAR_7->udma_regs->m2s.m2s_rd.desc_pref_cfg_3,
         VAR_5 |
         VAR_3,
         (VAR_9 << VAR_6) |
         (VAR_10 << VAR_4));

 return 0;
}
