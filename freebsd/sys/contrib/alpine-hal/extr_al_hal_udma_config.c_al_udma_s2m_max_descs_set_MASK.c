
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int desc_pref_cfg_3; } ;
struct TYPE_5__ {TYPE_1__ s2m_rd; } ;
struct TYPE_6__ {TYPE_2__ s2m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

int FUNC_2(struct al_udma *VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7 = VAR_6;
 uint32_t VAR_8 = 4;
 FUNC_0(VAR_6 <= VAR_0);
 FUNC_0(VAR_6 > 0);



 if (VAR_7 >= 8)
  VAR_8 = 8;
 else


  VAR_7 = 4;

 FUNC_1(&VAR_5->udma_regs->s2m.s2m_rd.desc_pref_cfg_3,
         VAR_3 |
         VAR_1,
         (VAR_7 << VAR_4) |
         (VAR_8 << VAR_2));

 return 0;
}
