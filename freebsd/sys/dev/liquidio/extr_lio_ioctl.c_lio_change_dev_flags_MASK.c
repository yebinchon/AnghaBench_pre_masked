
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct octeon_device {int dummy; } ;
struct TYPE_6__ {int param1; int cmd; } ;
struct TYPE_7__ {TYPE_1__ s; scalar_t__ cmd64; } ;
struct lio_ctrl_pkt {int cb_fn; struct lio* lio; int iq_no; TYPE_2__ ncmd; } ;
struct TYPE_10__ {TYPE_4__* txpciq; } ;
struct lio {TYPE_5__ linfo; struct octeon_device* oct_dev; } ;
struct ifnet {int dummy; } ;
struct TYPE_8__ {int q_no; } ;
struct TYPE_9__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int FUNC_0 (struct lio_ctrl_pkt*,int) ;
 struct lio* FUNC_1 (struct ifnet*) ;
 int VAR_1 ;
 int FUNC_2 (struct octeon_device*,char*,int) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct octeon_device*,struct lio_ctrl_pkt*) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_2)
{
 struct lio_ctrl_pkt VAR_3;
 struct lio *VAR_4 = FUNC_1(VAR_2);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 int VAR_6 = 0;

 FUNC_0(&VAR_3, sizeof(struct lio_ctrl_pkt));


 VAR_3.ncmd.cmd64 = 0;
 VAR_3.ncmd.s.cmd = VAR_0;
 VAR_3.ncmd.s.param1 = FUNC_3(VAR_2);
 VAR_3.iq_no = VAR_4->linfo.txpciq[0].s.q_no;
 VAR_3.lio = VAR_4;
 VAR_3.cb_fn = VAR_1;

 VAR_6 = FUNC_4(VAR_5, &VAR_3);
 if (VAR_6)
  FUNC_2(VAR_5, "Failed to change flags ret %d\n", VAR_6);

 return (VAR_6);
}
