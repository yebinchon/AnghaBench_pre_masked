
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_7__ {void** params; int usec_ts; void* num_params; void* fmtstr_idx; } ;
typedef TYPE_2__ qla_sp_log_entry_t ;
struct TYPE_6__ {size_t sp_log_index; int sp_log_num_entries; scalar_t__ sp_log_stop; TYPE_2__* sp_log; } ;
struct TYPE_8__ {int sp_log_lock; TYPE_1__ hw; } ;
typedef TYPE_3__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void
FUNC_4(qla_host_t *VAR_1, uint16_t VAR_2, uint16_t VAR_3,
 uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7,
 uint32_t VAR_8)
{
 qla_sp_log_entry_t *VAR_9, *VAR_10;

 if (((VAR_10 = VAR_1->hw.sp_log) == ((void*)0)) || VAR_1->hw.sp_log_stop)
  return;

 FUNC_1(&VAR_1->sp_log_lock);

 VAR_9 = &VAR_10[VAR_1->hw.sp_log_index];

 FUNC_0(VAR_9, sizeof (qla_sp_log_entry_t));

 VAR_9->fmtstr_idx = VAR_2;
 VAR_9->num_params = VAR_3;

 VAR_9->usec_ts = FUNC_3();

 VAR_9->params[0] = VAR_4;
 VAR_9->params[1] = VAR_5;
 VAR_9->params[2] = VAR_6;
 VAR_9->params[3] = VAR_7;
 VAR_9->params[4] = VAR_8;

 VAR_1->hw.sp_log_index = (VAR_1->hw.sp_log_index + 1) & (VAR_0 - 1);

 if (VAR_1->hw.sp_log_num_entries < VAR_0)
  VAR_1->hw.sp_log_num_entries++;

 FUNC_2(&VAR_1->sp_log_lock);

 return;
}
