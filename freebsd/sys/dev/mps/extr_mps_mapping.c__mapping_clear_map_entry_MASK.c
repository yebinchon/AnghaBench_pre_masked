
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dev_mapping_table {int id; scalar_t__ TLR_bits; scalar_t__ init_complete; scalar_t__ missing_count; scalar_t__ dev_handle; int dpm_entry_num; scalar_t__ phy_bits; scalar_t__ device_info; scalar_t__ physical_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct dev_mapping_table *VAR_2)
{
 VAR_2->physical_id = 0;
 VAR_2->device_info = 0;
 VAR_2->phy_bits = 0;
 VAR_2->dpm_entry_num = VAR_1;
 VAR_2->dev_handle = 0;
 VAR_2->id = -1;
 VAR_2->missing_count = 0;
 VAR_2->init_complete = 0;
 VAR_2->TLR_bits = (u8)VAR_0;
}
