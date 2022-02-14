
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct octeon_intrmod_cfg {int rx_enable; } ;
struct octeon_device {int dummy; } ;
struct lio_soft_command {int wait_time; struct lio_soft_command* callback_arg; int callback; int iq_no; scalar_t__ virtdptr; scalar_t__ ctxptr; } ;
struct lio_intrmod_context {int status; scalar_t__ cond; int octeon_id; } ;
struct TYPE_6__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lio_soft_command* FUNC_1 (struct octeon_device*,int,int ,int) ;
 int FUNC_2 (struct octeon_device*,char*,int ) ;
 int FUNC_3 (struct octeon_device*,char*,int ) ;
 int FUNC_4 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_5 (struct octeon_device*) ;
 int FUNC_6 (struct octeon_device*,struct lio_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct octeon_device*,struct lio_soft_command*) ;
 int VAR_6 ;
 int FUNC_8 (struct octeon_device*,scalar_t__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct octeon_intrmod_cfg*,struct octeon_intrmod_cfg*,int) ;

__attribute__((used)) static int
FUNC_11(struct lio *VAR_7, struct octeon_intrmod_cfg *VAR_8)
{
 struct lio_soft_command *VAR_9;
 struct lio_intrmod_context *VAR_10;
 struct octeon_intrmod_cfg *VAR_11;
 struct octeon_device *VAR_12 = VAR_7->oct_dev;
 int VAR_13;


 VAR_9 = FUNC_1(VAR_12, sizeof(struct octeon_intrmod_cfg),
        0, sizeof(struct lio_intrmod_context));

 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_10 = (struct lio_intrmod_context *)VAR_9->ctxptr;

 VAR_10->cond = 0;
 VAR_10->octeon_id = FUNC_5(VAR_12);

 VAR_11 = (struct octeon_intrmod_cfg *)VAR_9->virtdptr;

 FUNC_10(VAR_11, VAR_8, sizeof(struct octeon_intrmod_cfg));
 FUNC_9((uint64_t *)VAR_11,
    (sizeof(struct octeon_intrmod_cfg)) / 8);

 VAR_9->iq_no = VAR_7->linfo.txpciq[0].s.q_no;

 FUNC_6(VAR_12, VAR_9, VAR_4,
     VAR_5, 0, 0, 0);

 VAR_9->callback = VAR_6;
 VAR_9->callback_arg = VAR_9;
 VAR_9->wait_time = 1000;

 VAR_13 = FUNC_7(VAR_12, VAR_9);
 if (VAR_13 == VAR_3) {
  FUNC_4(VAR_12, VAR_9);
  return (VAR_0);
 }





 FUNC_8(VAR_12, &VAR_10->cond);

 VAR_13 = VAR_10->status;
 if (VAR_13)
  FUNC_2(VAR_12, "intrmod config failed. Status: %llx\n",
       FUNC_0(VAR_13));
 else
  FUNC_3(VAR_12, "Rx-Adaptive Interrupt moderation enabled:%llx\n",
        FUNC_0(VAR_8->rx_enable));

 FUNC_4(VAR_12, VAR_9);

 return ((VAR_13) ? VAR_2 : 0);
}
