
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ena_admin_aq_common_desc {int command_id; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ena_admin_aq_common_desc *VAR_1, uint16_t VAR_2)
{
 VAR_1->command_id |= VAR_2 & VAR_0;
}
