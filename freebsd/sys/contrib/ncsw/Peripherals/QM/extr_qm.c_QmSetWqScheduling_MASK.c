
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* p_QmRegs; } ;
typedef TYPE_2__ t_Qm ;
typedef size_t e_QmWqClass ;
struct TYPE_5__ {int * wq_cs_cfg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline__ void FUNC_2(t_Qm *VAR_0,
                                         e_QmWqClass VAR_1,
                                         uint8_t VAR_2,
                                         uint8_t VAR_3,
                                         uint8_t VAR_4,
                                         uint8_t VAR_5,
                                         uint8_t VAR_6,
                                         uint8_t VAR_7,
                                         uint8_t VAR_8)
{
    FUNC_0(VAR_0);

    FUNC_1(VAR_0->p_QmRegs->wq_cs_cfg[VAR_1],
                 (uint32_t)(((VAR_2 & 0xff) << 24) |
                 ((VAR_3 & 0x7) << 20) |
                 ((VAR_4 & 0x7) << 16) |
                 ((VAR_5 & 0x7) << 12) |
                 ((VAR_6 & 0x7) << 8) |
                 ((VAR_7 & 0x7) << 4) |
                 (VAR_8 & 0x7)));
}
