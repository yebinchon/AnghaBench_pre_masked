
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_llq_configurations {int llq_ring_entry_size_value; int llq_num_decs_before_header; int llq_stride_ctrl; int llq_ring_entry_size; int llq_header_location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline
void FUNC_0(struct ena_llq_configurations *VAR_4)
{
 VAR_4->llq_header_location = VAR_0;
 VAR_4->llq_ring_entry_size = VAR_1;
 VAR_4->llq_stride_ctrl = VAR_3;
 VAR_4->llq_num_decs_before_header =
     VAR_2;
 VAR_4->llq_ring_entry_size_value = 128;
}
