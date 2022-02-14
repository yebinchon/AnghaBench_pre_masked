
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int core; int pc; } ;
typedef TYPE_3__ cvmx_sample_entry_t ;
struct TYPE_8__ {scalar_t__ head; scalar_t__ end; scalar_t__ data; int sample_count; } ;
struct TYPE_10__ {scalar_t__ pcpu_data; TYPE_2__ pcpu_blk_info; } ;
typedef TYPE_4__ cvmx_ringbuf_t ;
struct TYPE_7__ {scalar_t__* pcpu_base_addr; } ;
struct TYPE_12__ {TYPE_1__ cfg_blk; } ;
struct TYPE_11__ {int sample_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_6__ VAR_2 ;
 TYPE_5__* VAR_3 ;

__attribute__((used)) static
void FUNC_7(void)
{
    uint32_t VAR_4;
    int VAR_5 = FUNC_3();
    FUNC_0(VAR_4, VAR_0);

    cvmx_ringbuf_t *VAR_6 = (cvmx_ringbuf_t *) VAR_2.cfg_blk.pcpu_base_addr[VAR_5];






    if (FUNC_6(!VAR_6->pcpu_blk_info.head && !VAR_6->pcpu_blk_info.end)) {


        FUNC_5();
        FUNC_4(VAR_5, VAR_1);
    }


    if (VAR_6->pcpu_blk_info.head == VAR_6->pcpu_blk_info.end)
        VAR_6->pcpu_blk_info.head = VAR_6->pcpu_blk_info.data = VAR_6->pcpu_data;


    cvmx_sample_entry_t *VAR_7 = (cvmx_sample_entry_t *) VAR_6->pcpu_blk_info.data;
    VAR_7->pc = VAR_4;
    VAR_7->core = VAR_5;


    VAR_6->pcpu_blk_info.sample_count++;
    VAR_6->pcpu_blk_info.data += sizeof(cvmx_sample_entry_t);
    VAR_6->pcpu_blk_info.head = VAR_6->pcpu_blk_info.data;


    FUNC_2(&(VAR_3->sample_count), 1);

    FUNC_1("the core%d:pc 0x%016lx, sample_count=%ld\n", VAR_5, VAR_7->pc, VAR_6->pcpu_blk_info.sample_count);
}
