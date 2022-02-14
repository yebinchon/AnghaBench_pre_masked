
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ena_admin_host_info {int bdf; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct ena_admin_host_info *VAR_2, uint16_t VAR_3)
{
 VAR_2->bdf |= (VAR_3 << VAR_1) & VAR_0;
}
