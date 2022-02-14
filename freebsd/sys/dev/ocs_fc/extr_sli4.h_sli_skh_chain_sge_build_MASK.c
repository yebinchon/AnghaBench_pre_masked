
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef uintptr_t uint32_t ;
struct TYPE_10__ {uintptr_t chain_sge_initial_value_lo; uintptr_t sgl_index_field_mask; uintptr_t sgl_index_field_offset; uintptr_t frag_num_field_mask; uintptr_t frag_num_field_offset; scalar_t__ chain_sge_initial_value_hi; } ;
struct TYPE_8__ {TYPE_3__ sgl_chaining_params; } ;
struct TYPE_9__ {TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;
typedef TYPE_3__ sli4_sgl_chaining_params_t ;
struct TYPE_11__ {uintptr_t buffer_address_high; uintptr_t buffer_address_low; int sge_type; } ;
typedef TYPE_4__ sli4_sge_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(sli4_t *VAR_1, sli4_sge_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 sli4_sgl_chaining_params_t *VAR_6 = &VAR_1->config.sgl_chaining_params;


 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->sge_type = VAR_0;
 VAR_2->buffer_address_high = (uint32_t)VAR_6->chain_sge_initial_value_hi;
 VAR_2->buffer_address_low =
  (uint32_t)((VAR_6->chain_sge_initial_value_lo |
       (((uintptr_t)(VAR_3 & VAR_6->sgl_index_field_mask)) <<
        VAR_6->sgl_index_field_offset) |
       (((uintptr_t)(VAR_4 & VAR_6->frag_num_field_mask)) <<
        VAR_6->frag_num_field_offset) |
       VAR_5) >> 3);
}
