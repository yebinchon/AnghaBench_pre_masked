
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void ub_stats_info ;
typedef void ub_shm_stat_info ;
struct shm_main_info {scalar_t__ key; scalar_t__ id_ctl; scalar_t__ id_arr; void* ptr_ctl; void* ptr_arr; } ;
struct daemon {int num; struct shm_main_info* shm_info; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ stat_interval; scalar_t__ shm_key; int shm_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int VAR_3 ;
 int FUNC_1 (struct shm_main_info*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*,int ,size_t) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int ) ;
 int FUNC_6 (scalar_t__,int ,int *) ;
 void* FUNC_7 (scalar_t__,size_t,int) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct daemon* VAR_4)
{
 (void)VAR_4;

 return 1;
}
