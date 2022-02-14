
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int crc_error_count; int invalid_transmission_word_error_count; int primitive_sequence_error_count; int loss_of_sync_error_count; int link_failure_error_count; } ;
struct TYPE_7__ {int semaphore; TYPE_1__ link_stats; } ;
struct TYPE_8__ {TYPE_2__ stats; } ;
typedef TYPE_3__ ocs_xport_stats_t ;
struct TYPE_9__ {int counter; } ;
typedef TYPE_4__ ocs_hw_link_stat_counts_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_5, uint32_t VAR_6, ocs_hw_link_stat_counts_t *VAR_7, void *VAR_8)
{
        ocs_xport_stats_t *VAR_9 = VAR_8;

        VAR_9->stats.link_stats.link_failure_error_count = VAR_7[VAR_2].counter;
        VAR_9->stats.link_stats.loss_of_sync_error_count = VAR_7[VAR_3].counter;
        VAR_9->stats.link_stats.primitive_sequence_error_count = VAR_7[VAR_4].counter;
        VAR_9->stats.link_stats.invalid_transmission_word_error_count = VAR_7[VAR_1].counter;
        VAR_9->stats.link_stats.crc_error_count = VAR_7[VAR_0].counter;

        FUNC_0(&(VAR_9->stats.semaphore));
}
