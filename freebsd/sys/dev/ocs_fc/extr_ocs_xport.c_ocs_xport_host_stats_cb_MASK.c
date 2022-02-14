
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int receive_frame_count; int transmit_frame_count; int receive_kbyte_count; int transmit_kbyte_count; } ;
struct TYPE_7__ {int semaphore; TYPE_1__ host_stats; } ;
struct TYPE_8__ {TYPE_2__ stats; } ;
typedef TYPE_3__ ocs_xport_stats_t ;
struct TYPE_9__ {int counter; } ;
typedef TYPE_4__ ocs_hw_host_stat_counts_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_4, uint32_t VAR_5, ocs_hw_host_stat_counts_t *VAR_6, void *VAR_7)
{
        ocs_xport_stats_t *VAR_8 = VAR_7;

        VAR_8->stats.host_stats.transmit_kbyte_count = VAR_6[VAR_3].counter;
        VAR_8->stats.host_stats.receive_kbyte_count = VAR_6[VAR_1].counter;
        VAR_8->stats.host_stats.transmit_frame_count = VAR_6[VAR_2].counter;
        VAR_8->stats.host_stats.receive_frame_count = VAR_6[VAR_0].counter;

        FUNC_0(&(VAR_8->stats.semaphore));
}
