
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ minidump; } ;
struct TYPE_10__ {int minidump; TYPE_1__ flags; } ;
struct TYPE_11__ {TYPE_2__ dma_buf; scalar_t__ mdump_init; } ;
struct TYPE_12__ {TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;


 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(qla_host_t *VAR_0)
{
 VAR_0->hw.mdump_init = 0;
 if (VAR_0->hw.dma_buf.flags.minidump) {
  VAR_0->hw.dma_buf.flags.minidump = 0;
  FUNC_0(VAR_0, &VAR_0->hw.dma_buf.minidump);
 }

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 return;
}
