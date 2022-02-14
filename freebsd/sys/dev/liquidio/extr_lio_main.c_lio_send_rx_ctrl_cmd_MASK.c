
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int param1; int cmd; } ;
union octeon_cmd {TYPE_1__ s; scalar_t__ cmd64; } ;
typedef int uint64_t ;
struct TYPE_10__ {int rx_on; } ;
struct octeon_device {TYPE_5__ props; } ;
struct lio_soft_command {int wait_time; struct lio_soft_command* callback_arg; int callback; int iq_no; scalar_t__ ctxptr; scalar_t__ virtdptr; } ;
struct lio_rx_ctl_context {scalar_t__ cond; int octeon_id; } ;
struct TYPE_9__ {TYPE_3__* txpciq; } ;
struct lio {TYPE_4__ linfo; scalar_t__ oct_dev; } ;
struct TYPE_7__ {int q_no; } ;
struct TYPE_8__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lio_soft_command* FUNC_0 (struct octeon_device*,int,int,int) ;
 int FUNC_1 (struct octeon_device*,char*) ;
 int FUNC_2 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*,struct lio_soft_command*,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_6 (struct octeon_device*,scalar_t__*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8(struct lio *VAR_6, int VAR_7)
{
 struct lio_soft_command *VAR_8;
 struct lio_rx_ctl_context *VAR_9;
 union octeon_cmd *VAR_10;
 struct octeon_device *VAR_11 = (struct octeon_device *)VAR_6->oct_dev;
 int VAR_12 = sizeof(struct lio_rx_ctl_context);
 int VAR_13;

 if (VAR_11->props.rx_on == VAR_7)
  return;

 VAR_8 = FUNC_0(VAR_11, VAR_4, 16, VAR_12);
 if (VAR_8 == ((void*)0))
  return;

 VAR_10 = (union octeon_cmd *)VAR_8->virtdptr;
 VAR_9 = (struct lio_rx_ctl_context *)VAR_8->ctxptr;

 VAR_9->cond = 0;
 VAR_9->octeon_id = FUNC_3(VAR_11);
 VAR_10->cmd64 = 0;
 VAR_10->s.cmd = VAR_0;
 VAR_10->s.param1 = VAR_7;

 FUNC_7((uint64_t *)VAR_10, (VAR_4 >> 3));

 VAR_8->iq_no = VAR_6->linfo.txpciq[0].s.q_no;

 FUNC_4(VAR_11, VAR_8, VAR_2, VAR_3, 0,
     0, 0);

 VAR_8->callback = VAR_5;
 VAR_8->callback_arg = VAR_8;
 VAR_8->wait_time = 5000;

 VAR_13 = FUNC_5(VAR_11, VAR_8);
 if (VAR_13 == VAR_1) {
  FUNC_1(VAR_11, "Failed to send RX Control message\n");
 } else {




  FUNC_6(VAR_11, &VAR_9->cond);
  VAR_11->props.rx_on = VAR_7;
 }

 FUNC_2(VAR_11, VAR_8);
}
