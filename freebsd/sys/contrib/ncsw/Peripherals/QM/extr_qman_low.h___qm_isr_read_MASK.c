
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qm_portal {int addr; } ;
typedef enum qm_isr_reg { ____Placeholder_qm_isr_reg } qm_isr_reg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static __inline__ uint32_t FUNC_1(struct qm_portal *VAR_1, enum qm_isr_reg VAR_2)
{
    return FUNC_0(&VAR_1->addr, VAR_0 + (VAR_2 << 2));
}
