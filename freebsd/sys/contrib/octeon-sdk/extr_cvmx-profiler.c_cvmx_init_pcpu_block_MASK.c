
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cvmx_sample_entry_t ;
struct TYPE_7__ {int size; int max_samples; char* data; char* head; char* tail; char* end; scalar_t__ sample_read; scalar_t__ sample_count; } ;
struct TYPE_9__ {char* pcpu_data; TYPE_1__ pcpu_blk_info; } ;
typedef TYPE_3__ cvmx_ringbuf_t ;
typedef int cvmx_cpu_event_block_t ;
struct TYPE_10__ {char** pcpu_base_addr; } ;
typedef TYPE_4__ cvmx_config_block_t ;
struct TYPE_8__ {char** pcpu_base_addr; } ;
struct TYPE_11__ {TYPE_2__ cfg_blk; scalar_t__ config_blk_base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_6__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
void FUNC_3(int VAR_5, int VAR_6)
{
    VAR_2.cfg_blk.pcpu_base_addr[VAR_5] = (char *)FUNC_2(VAR_0) + (VAR_6 * VAR_5);
    FUNC_0 (VAR_2.cfg_blk.pcpu_base_addr[VAR_5] != ((void*)0));

    cvmx_ringbuf_t *VAR_7 = (cvmx_ringbuf_t *) VAR_2.cfg_blk.pcpu_base_addr[VAR_5];

    VAR_7->pcpu_blk_info.size = VAR_6;
    VAR_7->pcpu_blk_info.max_samples = ((VAR_6 - sizeof(cvmx_cpu_event_block_t)) / sizeof(cvmx_sample_entry_t));
    VAR_7->pcpu_blk_info.sample_count = 0;
    VAR_7->pcpu_blk_info.sample_read = 0;
    VAR_7->pcpu_blk_info.data = VAR_2.cfg_blk.pcpu_base_addr[VAR_5] + sizeof(cvmx_cpu_event_block_t) + VAR_1;
    VAR_7->pcpu_blk_info.head = VAR_7->pcpu_blk_info.tail = VAR_7->pcpu_data = VAR_7->pcpu_blk_info.data;

    VAR_7->pcpu_blk_info.end = VAR_2.cfg_blk.pcpu_base_addr[VAR_5] + VAR_6;

    FUNC_1(&VAR_4, 0);






    VAR_3 = (cvmx_config_block_t *) VAR_2.config_blk_base_addr;
    VAR_3->pcpu_base_addr[VAR_5] = VAR_2.cfg_blk.pcpu_base_addr[VAR_5];
}
