
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct octeon_device {int dummy; } ;
struct TYPE_6__ {int more; scalar_t__ param1; int cmd; } ;
struct TYPE_7__ {TYPE_1__ s; scalar_t__ cmd64; } ;
struct lio_ctrl_pkt {int wait_time; scalar_t__* udd; int cb_fn; struct lio* lio; int iq_no; TYPE_2__ ncmd; } ;
struct TYPE_10__ {int hw_addr; TYPE_4__* txpciq; } ;
struct lio {TYPE_5__ linfo; struct octeon_device* oct_dev; } ;
struct ifnet {int dummy; } ;
struct TYPE_8__ {int q_no; } ;
struct TYPE_9__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lio_ctrl_pkt*,int) ;
 struct lio* FUNC_1 (struct ifnet*) ;
 int VAR_4 ;
 int FUNC_2 (struct octeon_device*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct octeon_device*,struct lio_ctrl_pkt*) ;
 int FUNC_5 (int *,int *,int ) ;

int
FUNC_6(struct ifnet *VAR_5, uint8_t *VAR_6)
{
 struct lio_ctrl_pkt VAR_7;
 struct lio *VAR_8 = FUNC_1(VAR_5);
 struct octeon_device *VAR_9 = VAR_8->oct_dev;
 int VAR_10 = 0;

 if (!FUNC_3(VAR_6))
  return (VAR_0);

 FUNC_0(&VAR_7, sizeof(struct lio_ctrl_pkt));

 VAR_7.ncmd.cmd64 = 0;
 VAR_7.ncmd.s.cmd = VAR_3;
 VAR_7.ncmd.s.param1 = 0;
 VAR_7.ncmd.s.more = 1;
 VAR_7.iq_no = VAR_8->linfo.txpciq[0].s.q_no;
 VAR_7.lio = VAR_8;
 VAR_7.cb_fn = VAR_4;
 VAR_7.wait_time = 100;

 VAR_7.udd[0] = 0;

 FUNC_5((uint8_t *)&VAR_7.udd[0] + 2, VAR_6, VAR_2);

 VAR_10 = FUNC_4(VAR_8->oct_dev, &VAR_7);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9, "MAC Address change failed\n");
  return (VAR_1);
 }

 FUNC_5(((uint8_t *)&VAR_8->linfo.hw_addr) + 2, VAR_6, VAR_2);

 return (0);
}
