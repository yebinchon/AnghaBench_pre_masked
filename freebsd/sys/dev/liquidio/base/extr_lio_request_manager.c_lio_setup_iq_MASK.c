
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int q_no; } ;
union octeon_txpciq {int txpciq64; TYPE_1__ s; } ;
typedef size_t uint32_t ;
struct TYPE_8__ {scalar_t__ (* enable_io_queues ) (struct octeon_device*) ;} ;
struct octeon_device {TYPE_4__ fn_list; int num_iqs; TYPE_3__** instr_queue; } ;
struct TYPE_6__ {int txpciq64; } ;
struct TYPE_7__ {int q_index; int ifidx; TYPE_2__ txpciq; int * oct_dev; } ;


 int FUNC_0 (struct octeon_device*,size_t) ;
 int FUNC_1 (struct octeon_device*,char*,size_t) ;
 scalar_t__ FUNC_2 (struct octeon_device*,union octeon_txpciq,size_t) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;

int
FUNC_4(struct octeon_device *VAR_0, int VAR_1, int VAR_2,
      union octeon_txpciq VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5 = (uint32_t)VAR_3.s.q_no;

 if (VAR_0->instr_queue[VAR_5]->oct_dev != ((void*)0)) {
  FUNC_1(VAR_0, "IQ is in use. Cannot create the IQ: %d again\n",
       VAR_5);
  VAR_0->instr_queue[VAR_5]->txpciq.txpciq64 = VAR_3.txpciq64;
  return (0);
 }

 VAR_0->instr_queue[VAR_5]->q_index = VAR_2;
 VAR_0->instr_queue[VAR_5]->ifidx = VAR_1;

 if (FUNC_2(VAR_0, VAR_3, VAR_4)) {
  FUNC_0(VAR_0, VAR_5);
  return (1);
 }

 VAR_0->num_iqs++;
 if (VAR_0->fn_list.enable_io_queues(VAR_0))
  return (1);

 return (0);
}
