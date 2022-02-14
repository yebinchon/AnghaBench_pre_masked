
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dma_b; } ;
struct TYPE_10__ {TYPE_1__ minidump; } ;
struct TYPE_11__ {int mdump_done; int mdump_start_seq_index; int mdump_template_size; int mdump_template; TYPE_2__ dma_buf; int mdump_buffer_size; int mdump_buffer; int mdump_usec_ts; int mdump_init; } ;
struct TYPE_12__ {TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 () ;

void
FUNC_6(qla_host_t *VAR_0)
{
 if (!VAR_0->hw.mdump_init)
  return;

 if (VAR_0->hw.mdump_done)
  return;
 VAR_0->hw.mdump_usec_ts = FUNC_5();
 VAR_0->hw.mdump_start_seq_index = FUNC_4(VAR_0);

 FUNC_1(VAR_0->hw.mdump_buffer, VAR_0->hw.mdump_buffer_size);
 FUNC_1(VAR_0->hw.mdump_template, VAR_0->hw.mdump_template_size);

 FUNC_0(VAR_0->hw.dma_buf.minidump.dma_b, VAR_0->hw.mdump_template,
  VAR_0->hw.mdump_template_size);

 FUNC_2(VAR_0);

 FUNC_3(VAR_0, VAR_0->hw.mdump_start_seq_index);

 VAR_0->hw.mdump_done = 1;

 return;
}
