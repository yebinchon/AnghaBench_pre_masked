
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ena_admin_host_info {int bdf; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ena_admin_host_info *VAR_1, uint16_t VAR_2)
{
 VAR_1->bdf |= VAR_2 & VAR_0;
}
