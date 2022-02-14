
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_log_temp_stats {void* est_offset; void* min_oper_temp; void* max_oper_temp; void* min_temp; void* max_temp; void* overtemp_flag_life; void* overtemp_flag_last; void* current; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline
void FUNC_1(struct intel_log_temp_stats *VAR_0)
{

 VAR_0->current = FUNC_0(VAR_0->current);
 VAR_0->overtemp_flag_last = FUNC_0(VAR_0->overtemp_flag_last);
 VAR_0->overtemp_flag_life = FUNC_0(VAR_0->overtemp_flag_life);
 VAR_0->max_temp = FUNC_0(VAR_0->max_temp);
 VAR_0->min_temp = FUNC_0(VAR_0->min_temp);

 VAR_0->max_oper_temp = FUNC_0(VAR_0->max_oper_temp);
 VAR_0->min_oper_temp = FUNC_0(VAR_0->min_oper_temp);
 VAR_0->est_offset = FUNC_0(VAR_0->est_offset);
}
