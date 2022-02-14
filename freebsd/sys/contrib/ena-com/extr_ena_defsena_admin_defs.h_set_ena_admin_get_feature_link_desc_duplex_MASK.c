
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_admin_get_feature_link_desc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct ena_admin_get_feature_link_desc *VAR_2, uint32_t VAR_3)
{
 VAR_2->flags |= (VAR_3 << VAR_1) & VAR_0;
}
