
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ena_admin_aq_create_cq_cmd {int cq_caps_1; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct ena_admin_aq_create_cq_cmd *VAR_2, uint8_t VAR_3)
{
 VAR_2->cq_caps_1 |= (VAR_3 << VAR_1) & VAR_0;
}
