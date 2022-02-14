
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct octeon_device {int dummy; } ;
struct TYPE_6__ {int param1; int cmd; } ;
struct TYPE_7__ {TYPE_1__ s; scalar_t__ cmd64; } ;
struct lio_ctrl_pkt {int wait_time; int cb_fn; struct lio* lio; int iq_no; TYPE_2__ ncmd; } ;
struct TYPE_10__ {TYPE_4__* txpciq; } ;
struct lio {struct octeon_device* oct_dev; TYPE_5__ linfo; } ;
struct ifnet {int dummy; } ;
struct TYPE_8__ {int q_no; } ;
struct TYPE_9__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int FUNC_0 (struct lio_ctrl_pkt*,int) ;
 void* FUNC_1 (struct ifnet*) ;
 int VAR_1 ;
 int FUNC_2 (struct octeon_device*,char*,int) ;
 int FUNC_3 (struct octeon_device*,struct lio_ctrl_pkt*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, struct ifnet *VAR_3, uint16_t VAR_4)
{
 struct lio_ctrl_pkt VAR_5;
 struct lio *VAR_6 = FUNC_1(VAR_3);
 struct octeon_device *VAR_7 = VAR_6->oct_dev;
 int VAR_8 = 0;

 if (FUNC_1(VAR_3) != VAR_2)
  return;

 if ((VAR_4 == 0) || (VAR_4 > 4095))
  return;

 FUNC_0(&VAR_5, sizeof(struct lio_ctrl_pkt));

 VAR_5.ncmd.cmd64 = 0;
 VAR_5.ncmd.s.cmd = VAR_0;
 VAR_5.ncmd.s.param1 = VAR_4;
 VAR_5.iq_no = VAR_6->linfo.txpciq[0].s.q_no;
 VAR_5.wait_time = 100;
 VAR_5.lio = VAR_6;
 VAR_5.cb_fn = VAR_1;

 VAR_8 = FUNC_3(VAR_6->oct_dev, &VAR_5);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7, "Add VLAN filter failed in core (ret: 0x%x)\n",
       VAR_8);
 }
}
