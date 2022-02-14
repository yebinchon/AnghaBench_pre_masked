
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int qla_sp_log_entry_t ;
struct TYPE_4__ {scalar_t__ sp_log_num_entries; scalar_t__ sp_log_index; int * sp_log; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int,int ,int ) ;

void
FUNC_2(qla_host_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = (sizeof(qla_sp_log_entry_t)) * VAR_2;

 VAR_3->hw.sp_log = FUNC_1(VAR_4, VAR_1, VAR_0);

 if (VAR_3->hw.sp_log != ((void*)0))
  FUNC_0(VAR_3->hw.sp_log, VAR_4);

 VAR_3->hw.sp_log_index = 0;
 VAR_3->hw.sp_log_num_entries = 0;

 return;
}
