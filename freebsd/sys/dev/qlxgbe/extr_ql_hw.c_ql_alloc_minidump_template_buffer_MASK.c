
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_7__ {TYPE_1__ minidump; } ;
struct TYPE_8__ {int * mdump_template; int mdump_template_size; TYPE_2__ dma_buf; } ;
struct TYPE_9__ {TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(qla_host_t *VAR_2)
{
 VAR_2->hw.mdump_template_size = VAR_2->hw.dma_buf.minidump.size;

 VAR_2->hw.mdump_template = FUNC_0(VAR_2->hw.mdump_template_size,
     VAR_1, VAR_0);

 if (VAR_2->hw.mdump_template == ((void*)0))
  return (-1);

 return (0);
}
