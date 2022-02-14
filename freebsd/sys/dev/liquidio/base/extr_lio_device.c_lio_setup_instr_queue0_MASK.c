
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ qpg; scalar_t__ use_qpg; int pkind; int q_no; } ;
union octeon_txpciq {TYPE_3__ s; scalar_t__ txpciq64; } ;
typedef int uint32_t ;
struct TYPE_5__ {int pkind; } ;
struct octeon_device {scalar_t__ num_iqs; TYPE_2__ pfvf_hsword; TYPE_1__** instr_queue; } ;
struct TYPE_4__ {scalar_t__ ifidx; void* app_ctx; scalar_t__ q_index; } ;


 int FUNC_0 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_4 (struct octeon_device*,union octeon_txpciq,int ) ;

int
FUNC_5(struct octeon_device *VAR_1)
{
 union octeon_txpciq VAR_2;
 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = 0;

 if (FUNC_1(VAR_1))
  VAR_4 =
   FUNC_2(FUNC_0(VAR_1,
           VAR_0));

 VAR_1->num_iqs = 0;

 VAR_1->instr_queue[0]->q_index = 0;
 VAR_1->instr_queue[0]->app_ctx = (void *)(size_t)0;
 VAR_1->instr_queue[0]->ifidx = 0;
 VAR_2.txpciq64 = 0;
 VAR_2.s.q_no = VAR_3;
 VAR_2.s.pkind = VAR_1->pfvf_hsword.pkind;
 VAR_2.s.use_qpg = 0;
 VAR_2.s.qpg = 0;
 if (FUNC_4(VAR_1, VAR_2, VAR_4)) {

  FUNC_3(VAR_1, 0);
  return (1);
 }

 VAR_1->num_iqs++;
 return (0);
}
