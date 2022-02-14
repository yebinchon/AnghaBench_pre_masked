
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
struct TYPE_6__ {int cmd; int param1; } ;
struct TYPE_7__ {TYPE_1__ s; scalar_t__ cmd64; } ;
struct lio_ctrl_pkt {int wait_time; int cb_fn; struct lio* lio; int iq_no; TYPE_2__ ncmd; } ;
struct TYPE_10__ {TYPE_4__* txpciq; } ;
struct lio {struct octeon_device* oct_dev; TYPE_5__ linfo; } ;
struct ifnet {int dummy; } ;
struct TYPE_8__ {int q_no; } ;
struct TYPE_9__ {TYPE_3__ s; } ;


 int FUNC_0 (struct lio_ctrl_pkt*,int) ;
 struct lio* FUNC_1 (struct ifnet*) ;
 int VAR_0 ;
 int FUNC_2 (struct octeon_device*,char*,int) ;
 int FUNC_3 (struct octeon_device*,struct lio_ctrl_pkt*) ;

int
FUNC_4(struct ifnet *VAR_1, int VAR_2, uint16_t VAR_3)
{
 struct lio_ctrl_pkt VAR_4;
 struct lio *VAR_5 = FUNC_1(VAR_1);
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 int VAR_7 = 0;

 FUNC_0(&VAR_4, sizeof(struct lio_ctrl_pkt));

 VAR_4.ncmd.cmd64 = 0;
 VAR_4.ncmd.s.cmd = VAR_2;
 VAR_4.ncmd.s.param1 = VAR_3;
 VAR_4.iq_no = VAR_5->linfo.txpciq[0].s.q_no;
 VAR_4.wait_time = 100;
 VAR_4.lio = VAR_5;
 VAR_4.cb_fn = VAR_0;

 VAR_7 = FUNC_3(VAR_5->oct_dev, &VAR_4);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6, "Feature change failed in core (ret: 0x%x)\n",
       VAR_7);
 }

 return (VAR_7);
}
