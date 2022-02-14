
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ena_admin_aq_create_sq_cmd {int sq_caps_2; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ena_admin_aq_create_sq_cmd *VAR_1, uint8_t VAR_2)
{
 VAR_1->sq_caps_2 |= VAR_2 & VAR_0;
}
