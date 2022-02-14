
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ena_admin_aq_common_desc {int command_id; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint16_t FUNC_0(const struct ena_admin_aq_common_desc *VAR_1)
{
 return VAR_1->command_id & VAR_0;
}
