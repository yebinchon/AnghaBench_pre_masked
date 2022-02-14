
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int p_LowQmPortal; } ;
typedef TYPE_1__ t_QmPortal ;
struct qm_eqcr_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct qm_eqcr_entry* FUNC_3 (int ) ;

__attribute__((used)) static inline struct qm_eqcr_entry *FUNC_4(t_QmPortal *VAR_1)
{
    struct qm_eqcr_entry *VAR_2;
    uint8_t VAR_3;

    VAR_3 = FUNC_2(VAR_1->p_LowQmPortal);
    if (VAR_3 == VAR_0)
        FUNC_0(VAR_1->p_LowQmPortal);
    else if (VAR_3 < VAR_0)
            FUNC_1(VAR_1->p_LowQmPortal);
    VAR_2 = FUNC_3(VAR_1->p_LowQmPortal);

    return VAR_2;
}
