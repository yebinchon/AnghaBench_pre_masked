
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * mdump_buffer; int mdump_buffer_size; } ;
struct TYPE_6__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_2)
{
 VAR_2->hw.mdump_buffer_size = FUNC_1(VAR_2);

 if (!VAR_2->hw.mdump_buffer_size)
  return (-1);

 VAR_2->hw.mdump_buffer = FUNC_0(VAR_2->hw.mdump_buffer_size, VAR_1,
     VAR_0);

 if (VAR_2->hw.mdump_buffer == ((void*)0))
  return (-1);

 return (0);
}
