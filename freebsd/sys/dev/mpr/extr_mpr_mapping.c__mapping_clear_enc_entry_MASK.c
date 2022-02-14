
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enc_mapping_table {scalar_t__ init_complete; scalar_t__ skip_search; scalar_t__ removal_flag; scalar_t__ missing_count; scalar_t__ start_slot; scalar_t__ num_slots; scalar_t__ enc_handle; int dpm_entry_num; scalar_t__ phy_bits; int start_index; scalar_t__ enclosure_id; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct enc_mapping_table *VAR_2)
{
 VAR_2->enclosure_id = 0;
 VAR_2->start_index = VAR_1;
 VAR_2->phy_bits = 0;
 VAR_2->dpm_entry_num = VAR_0;
 VAR_2->enc_handle = 0;
 VAR_2->num_slots = 0;
 VAR_2->start_slot = 0;
 VAR_2->missing_count = 0;
 VAR_2->removal_flag = 0;
 VAR_2->skip_search = 0;
 VAR_2->init_complete = 0;
}
