
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_device {int dummy; } ;
struct lio_soft_command {int wait_time; struct lio_soft_command* callback_arg; int callback; int iq_no; scalar_t__ virtrptr; } ;
struct lio_fw_stats_resp {int dummy; } ;
struct TYPE_6__ {TYPE_2__* txpciq; } ;
struct lio {int stats_interval; int stats_timer; TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lio_fw_stats_resp*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct lio_soft_command* FUNC_4 (struct octeon_device*,int ,int,int ) ;
 int FUNC_5 (struct octeon_device*,struct lio_soft_command*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct octeon_device*,struct lio_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct octeon_device*,struct lio_soft_command*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_4)
{
 struct lio *VAR_5 = VAR_4;
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 struct lio_soft_command *VAR_7;
 struct lio_fw_stats_resp *VAR_8;
 int VAR_9;

 if (FUNC_2(&VAR_5->stats_timer) ||
     FUNC_1(&VAR_5->stats_timer) == 0)
  return;


 VAR_7 = FUNC_4(VAR_6, 0,
        sizeof(struct lio_fw_stats_resp), 0);

 if (VAR_7 == ((void*)0))
  goto alloc_sc_failed;

 VAR_8 = (struct lio_fw_stats_resp *)VAR_7->virtrptr;
 FUNC_0(VAR_8, sizeof(struct lio_fw_stats_resp));

 VAR_7->iq_no = VAR_5->linfo.txpciq[0].s.q_no;

 FUNC_7(VAR_6, VAR_7, VAR_1,
     VAR_2, 0, 0, 0);

 VAR_7->callback = VAR_3;
 VAR_7->callback_arg = VAR_7;
 VAR_7->wait_time = 500;

 VAR_9 = FUNC_8(VAR_6, VAR_7);
 if (VAR_9 == VAR_0)
  goto send_sc_failed;

 return;

send_sc_failed:
 FUNC_5(VAR_6, VAR_7);
alloc_sc_failed:
 FUNC_3(&VAR_5->stats_timer,
    FUNC_6(VAR_5->stats_interval));
}
