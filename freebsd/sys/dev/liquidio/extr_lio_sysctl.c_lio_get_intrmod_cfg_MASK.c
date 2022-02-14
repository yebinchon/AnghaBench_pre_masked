
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_intrmod_cfg {int dummy; } ;
struct octeon_device {int dummy; } ;
struct lio_soft_command {int wait_time; struct lio_soft_command* callback_arg; int callback; int iq_no; scalar_t__ virtrptr; } ;
struct lio_intrmod_resp {int dummy; } ;
struct TYPE_6__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lio_intrmod_resp*,int) ;
 struct lio_soft_command* FUNC_1 (struct octeon_device*,int ,int,int ) ;
 int FUNC_2 (struct octeon_device*,struct lio_soft_command*) ;
 int VAR_5 ;
 int FUNC_3 (struct octeon_device*,struct lio_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct octeon_device*,struct lio_soft_command*) ;

__attribute__((used)) static int
FUNC_5(struct lio *VAR_6, struct octeon_intrmod_cfg *VAR_7)
{
 struct lio_soft_command *VAR_8;
 struct lio_intrmod_resp *VAR_9;
 struct octeon_device *VAR_10 = VAR_6->oct_dev;
 int VAR_11;


 VAR_8 = FUNC_1(VAR_10, 0, sizeof(struct lio_intrmod_resp),
        0);

 if (VAR_8 == ((void*)0))
  return (VAR_1);

 VAR_9 = (struct lio_intrmod_resp *)VAR_8->virtrptr;
 FUNC_0(VAR_9, sizeof(struct lio_intrmod_resp));
 VAR_8->iq_no = VAR_6->linfo.txpciq[0].s.q_no;

 FUNC_3(VAR_10, VAR_8, VAR_3,
     VAR_4, 0, 0, 0);

 VAR_8->callback = VAR_5;
 VAR_8->callback_arg = VAR_8;
 VAR_8->wait_time = 1000;

 VAR_11 = FUNC_4(VAR_10, VAR_8);
 if (VAR_11 == VAR_2) {
  FUNC_2(VAR_10, VAR_8);
  return (VAR_0);
 }

 return (0);
}
