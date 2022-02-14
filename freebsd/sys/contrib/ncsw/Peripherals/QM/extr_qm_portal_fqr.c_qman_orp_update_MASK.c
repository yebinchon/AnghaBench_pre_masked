
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int p_LowQmPortal; } ;
typedef TYPE_1__ t_QmPortal ;
typedef int t_Error ;
struct qm_eqcr_entry {int orp; int seqnum; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;
 struct qm_eqcr_entry* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static t_Error FUNC_5(t_QmPortal *VAR_5,
                               uint32_t VAR_6,
                               uint16_t VAR_7,
                               uint32_t VAR_8)
{
    struct qm_eqcr_entry *VAR_9;

    FUNC_1(VAR_5);
    VAR_9 = FUNC_4(VAR_5);
    if (!VAR_9)
    {
        FUNC_2(VAR_5);
        return FUNC_0(VAR_0);
    }

    if (VAR_8 & VAR_2)
        VAR_7 |= VAR_3;
    else

        VAR_7 &= ~VAR_3;
    VAR_9->seqnum = VAR_7;
    VAR_9->orp = VAR_6;
FUNC_3(VAR_5->p_LowQmPortal, (uint8_t)VAR_4);

    FUNC_2(VAR_5);
    return VAR_1;
}
